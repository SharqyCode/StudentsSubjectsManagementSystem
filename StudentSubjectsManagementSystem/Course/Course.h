#pragma once
#include <string>
#include<vector>
#include <iostream>

// forward decleration for DatabaseHandler class and GLOBAL_DATA as it's including this class too.
class DatabaseHandler;
class GLOBAL_DATA;

class Course
{
private:
	// attributes
	GLOBAL_DATA* gd;
	std::string name;
	int code;
	int hours;//Course credit hours
	int max_num_of_students;
	std::vector<Course> pre_courses;//A vector that will carry pre-required courses
public:
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
	//void edit_course(Course);
};
