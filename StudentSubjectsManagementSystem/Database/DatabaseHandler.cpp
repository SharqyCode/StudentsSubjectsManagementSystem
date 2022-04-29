#include "DatabaseHandler.h"

DatabaseHandler::DatabaseHandler() {
    // set db location
    db_location = "StudentsSubjectsManagementSystem.db";
    // create db
    create_db();
    // create tables
    create_table();
}

void DatabaseHandler::create_db()
{
    sqlite3_open(this->db_location, &this->DB);
    return;
}

void DatabaseHandler::create_table()
{
    // init sql
    std::string sql = "CREATE TABLE IF NOT EXISTS admin(id integer PRIMARY KEY AUTOINCREMENT, username text NOT NULL unique, name text NOT NULL, password text NOT NULL);"
    "CREATE TABLE IF NOT EXISTS student(id integer PRIMARY KEY, name text NOT NULL, password text NOT NULL, academic_year text NOT NULL, admin_id integer, foreign key(admin_id) references admin(id) ON delete cascade ON UPDATE no action);"
    "CREATE TABLE IF NOT EXISTS course(code integer PRIMARY KEY, hours integer NOT NULL, name text NOT NULL, max_no_of_stud integer NOT NULL, admin_id integer, foreign key(admin_id) references admin(id)ON delete cascade ON UPDATE no action);"
    "CREATE TABLE IF NOT EXISTS prereq(course integer, req_course integer, PRIMARY KEY(course, req_course), FOREIGN KEY(course) REFERENCES course(code) ON DELETE CASCADE ON UPDATE NO ACTION, FOREIGN KEY(req_course) REFERENCES course(code) ON DELETE CASCADE ON UPDATE NO ACTION);"
    "CREATE TABLE IF NOT EXISTS enrolled(stud_id integer, course_code integer, PRIMARY KEY(stud_id, course_code), FOREIGN KEY(stud_id) REFERENCES student(id) ON DELETE CASCADE ON UPDATE NO ACTION, FOREIGN KEY(course_code) REFERENCES course(code) ON DELETE CASCADE ON UPDATE NO ACTION);";
    try
    {
        char* message_error;
        // execute sql to create tables
        int exec = sqlite3_exec(this->DB, sql.c_str(), NULL, 0, &message_error);
        // check status of execution
        if (exec != SQLITE_OK) {
            // error happened
            std::cerr << "Error: Couldn't create specified tables" << std::endl;
            sqlite3_free(message_error);
        }
        else
            // executed successfully
            std::cout << "INFO: Tables created successfully" << std::endl;
    }
    catch (const std::exception& e)
    {
        // catch errors
        std::cerr << e.what();
    }
    return;
}
