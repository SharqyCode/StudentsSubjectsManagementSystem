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
    "CREATE TABLE IF NOT EXISTS enrolled(stud_id integer, course_code integer, status integer, PRIMARY KEY(stud_id, course_code), FOREIGN KEY(stud_id) REFERENCES student(id) ON DELETE CASCADE ON UPDATE NO ACTION, FOREIGN KEY(course_code) REFERENCES course(code) ON DELETE CASCADE ON UPDATE NO ACTION);";
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
// insert test data
void DatabaseHandler::insert_test_data()
{
    // insert admin
    Admin admin;
    admin.set_username("admin");
    admin.set_name("Wasft Elbaz");
    admin.set_password("weakpasswd");
    insert_admin(admin);

    // insert 3 students
    Student student1;
    student1.set_id("20201701801");
    student1.set_name("Mariam");
    student1.set_password("1233");
    student1.set_academic_year("2024");
    insert_student(student1, 1);

    Student student2;
    student2.set_id("20201701822");
    student2.set_name("Seif");
    student2.set_password("1233");
    student2.set_academic_year("2024");
    insert_student(student2, 1);

    Student student3;
    student3.set_id("20201701803");
    student3.set_name("Salma");
    student3.set_password("1233");
    student3.set_academic_year("2024");
    insert_student(student3, 1);

    // insert 4 courses
    Course course1;
    course1.set_code(111);
    course1.set_name("Intro to Programming");
    course1.set_hours(4);
    course1.set_max_num_of_students(10);
    insert_course(course1, 1);

    Course course2;
    course2.set_code(222);
    course2.set_name("Web Security");
    course2.set_hours(4);
    course2.set_max_num_of_students(10);
    insert_course(course2, 1);

    Course course3;
    course3.set_code(333);
    course3.set_name("Logic");
    course3.set_hours(4);
    course3.set_max_num_of_students(10);
    insert_course(course3, 1);

    Course course4;
    course4.set_code(444);
    course4.set_name("Networks");
    course4.set_hours(4);
    course4.set_max_num_of_students(10);
    insert_course(course4, 1);

    // enroll students
    enroll_student(student1, course1, 0);
    enroll_student(student1, course2, 1);
    enroll_student(student1, course3, 1);

    enroll_student(student2, course1, 1);
    enroll_student(student2, course2, 1);
    enroll_student(student2, course3, 0);

    enroll_student(student3, course1, 1);
    enroll_student(student3, course2, 1);
    enroll_student(student3, course3, 1);

    // set prerequisits
    std::vector<Course> preprerequisites1;
    preprerequisites1.push_back(course2);
    preprerequisites1.push_back(course4);
    set_prerequisites_for_course(course1, preprerequisites1);

    std::vector<Course> preprerequisites2;
    preprerequisites2.push_back(course3);
    preprerequisites2.push_back(course4);
    set_prerequisites_for_course(course2, preprerequisites2);

    std::vector<Course> preprerequisites3;
    preprerequisites3.push_back(course1);
    set_prerequisites_for_course(course3, preprerequisites3);
}
//insert admin
int DatabaseHandler::insert_admin(Admin admin)
{
    char* message_error;

    std::string admin_username = admin.get_username();
    std::string admin_name = admin.get_name();
    std::string admin_password = admin.get_password();

    std::string sql("INSERT INTO admin (username, name, password) VALUES('" + admin_username + "', '" + admin_name + "', '" + admin_password + "');");
    std::cout << "Query: " << sql << std::endl;

    int exec = sqlite3_exec(DB, sql.c_str(), NULL, 0, &message_error);
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't insert admin" << std::endl;
        sqlite3_free(message_error);
        return false;
    }
    else {
        std::cout << "Info: admin inserted successfully" << std::endl;
        return true;
    }
}
// check if student exist in the database
bool DatabaseHandler::check_if_student_exist(Student student)
{
    sqlite3_stmt* result;
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
        return true;
        std::cout << "Info: Foundd a student with id=" << id << std::endl;
    }
    else
    {
        // didn't find the student
        std::cout << "Info: Couldn't find a student with id=" << id << std::endl;
        return false;
    }
}
// insert student in the database
int DatabaseHandler::insert_student(Student student, int admin_id)
{
    sqlite3_stmt* result;
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
// delete student from the database
void DatabaseHandler::delete_student(std::string student_id)
{
    sqlite3_stmt* result;
    char* message_error;

    std::string sql("DELETE FROM student WHERE id="+ student_id +";");
    std::cout << "Query: " << sql << std::endl;
    int exec = sqlite3_exec(DB, sql.c_str(), NULL, 0, &message_error);
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't delete student" << std::endl;
        sqlite3_free(message_error);
    }
    else {
        std::cout << "Info: Deleted student successfully" << std::endl;
    }

    char* message_error2;

    std::string sql2("DELETE FROM enrolled WHERE stud_id=" + student_id + ";");
    std::cout << "Query: " << sql << std::endl;
    exec = sqlite3_exec(DB, sql2.c_str(), NULL, 0, &message_error2);
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't delete course(s)" << std::endl;
        sqlite3_free(message_error2);
    }
    else {
        std::cout << "Info: Deleted course(s) successfully" << std::endl;
    }
}
// load courses the student enrolled in
int DatabaseHandler::load_student_courses(std::string id, std::vector<Course>& student_finished_courses, std::vector<Course>& student_courses_in_progress)
{
    sqlite3_stmt* result1;
    // construct query
    std::string sql("SELECT course_code,status FROM enrolled WHERE stud_id=" + id + ";");
    std::cout << "Query: " << sql << std::endl;
    // execute prepared query
    int exec = sqlite3_prepare_v2(DB, sql.c_str(), -1, &result1, NULL);
    // check query status
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't query the database [Student Courses]" << std::endl;
        return false;
    }
    // load all courses
    std::vector<std::string> courses_in_progress_codes;
    std::vector<std::string> finished_courses_codes;

    while ((exec = sqlite3_step(result1)) == SQLITE_ROW) {
        // process row here
        int status = std::stoi(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result1, 1))));
        if (status == 1)
        {
            // courses in progress
            courses_in_progress_codes.push_back(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result1, 0))));
        }
        else
        {
            // finished courses
            finished_courses_codes.push_back(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result1, 0))));
        }
    }

    for (std::string course_code : courses_in_progress_codes)
    {
        sqlite3_stmt* result2;
        // construct query
        std::string sql("SELECT hours,name,max_no_of_stud  FROM course WHERE code=" + course_code + ";");
        std::cout << "Query: " << sql << std::endl;
        // execute prepared query
        int exec = sqlite3_prepare_v2(DB, sql.c_str(), -1, &result2, NULL);
        // check query status
        if (exec != SQLITE_OK) {
            std::cerr << "Error: Couldn't query the database [Courses in progress]" << std::endl;
            return false;
        }
        exec = sqlite3_step(result2);
        // check if there is at least 1 row
        if (exec == SQLITE_ROW) {
            
            Course course(
                std::string(reinterpret_cast<const char*>(sqlite3_column_text(result2, 1))), // set course name
                std::stoi(course_code), // set course code
                std::stoi(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result2, 0)))), // set course hours
                std::stoi(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result2, 2)))) // set course max no of student
            );

            student_courses_in_progress.push_back(course);
        }
    }

    for (std::string course_code : finished_courses_codes)
    {
        sqlite3_stmt* result3;
        // construct query
        std::string sql("SELECT hours,name,max_no_of_stud  FROM course WHERE code=" + course_code + ";");
        std::cout << "Query: " << sql << std::endl;
        // execute prepared query
        int exec = sqlite3_prepare_v2(DB, sql.c_str(), -1, &result3, NULL);
        // check query status
        if (exec != SQLITE_OK) {
            std::cerr << "Error: Couldn't query the database [Finished Courses]" << std::endl;
            return false;
        }
        exec = sqlite3_step(result3);
        // check if there is at least 1 row
        if (exec == SQLITE_ROW) {
            Course course;
            course.set_code(std::stoi(course_code)); // set course code
            course.set_hours(std::stoi(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result3, 0))))); // set course hours
            course.set_name(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result3, 1)))); // set course name
            course.set_max_num_of_students(std::stoi(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result3, 2))))); // set course max no of student

            student_finished_courses.push_back(course);
        }
    }
}

