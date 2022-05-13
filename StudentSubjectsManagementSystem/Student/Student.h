#pragma once
#include <string>
#include <vector>
#include "../Course/Course.h"

class Student
{
private:
	// attributes
	std::string id;
	std::string name;
	std::string password;
	std::string academic_year;
public:
	std::vector<Course> finished_courses;
	std::vector<Course> courses_in_progress;
	bool changed;
public:
	Student();
	Student(std::string, std::string, std::string, std::string);
	// methods
	// getters
	std::string get_id();
	std::string get_name();
	std::string get_password();
	std::string get_academic_year();
	std::vector<Course> get_finished_courses();
	std::vector<Course> get_courses_in_progress();
	// setters
	void set_id(std::string);
	void set_name(std::string);
	void set_password(std::string);
	void set_academic_year(std::string);
	// functionalities
	//void edit_student(Student);
	bool enroll_course(Course);
	bool add_finished_course(Course);
	//void view_courses_Available(Data& data);
	bool login(std::string, std::string);
};
