#pragma once
#include<msclr/marshal_cppstd.h>
#include<string>
#include"../StudentSubjectsManagementSystem/Student/Student.h"

namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Student_ViewAvailableCourses
	/// </summary>
	public ref class Student_ViewAvailableCourses : public System::Windows::Forms::Form
	{
	public:
		Form^ back ;
	private: System::Windows::Forms::PictureBox^ addcourse_back_B;
	private: System::Windows::Forms::ListView^ resultStudentSearch;

	public:
		Student* student;
		Student_ViewAvailableCourses(Form ^form , Student * obj )
		{
			back = form;
			student = obj;
			InitializeComponent();
			resultStudentSearch->View = View::Details;
			resultStudentSearch->Columns->Add("Name", 180);
			resultStudentSearch->Columns->Add("Code");
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Student_ViewAvailableCourses()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student_ViewAvailableCourses::typeid));
			this->addcourse_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->resultStudentSearch = (gcnew System::Windows::Forms::ListView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// addcourse_back_B
			// 
			this->addcourse_back_B->BackColor = System::Drawing::Color::Transparent;
			this->addcourse_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcourse_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addcourse_back_B.Image")));
			this->addcourse_back_B->Location = System::Drawing::Point(-1, -1);
			this->addcourse_back_B->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->addcourse_back_B->Name = L"addcourse_back_B";
			this->addcourse_back_B->Size = System::Drawing::Size(38, 46);
			this->addcourse_back_B->TabIndex = 49;
			this->addcourse_back_B->TabStop = false;
			this->addcourse_back_B->Click += gcnew System::EventHandler(this, &Student_ViewAvailableCourses::addcourse_back_B_Click);
			// 
			// resultStudentSearch
			// 
			this->resultStudentSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->resultStudentSearch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultStudentSearch->GridLines = true;
			this->resultStudentSearch->HideSelection = false;
			this->resultStudentSearch->Location = System::Drawing::Point(40, 100);
			this->resultStudentSearch->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->resultStudentSearch->Name = L"resultStudentSearch";
			this->resultStudentSearch->Size = System::Drawing::Size(292, 244);
			this->resultStudentSearch->TabIndex = 50;
			this->resultStudentSearch->UseCompatibleStateImageBehavior = false;
			this->resultStudentSearch->View = System::Windows::Forms::View::Details;
			// 
			// Student_ViewAvailableCourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->resultStudentSearch);
			this->Controls->Add(this->addcourse_back_B);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Student_ViewAvailableCourses";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student_ViewAvailableCourses";
			this->Load += gcnew System::EventHandler(this, &Student_ViewAvailableCourses::Student_ViewAvailableCourses_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addcourse_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		back->Show();
	}
     /*To do: 
	 * add a tool box to display
	 * inside the tool box's function call on 
		student->gd->courses
		this is an unordered list that you can iterate on to get the courses' names as following:
		std::unordered_map<int, Course> ::iterator it;
		for (it = student->gd->courses.begin(); it != student->gd->courses.end(); it++) {
			std::cout << it->second.get_name() << std::endl;
		}
	 */
private: System::Void Student_ViewAvailableCourses_Load(System::Object^ sender, System::EventArgs^ e) {

	std::string nameStr = "";
	for (auto course : student->gd->courses)
		nameStr += "  " + course.second.get_name();
	std::string codeStr = "";
	for (auto course : student->gd->courses)
		codeStr += "  " + std::to_string(course.second.get_code());

	auto name = gcnew System::String(nameStr.c_str());
	auto code = gcnew System::String(codeStr.c_str());
	auto arr = gcnew array<String^>(2);
	arr[0] = name;
	arr[1] = code;
	resultStudentSearch->Items->Add(gcnew ListViewItem(arr));
}
};
}