bool DatabaseHandler::load_admin_in_memory(std::unordered_map<int, Admin>& admin)
{
    sqlite3_stmt* result;
    // construct query
    std::string sql("SELECT * FROM admin");
    std::cout << "Query: " << sql << std::endl;
    // execute prepared query
    int exec = sqlite3_prepare_v2(DB, sql.c_str(), -1, &result, NULL);
    // check query status
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't query the database" << std::endl;
        return false;
    }

    while ((exec = sqlite3_step(result)) == SQLITE_ROW) {

        std::string id = std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 0)));

        // create student object
        Admin admin_obj;
        admin_obj.set_username(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 1)))); // set student name
        admin_obj.set_name(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 2)))); // set student name
        admin_obj.set_password(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 3)))); // set student password

        admin[0] = admin_obj;

        printf("Admin: %s loaded successfully.\n", sqlite3_column_text(result, 2));
    }
}

bool DatabaseHandler::load_students_in_memory(std::unordered_map<std::string, Student>& students)
{
    sqlite3_stmt* result;
    // construct query
    std::string sql("SELECT * FROM student");
    std::cout << "Query: " << sql << std::endl;
    // execute prepared query
    int exec = sqlite3_prepare_v2(DB, sql.c_str(), -1, &result, NULL);
    // check query status
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't query the database" << std::endl;
        return false;
    }

    while ((exec = sqlite3_step(result)) == SQLITE_ROW) {

        std::string id = std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 0)));

        // create student object  
        Student student(id, // set id
            std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 1))), // set student name
            std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 2))), // set student password
            std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 3))) // set student academic_year
            );

        // load courses
        load_student_courses(id, student.finished_courses, student.courses_in_progress);

        // load student to students hash tables
        students[id] = student;

        printf("Student: %s loaded successfully.\n", sqlite3_column_text(result, 1));
    }
    return true;
}
// insert course in the database
int DatabaseHandler::insert_course(Course course, int admin_id)
{
    sqlite3_stmt* result;
    char* message_error;

    std::string code = std::to_string(course.get_code());
    std::string course_name = course.get_name();
    std::string hours = std::to_string(course.get_hours());
    std::string max_num_of_students = std::to_string(course.get_max_num_of_students());
    std::string str_admin_id = std::to_string(admin_id);

    std::string sql("INSERT INTO course (code, name, hours, max_no_of_stud, admin_id) VALUES(" + code + ", '" + course_name + "', " + hours + ", " + max_num_of_students + ", " + str_admin_id + ");");
    std::cout << "Query: " << sql << std::endl;
    int exec = sqlite3_exec(DB, sql.c_str(), NULL, 0, &message_error);
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't insert course" << std::endl;
        std::cerr << message_error << std::endl;

        sqlite3_free(message_error);
        return false;
    }
    else {
        std::cout << "Info: Course inserted successfully" << std::endl;
        return true;
    }
}
// delete course from the database
void DatabaseHandler::delete_course(std::string course_id)
{
    sqlite3_stmt* result;
    char* message_error;

    std::string sql("DELETE FROM course WHERE code=" + course_id + ";");
    std::cout << "Query: " << sql << std::endl;
    int exec = sqlite3_exec(DB, sql.c_str(), NULL, 0, &message_error);
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't delete course" << std::endl;
        sqlite3_free(message_error);
    }
    else {
        std::cout << "Info: Deleted course successfully" << std::endl;
    }

    char* message_error2;

    std::string sql2("DELETE FROM prereq WHERE course=" + course_id + " OR req_course="+ course_id +";");
    std::cout << "Query: " << sql << std::endl;
    exec = sqlite3_exec(DB, sql2.c_str(), NULL, 0, &message_error2);
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't delete prereq course(s)" << std::endl;
        sqlite3_free(message_error2);
    }
    else {
        std::cout << "Info: Deleted prereq course(s) successfully" << std::endl;
    }
}
// enroll student
int DatabaseHandler::enroll_student(Student student, Course course, int status)
{
    sqlite3_stmt* result;
    char* message_error;
       
    std::string stud_id = student.get_id();
    std::string course_code = std::to_string(course.get_code());
    std::string course_status = std::to_string(status);

    std::string sql("INSERT INTO enrolled (stud_id, course_code, status) VALUES('" + stud_id + "', '" + course_code + "', " + course_status + ");");
    std::cout << "Query: " << sql << std::endl;
    int exec = sqlite3_exec(DB, sql.c_str(), NULL, 0, &message_error);
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't enroll course for student" << std::endl;
        std::cerr << message_error << std::endl;

        sqlite3_free(message_error);
        return false;
    }
    else {
        std::cout << "Info: Course enrolled for student" << std::endl;
        return true;
    }
}

