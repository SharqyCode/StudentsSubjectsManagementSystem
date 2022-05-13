#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include "sqlite3.h"
#include"../Admin/Admin.h"
#include "../Student/Student.h"
#include "../Course/Course.h"
#include "../Database/GlobalData.h"

class DatabaseHandler {
private:
	sqlite3* DB;
	const char* db_location;
public:
	DatabaseHandler();
	DatabaseHandler(sqlite3*);
	sqlite3* get_db_connection();

	void create_db();
	void create_table();
	void insert_test_data();
	void save_data_to_db(GlobalData&);

	// Admin
	int insert_admin(Admin);
	bool load_admin_in_memory(std::unordered_map<int, Admin>&);

	// Student
	bool check_if_student_exist(Student);
	int insert_student(Student, int);
	void delete_student(std::string student_id);

	int load_student_courses(std::string, std::vector<Course>&, std::vector<Course>&);
	bool load_students_in_memory(std::unordered_map<std::string, Student>&);

	int enroll_student(Student, Course, int);

	// Course
	int insert_course(Course, int);
	void delete_course(std::string course_id);
	int set_prerequisites_for_course(Course, std::vector<Course>);
	bool load_courses_in_memory(std::unordered_map<int, Course>& courses);
	int load_courses_prerequisites(std::string id, std::vector<Course>& prerequisites_prerequisites);
	int load_course_students_ids(std::string id, std::vector<std::string>& enrolled_students_ids);
};
