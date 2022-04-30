#include "DatabaseHandler.h"

DatabaseHandler::DatabaseHandler() {
    // set db location
    db_location = "StudentsSubjectsManagementSystem.db";
}
DatabaseHandler::DatabaseHandler(sqlite3* DB) {
    // set db location
    db_location = "StudentsSubjectsManagementSystem.db";
    this->DB = DB;
}
// returns connection object
sqlite3* DatabaseHandler::get_db_connection()
{
    return this->DB;
}
// create database file
void DatabaseHandler::create_db()
{
    sqlite3_open(this->db_location, &this->DB);
    return;
}
// create tables
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
// check if student exist in the database
bool DatabaseHandler::check_if_student_exist(Student student)
{
    // get student id
    std::string id = student.get_id();
    // construct query
    std::string sql("SELECT * FROM student WHERE id=" + id + ";");

    std::cout << "Query: " << sql << std::endl;
    // execute prepared query
    int exec = sqlite3_prepare_v2(DB, sql.c_str(), -1, &result, NULL);
    // check query status
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't query the database" << std::endl;
        //sqlite3_free(message_error);
        return false;
    }
    // get results
    exec = sqlite3_step(result);
    // check if there is at least 1 row
    if (exec == SQLITE_ROW) {
        // found the student
        printf("%s\n", sqlite3_column_text(result, 0));
        return true;
    }
    else
    {
        // didn't find the student
        std::cerr << "Info: Couldn't find a student with id=" << id << std::endl;
        return false;
    }

    //while ((exec = sqlite3_step(result)) == SQLITE_ROW) {
        // process row here
    //    printf("%s\n", sqlite3_column_text(result, 1));
    //}

}
// insert student in the database
int DatabaseHandler::insert_student(Student student, int admin_id)
{
    char* message_error;

    if (check_if_student_exist(student) == 1)
    {
        std::cerr << "Error: Student already exists" << std::endl;
        return -1;
    }
    std::string id = student.get_id();
    std::string student_name = student.get_name();
    std::string student_password = student.get_password();
    std::string academic_year = student.get_academic_year();
    std::string str_admin_id = std::to_string(admin_id);

    std::string sql("INSERT INTO student (id, name, password, academic_year, admin_id) VALUES(" + id + ", '" + student_name + "', '" + student_password + "', '" + academic_year + "', " + str_admin_id + ");");
    std::cout << "Query: " << sql << std::endl;
    int exec = sqlite3_exec(DB, sql.c_str(), NULL, 0, &message_error);
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't insert student" << std::endl;
        sqlite3_free(message_error);
        return false;
    }
    else {
        std::cout << "Info: Student inserted successfully" << std::endl;
        return true;
    }
}
