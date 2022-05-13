#include "Course.h"

Course::Course()
{
	changed = false;
}
Course::Course(std::string name, int code, int hours, int max_num_of_students)
{
	this->name = name;
	this->code = code;
	this->hours = hours;
	this->max_num_of_students = max_num_of_students;

	changed = false;
}
// returns course code
int Course::get_code()
{
	return code;
}
// returns course name
std::string Course::get_name()
{
	return name;
}
// returns course credit hours
int Course::get_hours()
{
	return hours;
}
// returns course max num of students
int Course::get_max_num_of_students()
{
	return max_num_of_students;
}
// returns list of pre-requisets for a course
std::vector<Course> Course::get_pre_courses()
{
	return prerequisites_courses;
}
// set course name
void Course::set_name(std::string name)
{
	this->name = name;
	this->changed = true;
}
// set course code
void Course::set_code(int code)
{
	this->code = code;
	this->changed = true;
}
// set course credit hours
void Course::set_hours(int hours)
{
	this->hours = hours;
	this->changed = true;
}
// set the max-num of students for a course
void Course::set_max_num_of_students(int max_num_of_students)
{
	this->max_num_of_students = max_num_of_students;
	this->changed = true;
}
// set list of pre-requisits for a course
void Course::set_pre_course_list(std::vector<Course> pre_courses)
{
	this->prerequisites_courses = pre_courses;
	this->changed = true;
}
// displays info about the course
void Course::view_course_data(Course this_course)
{
	std::cout << "---Course Data---" << std::endl;
	std::cout << "Name: " << this_course.name << std::endl;
	std::cout << "Code: " << this_course.code << std::endl;
	std::cout << "Hours: " << this_course.hours << std::endl;
	std::cout << "Max number of students: " << this_course.max_num_of_students << std::endl;
	std::cout << "Pre-required courses: " << std::endl;
	std::vector<Course>::iterator it;
	int i = 1;
	for (it = prerequisites_courses.begin(); it != prerequisites_courses.end(); it++)
	{
		std::cout << "#	" << i++ << " " << (*it).name << std::endl;
	}
}
// edit all values at once
void Course::edit_course(Course new_course)
{
	set_name(new_course.name);
	set_code(new_course.code);
	set_hours(new_course.hours);
	set_max_num_of_students(new_course.max_num_of_students);
	set_pre_course_list(new_course.prerequisites_courses);
}