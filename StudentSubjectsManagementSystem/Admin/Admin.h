//Includeing needed libraries and courses
#pragma once
#include<vector>
#include<string>
#include<iostream>
#include"Student.h"
#include"Course.h"
#include"Data.h"
using namespace std;
class Admin
{
	//Member Variables
private:
	string name;
	string password;
public:
	//Admin Functionalities
	bool Login(string name, string password);
	void Add_Stud(Data& data);
	void Add_Course(Data& data);
	bool Enter_pre_required(Course& course, Data& data);
	void List_Stud(Course course, Data& data);
	bool List_Course(Student stud, Data& data);
	bool Edit_Course(Data& data);
};

