#include <iostream>
#include "Database/DatabaseHandler.h"
#include "Database/GlobalData.h"
#include<windows.h>
#include "Home.h"
using namespace StudentSubjectsManagementSystem;
/*int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Home());  std::cout << "Initializing DB\n";
    DatabaseHandler dbh;
    // create db
    dbh.create_db();
    // create tables
    dbh.create_table();
    // insert test data
    dbh.insert_test_data();
    // load global data
    GlobalData gd;
    dbh.load_admin_in_memory(gd.admin);
    dbh.load_students_in_memory(gd.students);
    dbh.load_courses_in_memory(gd.courses);
    // print to console
    for (auto& admin : gd.admin) {
        std::cout << "Info: Loaded from in memory hashtables, admin: " << admin.second.get_name() << std::endl;
    }
    for (auto& x : gd.students) {
        std::cout << "Info: Loaded from in memory hashtables, student: " << x.second.get_name() << std::endl;
        std::cout << "Info: Loaded from in memory hashtables, number of finished courses: " << x.second.finished_courses.size() << std::endl;
    }
    for (auto& course : gd.courses) {
        std::cout << "Info: Loaded from in memory hashtables, course: " << course.second.get_name() << std::endl;
    }
    // save changed data back to the database
    dbh.save_data_to_db(gd);
    // pause console
    std::string pause;
    std::cin >> pause;
    return 0;
}*/
int main() {
    DatabaseHandler dbh;
    // create db
    dbh.create_db();
    // create tables
    dbh.create_table();
    // insert test data
    dbh.insert_test_data();
    // load global data
    GlobalData gd;
    dbh.load_admin_in_memory(gd.admin);
    dbh.load_students_in_memory(gd.students);
    dbh.load_courses_in_memory(gd.courses);
    // print to console
  /* for (auto& admin : gd.admin) {
        std::cout << "Info: Loaded from in memory hashtables, admin: " << admin.second.get_name() << std::endl;
    }
    for (auto& x : gd.students) {
        std::cout << "Info: Loaded from in memory hashtables, student: " << x.second.get_name() << std::endl;
        std::cout << "Info: Loaded from in memory hashtables, number of finished courses: " << x.second.finished_courses.size() << std::endl;
    }
    for (auto& course : gd.courses) {
        std::cout << "Info: Loaded from in memory hashtables, course: " << course.second.get_name() << std::endl;
    }*/
   // std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n**************************************Student Subject Management System**************************************\n";
    int ans;
    std::cout << "Welcome Press1 to login as an admin Press2 to login as a student{Press-1 to exit}: ";
    std::cin >> ans;
    if (ans == 1) {
        //Admin
        Admin admin;
        int admin_ans;
        std::string name;
        std::string password;
        std::cout << "Username: ";
        std::cin >> name;
        std::cout << "Password: ";
        std::cin >> password;
        std::unordered_map<int, Admin>::iterator it;
        bool fnd = 0;
        for (it = gd.admin.begin(); it != gd.admin.end(); it++) {
            admin = it->second;
            admin.gd = &gd;
            if (admin.login(name, password)) {

                fnd = 1;
                break;
            }
            //std::cout << it->second.get_name();
            /*if (it->second.get_name() == name) {
                fnd = 1;
                admin = it->second;
                std::cout << "***********************hi**********************\n";
                break;
            }*/
       

        }
        if (!fnd) {
            std::cout << "'\n!!!!!!!!!!!!!!!!!!!!!!!Wrong user name or password!!!!!!!!!!!!!!!!!!!!!!!\n";
            return 0;
        }
        do {

            std::cout << "Press1 to add a student , Press2 to add a course , Press3 to enter a course's pre-requiset \n "
                << "Press4 to view List of all students in a specific course , Press5 to view List of all courses (Finished - Progressed) of a specific student\n"
                << "Press6 to edit all course data{Press-1 to exit}\n";
            std::cin >> admin_ans;
            if (admin_ans == 1) {
                Student stud;
                std::string name;
                std::string password;
                std::string id;
                std::string year;
                std::cout << "Student name: ";
                std::cin >> name;
                stud.set_name(name);
                std::cout << " password: ";
                std::cin >> password;
                stud.set_password(password);
                std::cout << "Id: ";
                std::cin >> id;
                stud.set_id(id);
                std::cout << "Academic year: ";
                std::cin >> year;
                stud.set_academic_year(year);
                admin.add_student(stud);
            }
            else if (admin_ans == 2) {
                Course course;
                std::string name;
                int code;
                int hours;
                int max;
                std::cout << "Course Name: ";
                std::cin >> name;
                course.set_name(name);
                std::cout << " Code: ";
                std::cin >> code;
                course.set_code(code);
                std::cout << "Hours: ";
                std::cin >> hours;
                course.set_hours(hours);
                std::cout << "Max number of students: ";
                std::cin >> max;
                course.set_max_num_of_students(max);
                admin.add_course(course);
            }
            else if (admin_ans == 3) {
                std::cout << "Enter a course's code: ";
                int code;
                std::cin >> code;
                std::unordered_map<int, Course> ::iterator it;
                Course course;
                for (it = gd.courses.begin(); it != gd.courses.end(); it++) {
                    if (it->second.get_code() == code) {
                        course = it->second;
                        break;
                    }
                }
                admin.set_course_prerequisites(course);
            }
            else if (admin_ans == 4) {
                std::cout << "Enter a course's code: ";
                int code;
                std::cin >> code;
                std::unordered_map<int, Course> ::iterator it;
                Course course;
                for (it = gd.courses.begin(); it != gd.courses.end(); it++) {
                    if (it->second.get_code() == code) {
                        course = it->second;
                        break;
                    }
                }
                admin.list_students_for_course(course);
            }
            else if (admin_ans == 5) {
                std::cout << "Enter a student's id: ";
                std::string id;
                std::cin >> id;
                std::unordered_map<std::string, Student>  ::iterator it;
                Student student;
                for (it = gd.students.begin(); it != gd.students.end(); it++) {
                    if (it->second.get_id() == id) {
                        student = it->second;
                        break;
                    }
                }
                admin.list_courses_for_student(student);
            }
            else if (admin_ans == 6) {
                std::cout << "Enter the course's code: ";
                int code;
                std::cin >> code;

                admin.edit_course(gd.courses[code]);

            }
            else if (admin_ans != -1) {
                std::cout << "\n ******************WRONG INPUT TRY AGAIN****************** \n ";
                return 0;
            }
        } while (admin_ans != -1);

    }
    else if (ans == 2) {
        Student student;
        int student_ans;
        std::string name;
        std::string password;
        std::cout << "Username: ";
        std::cin >> name;
        std::cout << "Password: ";
        std::cin >> password;
        std::unordered_map<std::string, Student> ::iterator it;
        bool fnd = 0;
        for (it = gd.students.begin(); it != gd.students.end(); it++) {
            student = it->second;
            student.gd = &gd;
           if (student.login(name, password)) {
                fnd = 1;
                //student = it->second;
               //std::cout << "correct\n";
                break;
            }
           /* if (it->second.get_name() == name) {
                fnd = 1;
                student = it->second;
                student.gd = &gd;
                break;
            }*/
        }
        if (!fnd) {
            std::cout << "'\n!!!!!!!!!!!!!!!!!!!!!!!Wrong user name or password!!!!!!!!!!!!!!!!!!!!!!!\n";
            return 0;
        }
        do {

            std::cout << "Press1 to view List of all available courses , Press2 to view details of a specific course , Press3 to register for a course \n "
                << "Press4 to view all his/her courses , Press5 to edit his/her data{Press-1 to exit}\n";
            std::cin >> student_ans;
            if (student_ans == 1) {
               // student.view_courses_available();
                std::unordered_map<int, Course>  ::iterator it;
                std::cout << "Avialabe Courses Are: \n";
                for (it = gd.courses.begin(); it != gd.courses.end(); it++) {
                    std::cout << it->second.get_name() << std::endl;
                }
            }
            else if (student_ans == 2) {
                std::cout << "Enter a course's code: ";
                int code;
                std::cin >> code;
                std::unordered_map<int, Course> ::iterator it;
                Course course;
                for (it = gd.courses.begin(); it != gd.courses.end(); it++) {
                    if (it->second.get_code() == code) {
                        course = it->second;
                        break;
                    }
                }
                student.view_course_data(course);
            }
            else if (student_ans == 3) {
                std::cout << "Enter a course's code: ";
                int code;
                std::cin >> code;
                std::unordered_map<int, Course> ::iterator it;
                Course course;
                for (it = gd.courses.begin(); it != gd.courses.end(); it++) {
                    if (it->second.get_code() == code) {
                        course = it->second;
                        break;
                    }
                }
                student.enroll_course(course);

                gd.students[student.get_id()] = student;
            }
            else if (student_ans == 4) {
                student.display_all_courses();
            }
            else if (student_ans == 5) {
                std::cout << "Enter your new data: \n";
                //Student stud;
                std::string name;
                std::string password;
                std::cout << "Student name: ";
                std::cin >> name;
                student.set_name(name);
                std::cout << " password: ";
                std::cin >> password;
                student.set_password(password);
                //student.edit_student(stud);
                gd.students[student.get_id()] = student;
            }
            else if (student_ans != -1) {
                std::cout << "\n ******************WRONG INPUT TRY AGAIN****************** \n ";
            }
        } while (student_ans != -1);


    }

    

    else if (ans == -1) {
        std::cout << "\n ******************Good bye****************** \n ";
        return 0;
    }
    else {
        std::cout << "\n ******************WRONG INPUT TRY AGAIN****************** \n ";
        return 0;
    }

    // save changed data back to the database
    dbh.save_data_to_db(gd);
    // pause console
    std::string pause;
    std::cin >> pause;
    return 0;
}