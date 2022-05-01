#pragma once
#include<vector>
#include<string>
#include<iostream>
#include"../Student/Student.h"
#include"../Course/Course.h"

// forward decleration for DatabaseHandler class as it's including this class too.
class DatabaseHandler;

class Admin
{
private:
	// attributes
	std::string name;
	std::string password;
public:
	// methods
	// constructor
	bool login(std::string name, std::string password);
	void add_student(Student);

	void list_students(Course course);
	// courses
	void add_course(Course);
	bool set_course_prerequisites(Course& course);
	bool list_courses_for_student(Student stud);
	void edit_course(Course&);
};

