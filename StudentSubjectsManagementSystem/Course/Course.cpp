#include "Course.h"

//Intializes the data
Course::Course(string my_name, int my_code, int my_hours, int mns)
{
	name = my_name;
	code = my_code;
	hours = my_hours;
	max_num_of_students = mns;
}
//Gets course name
string Course::get_name()
{
	return name;
}
//Gets course code
int Course::get_code()
{
	return code;
}
//Gets course credit hours
int Course::get_hours()
{
	return hours;
}
//Gets course max-num of students
int Course::get_max_num_of_students()
{
	return max_num_of_students;
}
//Gets the list of pre-requisets for a course
vector<Course> Course::get_pre_courses()
{
	return pre_courses;
}
//Edits course name
void Course::set_name(string new_name)
{
	name = new_name;
}
//Edits course code
void Course::set_code(int new_code)
{
	code = new_code;
}
//Edits course credit hours
void Course::set_hours(int new_hours)
{
	hours = new_hours;
}
//Edits the max-num of students for a course
void Course::set_max_num_of_students(int new_nms)
{
	max_num_of_students = new_nms;
}
//Sets the list of pre-requisits for a course
void Course::set_pre_course_list(vector<Course> new_pre_courses)
{
	pre_courses = new_pre_courses;
}
//Displays info about the course
void Course::view_course_data(Course this_course)
{
	cout << "---Course Data---" << endl;
	cout << "Name: " << this_course.name << endl;
	cout << "Code: " << this_course.code << endl;
	cout << "Hours: " << this_course.hours << endl;
	cout << "Max number of students: " << this_course.max_num_of_students << endl;
	cout << "Pre-required courses: " << endl;
	vector<Course>::iterator it;
	int i = 1;
	for (it = pre_courses.begin(); it != pre_courses.end(); it++)
	{
		cout << "#	" << i++ << " " << (*it).name << endl;
	}
}
//Edits all values at once
void Course::edit_course(Course new_course)
{
	set_name(new_course.name);
	set_code(new_course.code);
	set_hours(new_course.hours);
	set_max_num_of_students(new_course.max_num_of_students);
	set_pre_course_list(new_course.pre_courses);
}