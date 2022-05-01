#pragma once

#include <string>
#include <unordered_map>

class Admin;
class Student;

class GlobalData {
public:
    std::unordered_map<int, Admin> admin;
    std::unordered_map<std::string, Student> students;
};
