// changed comments case
// changed some valiables names
// changed academic_year data type
// added forward declaration for DatabaseHandler class
// added dbh attribute
// constructor overloading
// added id setter
// changed id to string
// removed std namespace usage
#include "Student.h"

// initialization
Student::Student(){}
Student::Student(std::string id, std::string name, std::string password, std::string academic_year)
{
	this->name = name;
	this->password = password;
	this->academic_year = academic_year;
	this->id = id;
}
// login functionality
bool Student::login(std::string input_name, std::string input_pass)
{
	if (name == input_name && password == input_pass)
		return true;
	else
		return false;
}
// returns student id
std::string Student::get_id()
{
	return id;
}
// returns student name
std::string Student::get_name()
{
	return name;
}
// returns student password
std::string Student::get_password()
{
	return password;
}
// returns student academic year
std::string Student::get_academic_year()
{
	return academic_year;
}
// retuns list of finished courses
std::vector<Course> Student::get_finished_courses()
{
	return finished_courses;
}
// renturns list of courses in progress
std::vector<Course> Student::get_courses_in_progress()
{
	return courses_in_progress;
}
// set id
void Student::set_id(std::string id)
{
	this->id = id;
}
// set name
void Student::set_name(std::string name)
{
	this->name = name;
}
// set password
void Student::set_password(std::string password)
{
	this->password = password;
}
// set academic year
void Student::set_academic_year(std::string academic_year)
{
	this->academic_year = academic_year;
}
// register new course
bool Student::register_course(Course new_course)
{
	// make sure pre-requisite complete, not in finished.
	std::cout << std::endl;
	for (int i = 0; i < finished_courses.size(); i++)
	{
		if (new_course.get_code() == finished_courses[i].get_code())
		{
			std::cout << "Course already registered." << std::endl;
			return false;
		}
	}
	std::vector<Course> required = new_course.get_pre_courses();
	for (int i = 0; i < required.size(); i++)
	{
		bool found = false;
		for (int j = 0; j < finished_courses.size(); j++)
		{
			if (required[i].get_code() == finished_courses[j].get_code())
			{
				found = true;
				break;
			}
		}
		if (!found) {

			std::cout << "Pre-requisites not completed." << std::endl;
			return false;
		}

	}
	courses_in_progress.push_back(new_course);
	std::cout << "Course added succsessfully" << std::endl;
	return true;
}

bool Student::add_finished_course(Course fin_course)
{

	int index = -1;
	for (int i = 0; i < courses_in_progress.size(); i++) {
		if (courses_in_progress[i].get_code() == fin_course.get_code()) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		std::cout << "*************Try again***********\n";
		return false;
	}
	finished_courses.push_back(fin_course);
	courses_in_progress.erase(courses_in_progress.begin() + index);
	return true;
}
//Displays information about a course
void Student::view_course_details(Course course)
{
	std::cout << "Course name: " << course.get_name() << std::endl;
	std::cout << "Course code: " << course.get_code() << std::endl;
	std::cout << "Course credit hours: " << course.get_hours() << std::endl;
	std::cout << "Pre-required courses: ";
	std::vector<Course> pre_required = course.get_pre_courses();
	std::vector<Course>::iterator it;
	int i = 1;
	for (it = pre_required.begin(); it != pre_required.end(); it++)
		std::cout << "#	" << i++ << " " << (*it).get_name() << std::endl;

}
//Displays all avliabel courses
//void Student::view_courses_Available(Data& data)
//{
//	vector<Course> ::iterator it;
//	cout << "Avialabe Courses Are: \n";
//	for (it = data.Avialabe_Courses.begin(); it != data.Avialabe_Courses.end(); it++)
//		cout << (*it).get_name() << endl;
//}
