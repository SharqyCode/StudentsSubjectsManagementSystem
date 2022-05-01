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
//bool Admin::login(std::string name, std::string password)
//{
	// not implemented
//}

// add new student
void Admin::add_student(Student student)
{
	std::string id = student.get_id();
	gd->students[id] = student;
}

// add new course
//void Admin::add_course(Course)
//{
	// not implemented
//}

// set pre-requisites for a course
//bool Admin::set_course_prerequisites(Course& course)
//{
//	int cnt = 0;
//	std::cout << "How many courses to set: ";
//	std::cin >> cnt;
//	int size = cnt;
//	int count = cnt - 1;
//	int* arr = new int[size];
//	int course_code;
//	for (int i = 0; i < cnt; i++) {
//		std::cout << "Enter course #" << i + 1 << " code: ";
//		bool fnd = 0;
//		int in;
//		std::cin >> course_code;
//		for (int j = 0; j < data.Avialabe_Courses.size(); j++) {
//			if (data.Avialabe_Courses[j].get_code() == course_code) {
//				fnd = 1;
//				in = j;
//				break;
//			}
//		}
//		if (!fnd) {
//			std::cout << "Course not found : press1 to create a new course press2 to skip anything else to exit: ";
//			int ans;
//			std::cin >> ans;
//			if (ans == 1) {
//				data.Add_Course();
//				arr[count--] = data.Avialabe_Courses.size() - 1;
//			}
//			else if (ans == 2)
//				continue;
//			else {
//				size--;
//				return false;
//			}
//		}
//		arr[count--] = in;
//	}
//	std::vector<Course> pre_required;
//	for (int i = 0; i < size; i++) {
//		pre_required.push_back(data.Avialabe_Courses[i]);
//	}
//	course.set_pre_course_list(pre_required);
//	delete[] arr;
//	return true;
//}

// displays all students enrolld in a course
//void Admin::list_students_for_course(Course course)
//{
	//std::vector<Student> students;
	//for (int i = 0; i < data.Avialabe_Students.size(); i++) {
	//	std::vector<Course> courses = data.Avialabe_Students[i].get_courses_in_progress();
	//	for (int j = 0; j < courses.size(); j++) {
	//		if (courses[i].get_name() == course.get_name()) {
	//			students.push_back(data.Avialabe_Students[i]);
	//			break;
	//		}
	//	}
	//}
	//std::cout << "Students in course: \n";
	//std::vector<Student>::iterator it;
	//for (it = students.begin(); it != students.end(); it++)
	//	std::cout << (*it).get_name() << std::endl;
//}

// display all courses of a student
void Admin::list_courses_for_student(Student student)
{
	// display all finished courses
	std::cout << "Finished courses: \n";
	for (int i = 0; i < student.finished_courses.size(); i++)
		std::cout << student.get_name() << std::endl;
	// display all In-progress courses
	std::cout << "In-progress courses: \n";
	for (int i = 0; i < student.courses_in_progress.size(); i++)
		std::cout << student.get_name() << std::endl;
}

// edit course data
void Admin::edit_course(Course &course)
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
}
