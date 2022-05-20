#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include "../Course/Course.h"
#include"../Database/GlobalData.h"

class Student
{
private:
	// attributes
	std::string id;
	std::string name;
	std::string password;
	std::string academic_year;
public:
	GlobalData* gd;
	std::vector<Course> finished_courses;
	std::vector<Course> courses_in_progress;
	bool changed;
	bool logged_in;
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
	void edit_student(Student);
	bool enroll_course(Course);
	bool add_finished_course(Course);
	static void login(std::string, std::string, Student&, std::unordered_map<std::string, Student>&);
	void view_course_data(Course course);
	void display_all_courses();
};
