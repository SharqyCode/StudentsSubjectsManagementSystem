// changed comments case
// changed some valiables names
// changed academic_year data type
// added forward declaration for DatabaseHandler class
// reimplemented list_courses_for_student()
// reimplemented edit_course()
// removed std namespace usage
#include "Admin.h"

// returns admin username
std::string Admin::get_username()
{
	return username;
}
// returns admin name
std::string Admin::get_name()
{
	return name;
}
// returns admin password
std::string Admin::get_password()
{
	return password;
}
// set admin name
void Admin::set_username(std::string username)
{
	this->username = username;
}
// set admin name
void Admin::set_name(std::string name)
{
	this->name = name;
}
// set admin password
void Admin::set_password(std::string password)
{
	this->password = password;
}
// admin login
bool Admin::login(std::string name, std::string password)
{
	std::string user = gd->admin[1].get_name() ;
	std::string pass = gd->admin[1].get_password();
	if (user == name && pass == password)
		return true;
	else
		false;

}


// add new student
void Admin::add_student(Student student)
{
	std::string id = student.get_id();
	gd->students[id] = student;
}

//add new course
void Admin::add_course(Course course)
{
	int code = course.get_code();
	gd->courses[code] = course;
}

// set pre-requisites for a course
/*bool Admin::set_course_prerequisites(Course course)
{
	int cnt = 0;
	std::cout << "How many courses to set: ";
	std::cin >> cnt;
	int size = cnt;
	int count = cnt - 1;
	std::vector<Course> pre_required;
	int course_code;
	int in = 0;
	for (int i = 0; i < cnt; i++) {
		std::cout << "Enter course #" << i + 1 << " code: ";
		bool fnd = 0;
		std::cin >> course_code;
		std::unordered_map<int, Course> ::iterator it;
		for (it = gd->courses.begin(); it != gd->courses.end(); it++) {

			if (it->second.get_code() == course_code) {
				fnd = 1;
				pre_required.push_back(it->second);
				break;
			}
		}
		if (!fnd) {
			std::cout << "Course not found ..... add course/N";
			return false;
		}
	}

	course.set_pre_course_list(pre_required);
	//gd->courses.emplace(course.get_code(), course);
	gd->courses[course.get_code()] = course;
	return true;
}
*/
void Admin::set_course_prerequisites(int  code1, int code2, int code3, int actual) {
    
	if(code1!=-1)
	gd->courses[actual].prerequisites_courses.push_back(gd->courses[code1]);
	if(code2!=-1)
	gd->courses[actual].prerequisites_courses.push_back(gd->courses[code2]);
	if(code3!=-1)
	gd->courses[actual].prerequisites_courses.push_back(gd->courses[code3]);
}
// displays all students enrolld in a course
/*void Admin::list_students_for_course(Course course)
{
	std::queue<Student> studs_enrolled;
	std::unordered_map<std::string, Student> ::iterator it;
	for (it = gd->students.begin(); it != gd->students.end(); it++) {
		std::vector<Course> courses = it->second.get_courses_in_progress();
		for (int j = 0; j < courses.size(); j++) {
			if (courses[j].get_name() == course.get_name()) {
				studs_enrolled.push(it->second);
				break;
			}
		}
	}
	std::cout << "Students in course: \n";
	for (int i = 0; i < studs_enrolled.size(); i++) {

		std::cout << studs_enrolled.front().get_name() << std::endl;
		studs_enrolled.pop();
	}
}*/
std::queue<Student> Admin::list_students_for_course(Course course) {

	std::queue<Student> studs_enrolled;
	std::unordered_map<std::string, Student> ::iterator it;
	for (it = gd->students.begin(); it != gd->students.end(); it++) {
		std::vector<Course> courses = it->second.get_courses_in_progress();
		for (int j = 0; j < courses.size(); j++) {
			if (courses[j].get_name() == course.get_name()) {
				studs_enrolled.push(it->second);
				break;
			}
		}
	}
	return studs_enrolled;
}
// display all courses of a student
void Admin::list_courses_for_student(Student student)
{
	// display all finished courses
	std::cout << "Finished courses: \n";
	for (int i = 0; i < student.finished_courses.size(); i++)
		std::cout << student.finished_courses[i].get_name()<< std::endl;
	// display all In-progress courses
	std::cout << "In-progress courses: \n";
	for (int i = 0; i < student.courses_in_progress.size(); i++)
		std::cout << student.courses_in_progress[i].get_name() << std::endl;

}

// edit course data
/*void Admin::edit_course(Course course)
{
	std::string name;
	int code, hours, max_number_of_students;

	std::cout << "Enter the new detials of the course:" << std::endl;

	std::cout << "Name: ";
	std::cin >> name;
	course.set_name(name);

	std::cout << "Code: ";
	std::cin >> code;
	course.set_code(code);

	std::cout << "Hours: ";
	std::cin >> hours;
	course.set_hours(hours);

	std::cout << "Max number of students: ";
	std::cin >> max_number_of_students;
	course.set_max_num_of_students(max_number_of_students);
}*/
void Admin::edit_course(Course course) {
	gd->courses[course.get_code()] = course;
}
