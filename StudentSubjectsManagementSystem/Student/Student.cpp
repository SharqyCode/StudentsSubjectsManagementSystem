#include "Student.h"


Student::Student()
{
	changed = false;
	logged_in = false;
}
Student::Student(std::string id, std::string name, std::string password, std::string academic_year)
{
	this->id = id;
	this->name = name;
	this->password = password;
	this->academic_year = academic_year;

	changed = false;
	logged_in = false;
}
// login functionality
void Student::login(std::string id, std::string password, Student& stud, std::unordered_map<std::string, Student>& students)
{
	for (auto& student : students) {
		std::string student_id = student.second.get_id();
		std::string student_password = student.second.get_password();

		if ((student_id == id) && (student_password == password))
		{
			student.second.logged_in = true;
			stud = student.second;
		}
	}
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
	this->changed = true;
}
// set name
void Student::set_name(std::string name)
{
	this->name = name;
	this->changed = true;
}
// set password
void Student::set_password(std::string password)
{
	this->password = password;
	this->changed = true;
}
// set academic year
void Student::set_academic_year(std::string academic_year)
{
	this->academic_year = academic_year;
	this->changed = true;
}
//Edits student data all at once
void Student::edit_student(Student stud)
{
	this->set_name(stud.name);
	this->set_password(stud.password);
	changed = true;
	//gd->students[id] = *(this);
}
// register new course
bool Student::enroll_course(Course new_course)
{
	// make sure pre-requisite complete, not in finished.
	std::cout << std::endl;
	if (new_course.get_max_num_of_students() == 0) {
		return false;
	}
	for (int i = 0; i < finished_courses.size(); i++)
	{
		if (new_course.get_code() == finished_courses[i].get_code())
		{
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
			return false;
		}

	}
	courses_in_progress.push_back(new_course);
	new_course.max_num_of_students--;
	gd->courses[new_course.get_code()] = new_course;
	this->changed = true;
	gd->students[id] = *(this);
	return true;
}
// add finished course
bool Student::add_finished_course(Course finished_course)
{
	int index = -1;
	for (int i = 0; i < courses_in_progress.size(); i++) {
		if (courses_in_progress[i].get_code() == finished_course.get_code()) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		std::cout << "*************Try again***********\n";
		return false;
	}
	finished_course.max_num_of_students++;
	finished_courses.push_back(finished_course);
	gd->courses[finished_course.get_code()] = finished_course;
	courses_in_progress.erase(courses_in_progress.begin() + index);
	this->changed = true;
	gd->students[id] = *(this);
	return true;
}
void Student::view_course_data(Course course)
{
	course.view_course_data(course);
}
void Student::display_all_courses()
{
	std::cout << "Finished courses" << std::endl;
	for (int i = 0; i < finished_courses.size(); i++)
		std::cout << finished_courses[i].get_name() << std::endl;

	std::cout << "In-progress courses" << std::endl;
	for (int i = 0; i < courses_in_progress.size(); i++)
		std::cout << courses_in_progress[i].get_name() << std::endl;
}
