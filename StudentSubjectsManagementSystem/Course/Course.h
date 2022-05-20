#pragma once
#include <string>
#include <vector>
#include <iostream>

class Course
{
private:
	// attributes
	std::string name;
	int code;
	int hours;
public:
	std::vector<Course> prerequisites_courses;
	std::vector<std::string> enrolled_students_ids;
	int max_num_of_students;
	bool changed;
public:
	Course();
	Course(std::string, int, int, int);
	// methods
	// getters
	std::string get_name();
	int get_code();
	int get_hours();
	int get_max_num_of_students();
	std::vector<Course> get_pre_courses();
	// setters
	void set_name(std::string);
	void set_code(int);
	void set_hours(int);
	void set_max_num_of_students(int);
	void set_pre_course_list(std::vector<Course>);
	// functionalities
	void view_course_data(Course);
	void edit_course(Course);
};
