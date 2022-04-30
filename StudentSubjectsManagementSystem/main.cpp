#include <iostream>
#include "Database/DatabaseHandler.h"
#include<windows.h>

int main()
{
    std::cout << "Initializing DB\n";
    DatabaseHandler dbh;
    // create db
    dbh.create_db();
    // create tables
    dbh.create_table();
    //dbh.get_db_connection();

    Student ahmed;
    ahmed.set_id("20201701822");
    ahmed.set_name("Aser");
    ahmed.set_password("1233");
    ahmed.set_academic_year("2024");
    dbh.insert_student(ahmed, 1);

    Sleep(5000);
    return 0;
}
 