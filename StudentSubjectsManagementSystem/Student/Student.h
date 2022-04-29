//Including the libraries and classes needed
#pragma once
#include <string>
#include <vector>
#include "Course.h"
#include "Data.h"
using namespace std;
//Creating a Student class
class Student
{
	//Member Vrialbels
private:
	int id;
	string name;
	string password;
	int academic_year;
	vector<Course> finished_courses;
	vector<Course> courses_in_progress;
	//Member Functions
public:

	Student(string my_name, string pass, int id, int acad_year); //constructor
	//Getters
	int get_id();
	string get_name();
	string get_password();
	int get_academic_year();
	vector<Course> get_finished_courses();
	vector<Course> get_courses_in_progress();
	//Setters
	void set_name(string);
	void set_password(string);
	void set_academic_year(int);
	//Functionalities
	void edit_student(Student);
	bool register_course(Course);
	bool add_finished_course(Course);
	void view_course_details(Course);
	void view_courses_Available(Data& data);
	void view_all_Courses();
	bool login(string, string);
};

