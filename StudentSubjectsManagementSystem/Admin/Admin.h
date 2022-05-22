#pragma once
#include<vector>
#include<string>
#include<queue>
#include<iostream>
#include"../Student/Student.h"
#include"../Course/Course.h"
#include"../Database/GlobalData.h"

class Admin
{
private:
	// attributes
	std::string username;
	std::string name;
	std::string password;
public:
	// methods
	// getters

	GlobalData* gd;
	std::string get_username();
	std::string get_name();
	std::string get_password();
	// setters
	void set_username(std::string);
	void set_name(std::string);
	void set_password(std::string);
	// functionalities
	bool login(std::string, std::string);
	// students
	void add_student(Student);
	std:: queue<Student> list_students_for_course(Course);
	// courses
	void add_course(Course);
	//bool set_course_prerequisites(Course);
	void set_course_prerequisites(int, int, int , int);
	void list_courses_for_student(Student);
	void edit_course(Course);
};