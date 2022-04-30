#include "Admin.h"

//Checks Admin's credentials
bool Admin::Login(string name, string password)
{
	if (this->name == name && this->password == password)
		return true;
	else
		return false;
}
//Creats a student
void Admin::Add_Stud(Data& data)
{
	data.Add_Student();
}
//Creates a course
void Admin::Add_Course(Data& data)
{
	data.Add_Course();
}
//Sets the pre-requisets of a course
bool Admin::Enter_pre_required(Course& course, Data& data)
{
	int cnt = 0;
	cout << "How many courses to set: ";
	cin >> cnt;
	int size = cnt;
	int count = cnt - 1;
	int* arr = new int[size];
	int course_code;
	for (int i = 0; i < cnt; i++) {
		cout << "Enter course # " << i + 1 << " code: ";
		bool fnd = 0;
		int in;
		cin >> course_code;
		for (int j = 0; j < data.Avialabe_Courses.size(); j++) {
			if (data.Avialabe_Courses[j].get_code() == course_code) {
				fnd = 1;
				in = j;
				break;
			}
		}
		if (!fnd) {
			cout << "Course not found : press1 to create a new course press2 to skip anything else to exit: ";
			int ans;
			cin >> ans;
			if (ans == 1) {
				data.Add_Course();
				arr[count--] = data.Avialabe_Courses.size() - 1;
			}
			else if (ans == 2)
				continue;
			else {
				size--;
				return false;
			}
		}
		arr[count--] = in;
	}
	vector<Course> pre_required;
	for (int i = 0; i < size; i++) {
		pre_required.push_back(data.Avialabe_Courses[i]);
	}
	course.set_pre_course_list(pre_required);
	delete[] arr;
	return true;
}
//Displays all students enrolld in a course
void Admin::List_Stud(Course course, Data& data)
{
	vector<Student> students;
	for (int i = 0; i < data.Avialabe_Students.size(); i++) {
		vector<Course> courses = data.Avialabe_Students[i].get_courses_in_progress();
		for (int j = 0; j < courses.size(); j++) {
			if (courses[i].get_name() == course.get_name()) {
				students.push_back(data.Avialabe_Students[i]);
				break;
			}
		}
	}
	cout << "Students in course: \n";
	vector<Student>::iterator it;
	for (it = students.begin(); it != students.end(); it++)
		cout << (*it).get_name() << endl;
}

//Displays course of a certian student
bool Admin::List_Course(Student stud, Data& data)
{
	int index = -1;
	for (int i = 0; i < data.Avialabe_Students.size(); i++) {
		if (data.Avialabe_Students[i].get_name() == stud.get_name()) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		cout << "Student not found\n";
		return false;
	}
	vector<Course> finished = data.Avialabe_Students[index].get_finished_courses();
	vector<Course> in_progress = data.Avialabe_Students[index].get_courses_in_progress();
	cout << "Finished courses: \n";
	for (int i = 0; i < finished.size(); i++)
		cout << finished[i].get_name() << endl;
	cout << "Inprogress courses: \n";
	for (int i = 0; i < in_progress.size(); i++)
		cout << in_progress[i].get_name() << endl;
}
//Edits info about a certian course
bool Admin::Edit_Course(Data& data)
{
	int index = -1;
	cout << "Enter the code of the course to edit: ";
	int code;
	cin >> code;
	for (int i = 0; i < data.Avialabe_Courses.size(); i++) {
		if (data.Avialabe_Courses[i].get_code() == code) {
			index = i;
			break;
		}
	}
	if (index == -1) {
		cout << "Course not found\n";
		return false;
	}
	string name;
	int code, hours, max_studs;
	cout << "Enter the new detials of the course: ";
	cout << "Name: ";
	cin >> name;
	cout << "Code: ";
	cin >> code;
	cout << "Credit Hours: ";
	cin >> hours;
	cout << "Max number of students: ";
	cin >> max_studs;
	return true;
}