int DatabaseHandler::set_prerequisites_for_course(Course course, std::vector<Course> preprerequisites)
{
    sqlite3_stmt* result;
    char* message_error;

    std::string course_code = std::to_string(course.get_code());

    for (auto& pre_course : preprerequisites) {
        std::string prerequisite_code = std::to_string(pre_course.get_code());
        std::string sql("INSERT INTO prereq (course, req_course) VALUES(" + course_code + ", " + prerequisite_code + ");");
        std::cout << "Query: " << sql << std::endl;
        int exec = sqlite3_exec(DB, sql.c_str(), NULL, 0, &message_error);
        if (exec != SQLITE_OK) {
            std::cerr << "Error: Couldn't set course prerequisites" << std::endl;
            std::cerr << message_error << std::endl;
            sqlite3_free(message_error);
            return false;
        }
        else {
            std::cout << "Info: Course prerequisites set successfully" << std::endl;
            return true;
        }
    }
}
// load course prerequisites
int DatabaseHandler::load_courses_prerequisites(std::string id, std::vector<Course>& prerequisites_course)
{
    sqlite3_stmt* result1;
    // construct query
    std::string sql("SELECT req_course FROM prereq WHERE course=" + id + ";");
    std::cout << "Query: " << sql << std::endl;
    // execute prepared query
    int exec = sqlite3_prepare_v2(DB, sql.c_str(), -1, &result1, NULL);
    // check query status
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't query the database [Courses Prerequisites]" << std::endl;
        return false;
    }
    // load all courses
    std::vector<std::string> prerequisites_course_codes;

    while ((exec = sqlite3_step(result1)) == SQLITE_ROW)
        prerequisites_course_codes.push_back(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result1, 0))));

    for (std::string course_code : prerequisites_course_codes)
    {
        sqlite3_stmt* result2;
        // construct query
        std::string sql("SELECT hours,name,max_no_of_stud  FROM course WHERE code=" + course_code + ";");
        std::cout << "Query: " << sql << std::endl;
        // execute prepared query
        int exec = sqlite3_prepare_v2(DB, sql.c_str(), -1, &result2, NULL);
        // check query status
        if (exec != SQLITE_OK) {
            std::cerr << "Error: Couldn't query the database [Courses in progress]" << std::endl;
            return false;
        }
        exec = sqlite3_step(result2);
        // check if there is at least 1 row
        if (exec == SQLITE_ROW) {
            Course course(
                std::string(reinterpret_cast<const char*>(sqlite3_column_text(result2, 1))), // set course name
                std::stoi(course_code), // set course code
                std::stoi(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result2, 0)))), // set course hours
                std::stoi(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result2, 2)))) // set course max no of student
                );

            prerequisites_course.push_back(course);
        }
    }
}
// load course enrolled students
int DatabaseHandler::load_course_students_ids(std::string id, std::vector<std::string>& enrolled_students_ids)
{
    sqlite3_stmt* result1;
    // construct query
    std::string sql("SELECT stud_id FROM enrolled WHERE course_code=" + id + ";");
    std::cout << "Query: " << sql << std::endl;
    // execute prepared query
    int exec = sqlite3_prepare_v2(DB, sql.c_str(), -1, &result1, NULL);
    // check query status
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't query the database [Courses Enrolled Students]" << std::endl;
        return false;
    }
    // load all students
    while ((exec = sqlite3_step(result1)) == SQLITE_ROW)
        enrolled_students_ids.push_back(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result1, 0))));
}
// load courses in memory
bool DatabaseHandler::load_courses_in_memory(std::unordered_map<int, Course>& courses)
{
    sqlite3_stmt* result;
    // construct query
    std::string sql("SELECT * FROM course");
    std::cout << "Query: " << sql << std::endl;
    // execute prepared query
    int exec = sqlite3_prepare_v2(DB, sql.c_str(), -1, &result, NULL);
    // check query status
    if (exec != SQLITE_OK) {
        std::cerr << "Error: Couldn't query the database for courses" << std::endl;
        return false;
    }

    while ((exec = sqlite3_step(result)) == SQLITE_ROW) {

        std::string id = std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 0)));

        // create student object  
        Course course(
            std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 2))), // set course name
            std::stoi(id), // set course code
            std::stoi(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 1)))), // set course hours
            std::stoi(std::string(reinterpret_cast<const char*>(sqlite3_column_text(result, 3)))) // set course max no of student
        );

        // load courses
        load_courses_prerequisites(id, course.prerequisites_courses);

        // get enrolled students id from db
        load_course_students_ids(id, course.enrolled_students_ids);

        // load student to students hash tables
        int int_id = std::stoi(id);
        courses[int_id] = course;

        printf("Course: %s loaded successfully.\n", sqlite3_column_text(result, 1));
    }
}

void DatabaseHandler::save_data_to_db(GlobalData& gd) {
    // handle students saving
    for (auto& student : gd.students) {
        if (student.second.changed)
        {
            // delete student
            delete_student(student.first);
            // insert student
            insert_student(student.second, 1);
            // enroll student in the courses (finished / in-progress)
            for (Course& course : student.second.finished_courses) {
                enroll_student(student.second, course, 0);
            }
            for (Course& course : student.second.courses_in_progress) {
                enroll_student(student.second, course, 1);
            }
        }
    }
    // handle courses saving
    for (auto& course : gd.courses) {
        if (course.second.changed)
        {
            // delete course
            delete_course(std::to_string(course.first));
            // insert course
            insert_course(course.second, 1);
            // set prereq courses
            set_prerequisites_for_course(course.second, course.second.prerequisites_courses);
        }
    }
}
