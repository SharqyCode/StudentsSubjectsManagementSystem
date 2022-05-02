#include <iostream>
#include "Database/DatabaseHandler.h"
#include "Database/GlobalData.h"
#include<windows.h>
#include "Home.h"
using namespace StudentSubjectsManagementSystem;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
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

    for (auto& admin : gd.admin) {
        std::cout << "Info: Loaded from in memory hashtables, admin: " << admin.second.get_name() << std::endl;
    }

    for (auto& x : gd.students) {
        std::cout << "Info: Loaded from in memory hashtables, student: " << x.second.get_name() << std::endl;
        std::cout << "Info: Loaded from in memory hashtables, number of finished courses: " << x.second.finished_courses.size() << std::endl;
    }

    std::string pause;
    std::cin >> pause;
    return 0;
}