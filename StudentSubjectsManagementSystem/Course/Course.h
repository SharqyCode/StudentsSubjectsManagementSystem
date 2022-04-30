//Including needed libraries
#pragma once
#include <string>
#include<vector>
#include <iostream>
using namespace std;
//Course Class
class Course
{
	//Course Class member variables
private:
	string name;
	int code;
	int hours;//Course credit hours
	int max_num_of_students;
	vector<Course> pre_courses;//A vector that will carry pre-required courses

	//Corse Class member function
public:
	Course(string my_name, int my_code, int my_hours, int mns); //constructor
	//Getters
	string get_name();
	int get_code();
	int get_hours();
	int get_max_num_of_students();
	vector<Course> get_pre_courses();
	//Setters
	void set_name(string);
	void set_code(int);
	void set_hours(int);
	void set_max_num_of_students(int);
	void set_pre_course_list(vector<Course>);
	//Functionalities
	void view_course_data(Course);
	void edit_course(Course);
};
