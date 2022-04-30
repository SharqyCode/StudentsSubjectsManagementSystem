#pragma once
#include "sqlite3.h"
#include <iostream>
#include <string>
#include "../Student/Student.h"
#include "../Course/Course.h"

//char* sql_escape(const char* str);

class DatabaseHandler
{
private:
	sqlite3* DB;
	sqlite3_stmt* result;
	const char* db_location;

public:
	DatabaseHandler();
	DatabaseHandler(sqlite3*);
	sqlite3* get_db_connection();
	void create_db();
	void create_table();
	
	bool check_if_student_exist(Student);
	int insert_student(Student, int);
	
};
