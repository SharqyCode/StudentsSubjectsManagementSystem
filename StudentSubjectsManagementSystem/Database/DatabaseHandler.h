#pragma once
#include "sqlite3.h"
#include <iostream>
#include <string>

class DatabaseHandler
{
private:
	sqlite3* DB;
	const char* db_location;

public:
	DatabaseHandler();
	void create_db();
	void create_table();
	bool insert_student();
};

