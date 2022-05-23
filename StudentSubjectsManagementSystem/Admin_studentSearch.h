#pragma once
#include<msclr/marshal_cppstd.h>;
#include<string>;
#include"..\StudentSubjectsManagementSystem\\Admin\Admin.h";

#include "Student/Student.h"
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;


	/// <summary>
	/// Summary for Admin_studentSearch
	/// </summary>
	public ref class Admin_studentSearch : public System::Windows::Forms::Form
	{
	public:
		Form^ search;
	private: System::Windows::Forms::ListView^ resultStudentSearch;
	private: System::Windows::Forms::ToolTip^ search_toolTip;
	public:
		Admin* admin;
		Admin_studentSearch(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Admin_studentSearch(Form^ form, Admin* obj)
		{
			search = form;
			admin = obj;
			InitializeComponent();

			resultStudentSearch->View = View::Details;
			resultStudentSearch->Columns->Add("Name", 180);
			resultStudentSearch->Columns->Add("Finished");
			resultStudentSearch->Columns->Add("Inprogress");

			//
			//TODO: Add the constructor code here
		//
		//TODO: Add the constructor code here
		//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin_studentSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ search_textBox;
	protected:
	private: System::Windows::Forms::PictureBox^ search_back_B;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_studentSearch::typeid));
			this->search_textBox = (gcnew System::Windows::Forms::TextBox());
			this->search_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->resultStudentSearch = (gcnew System::Windows::Forms::ListView());
			this->search_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// search_textBox
			// 
			this->search_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_textBox->Location = System::Drawing::Point(363, 144);
			this->search_textBox->Name = L"search_textBox";
			this->search_textBox->Size = System::Drawing::Size(136, 13);
			this->search_textBox->TabIndex = 0;
			this->search_textBox->TextChanged += gcnew System::EventHandler(this, &Admin_studentSearch::search_textBox_TextChanged);
			this->search_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Admin_studentSearch::search_textBox_KeyDown);
			this->search_textBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin_studentSearch::search_textBox_MouseMove);
			// 
			// search_back_B
			// 
			this->search_back_B->BackColor = System::Drawing::Color::Transparent;
			this->search_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_back_B.Image")));
			this->search_back_B->Location = System::Drawing::Point(0, -1);
			this->search_back_B->Name = L"search_back_B";
			this->search_back_B->Size = System::Drawing::Size(47, 50);
			this->search_back_B->TabIndex = 1;
			this->search_back_B->TabStop = false;
			this->search_back_B->Click += gcnew System::EventHandler(this, &Admin_studentSearch::search_back_B_Click);
			// 
			// resultStudentSearch
			// 
			this->resultStudentSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->resultStudentSearch->GridLines = true;
			this->resultStudentSearch->HideSelection = false;
			this->resultStudentSearch->Location = System::Drawing::Point(36, 88);
			this->resultStudentSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->resultStudentSearch->Name = L"resultStudentSearch";
			this->resultStudentSearch->Size = System::Drawing::Size(275, 250);
			this->resultStudentSearch->TabIndex = 2;
			this->resultStudentSearch->UseCompatibleStateImageBehavior = false;
			this->resultStudentSearch->View = System::Windows::Forms::View::Details;
			// 
			// Admin_studentSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->resultStudentSearch);
			this->Controls->Add(this->search_back_B);
			this->Controls->Add(this->search_textBox);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Admin_studentSearch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin_studentSearch";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_back_B))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void search_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		search->Show();

	}

	private: System::Void search_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string id = context.marshal_as<std::string>(search_textBox->Text);
		std::unordered_map<std::string, Student>  ::iterator it;
		Student student;
		for (it = admin->gd->students.begin(); it != admin->gd->students.end(); it++) {
			if (it->second.get_id() == id) {
				student = it->second;
				break;
			}
		}

		/*To do :
			now you have object student from which you can get the finshed courses and course in proggress
			keep in mind both are vectors of courses:
			student.finished_courses;
			student.courses_in_progress;
			all you have to do is display them

		*/
	}

	private: System::Void search_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		std::string input = marshal_as<std::string>(search_textBox->Text);
		resultStudentSearch->Items->Clear();

		if (input == "") {
			return;
		}

		for (auto studentItem : admin->gd->students) {

			auto stud = studentItem.second;
			if (stud.get_name().rfind(input, 0) == 0) {

				auto fullNameStr = gcnew System::String(stud.get_name().c_str());

				std::string coursesStr = "";
				for (auto course : stud.get_finished_courses())
					coursesStr += "  " + course.get_name();
				std::string coursesStr2 = "";
				for (auto course : stud.get_courses_in_progress())
					coursesStr2 += "  " + course.get_name();

				auto courses = gcnew System::String(coursesStr.c_str());
				auto courses2 = gcnew System::String(coursesStr2.c_str());
				auto arr = gcnew array<String^>(3);
				arr[0] = fullNameStr;
				arr[1] = courses;
				arr[2] = courses2;
				resultStudentSearch->Items->Add(gcnew ListViewItem(arr));
			}
		}


	}
	private: System::Void search_textBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		search_toolTip->SetToolTip(search_textBox,"Enter Student Name to view Registered Courses.");
	}
};
}