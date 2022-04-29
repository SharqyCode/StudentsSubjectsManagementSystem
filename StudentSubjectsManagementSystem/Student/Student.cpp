#include "Student.h"


//Initializes memebers
Student::Student(string my_name, string pass, int id, int acad_year)
{
	name = my_name;
	password = pass;
	academic_year = acad_year;
	this->id = id;
}
//Checks the students credentials
bool Student::login(string input_name, string input_pass)
{
	if (name == input_name && password == input_pass)
		return true;
	else
		return false;
}
//	Returns id
int Student::get_id()
{
	return id;
}
//Returns name
string Student::get_name()
{
	return name;
}
//Returns password
string Student::get_password()
{
	return password;
}
//Returns academic year
int Student::get_academic_year()
{
	return academic_year;
}
//Retuns the list of finished courses
vector<Course> Student::get_finished_courses()
{
	return finished_courses;
}
//Renturns the list of courses currently in progress
vector<Course> Student::get_courses_in_progress()
{
	return courses_in_progress;
}
//Edits name
void Student::set_name(string new_name)
{
	name = new_name;
}
//Edits password
void Student::set_password(string new_pass)
{
	password = new_pass;
}
//Edits academic year
void Student::set_academic_year(int new_acad_year)
{
	academic_year = new_acad_year;
}
//Registers in a course
bool Student::register_course(Course new_course)
{
	//make sure pre-requisite complete, not in finished.
	cout << endl;
	for (int i = 0; i < finished_courses.size(); i++)
	{
		if (new_course.get_code() == finished_courses[i].get_code())
		{
			cout << "Course already registered." << endl;
			return false;
		}
	}
	vector<Course> required = new_course.get_pre_courses();
	for (int i = 0; i < required.size(); i++)
	{
		bool found = false;
		for (int j = 0; j < finished_courses.size(); j++)
		{
			if (required[i].get_code() == finished_courses[j].get_code())
			{
				found = true;
				break;
			}
		}
		if (!found) {

			cout << "Pre-requisites not completed." << endl;
			return false;
		}

	}
	courses_in_progress.push_back(new_course);
	cout << "Course added succsessfully" << endl;
	return true;
}

bool Student::add_finished_course(Course fin_course)
{

	int index = -1;
	for (int i = 0; i < courses_in_progress.size(); i++) {
		if (courses_in_progress[i].get_code() == fin_course.get_code()) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		cout << "*************Try again***********\n";
		return false;
	}
	finished_courses.push_back(fin_course);
	courses_in_progress.erase(courses_in_progress.begin() + index);
	return true;
}
//Displays information about a course
void Student::view_course_details(Course course)
{
	cout << "Course name: " << course.get_name() << endl;
	cout << "Course code: " << course.get_code() << endl;
	cout << "Course credit hours: " << course.get_hours() << endl;
	cout << "Pre-required courses: ";
	vector<Course> pre_required = course.get_pre_courses();
	vector<Course> ::iterator it;
	int i = 1;
	for (it = pre_required.begin(); it != pre_required.end(); it++)
		cout << "#	" << i++ << " " << (*it).get_name() << endl;

}
//Displays all avliabel courses
void Student::view_courses_Available(Data& data)
{
	vector<Course> ::iterator it;
	cout << "Avialabe Courses Are: \n";
	for (it = data.Avialabe_Courses.begin(); it != data.Avialabe_Courses.end(); it++)
		cout << (*it).get_name() << endl;
}
