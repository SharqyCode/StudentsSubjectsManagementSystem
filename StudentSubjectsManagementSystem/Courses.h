#pragma once
#include <string>
#include<msclr/marshal_cppstd.h>
#include "../StudentSubjectsManagementSystem/Student/Student.h"
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Courses
	/// </summary>
	public ref class Courses : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::ListView^ resultStudentSearch;
	public:
		Student* student;
		Form^ backform4;
		Courses(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}
		Courses(Form^ form , Student * obj ) {
			backform4 = form;
			student = obj;
			InitializeComponent();

			resultStudentSearch->View = View::Details;

			resultStudentSearch->Columns->Add("Inprogress", 100);
			resultStudentSearch->Columns->Add("Finished", 100);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Courses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ InProgress_checkBox;
	protected:
	private: System::Windows::Forms::CheckBox^ finished_checkBox;
	private: System::Windows::Forms::PictureBox^ courses_back_B;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Courses::typeid));
			this->InProgress_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->finished_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->courses_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->resultStudentSearch = (gcnew System::Windows::Forms::ListView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// InProgress_checkBox
			// 
			this->InProgress_checkBox->AutoSize = true;
			this->InProgress_checkBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->InProgress_checkBox->Location = System::Drawing::Point(513, 274);
			this->InProgress_checkBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->InProgress_checkBox->Name = L"InProgress_checkBox";
			this->InProgress_checkBox->Size = System::Drawing::Size(103, 21);
			this->InProgress_checkBox->TabIndex = 0;
			this->InProgress_checkBox->Text = L"In-Progress";
			this->InProgress_checkBox->UseVisualStyleBackColor = false;
			this->InProgress_checkBox->CheckedChanged += gcnew System::EventHandler(this, &Courses::InProgress_checkBox_CheckedChanged);
			// 
			// finished_checkBox
			// 
			this->finished_checkBox->AutoSize = true;
			this->finished_checkBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->finished_checkBox->Location = System::Drawing::Point(513, 300);
			this->finished_checkBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->finished_checkBox->Name = L"finished_checkBox";
			this->finished_checkBox->Size = System::Drawing::Size(83, 21);
			this->finished_checkBox->TabIndex = 1;
			this->finished_checkBox->Text = L"Finished";
			this->finished_checkBox->UseVisualStyleBackColor = false;
			this->finished_checkBox->CheckedChanged += gcnew System::EventHandler(this, &Courses::finished_checkBox_CheckedChanged);
			// 
			// courses_back_B
			// 
			this->courses_back_B->BackColor = System::Drawing::Color::Transparent;
			this->courses_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"courses_back_B.Image")));
			this->courses_back_B->Location = System::Drawing::Point(-1, -1);
			this->courses_back_B->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->courses_back_B->Name = L"courses_back_B";
			this->courses_back_B->Size = System::Drawing::Size(62, 60);
			this->courses_back_B->TabIndex = 2;
			this->courses_back_B->TabStop = false;
			this->courses_back_B->Click += gcnew System::EventHandler(this, &Courses::courses_back_B_Click);
			// 
			// resultStudentSearch
			// 
			this->resultStudentSearch->HideSelection = false;
			this->resultStudentSearch->Location = System::Drawing::Point(38, 98);
			this->resultStudentSearch->Name = L"resultStudentSearch";
			this->resultStudentSearch->Size = System::Drawing::Size(407, 307);
			this->resultStudentSearch->TabIndex = 3;
			this->resultStudentSearch->UseCompatibleStateImageBehavior = false;
			// 
			// Courses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(721, 468);
			this->Controls->Add(this->resultStudentSearch);
			this->Controls->Add(this->courses_back_B);
			this->Controls->Add(this->finished_checkBox);
			this->Controls->Add(this->InProgress_checkBox);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Courses";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Courses";
			this->Load += gcnew System::EventHandler(this, &Courses::Courses_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses_back_B))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void InProgress_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		if (InProgress_checkBox->Checked) {
			resultStudentSearch->Items->Clear();
			finished_checkBox->Checked = false;

					std::string coursesStr1 = "";
					std::string coursesStr2 = "";
					for (int i = 0; i < student->get_courses_in_progress().size(); i++)
						coursesStr1 += "  " + student->get_courses_in_progress()[i].get_name();
					auto courses = gcnew System::String(coursesStr1.c_str());
					auto courses2 = gcnew System::String(coursesStr2.c_str());
					auto arr = gcnew array<String^>(2);
					arr[0] = courses;
					arr[1] = courses2;
					resultStudentSearch->Items->Add(gcnew ListViewItem(arr));
				
			

		}
	}
	private: System::Void finished_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		if (finished_checkBox->Checked) {
			resultStudentSearch->Items->Clear();
			InProgress_checkBox->Checked = false;
			std::string coursesStr1 = "";
			std::string coursesStr2 = "";
			for(int i = 0 ; i < student->get_finished_courses().size(); i++)
				coursesStr1 += "  " + student->get_finished_courses()[i].get_name();
			auto courses = gcnew System::String(coursesStr1.c_str());
			auto courses2 = gcnew System::String(coursesStr2.c_str());
			auto arr = gcnew array<String^>(2);
			arr[1] = courses;
			arr[0] = courses2;
			resultStudentSearch->Items->Add(gcnew ListViewItem(arr));

		}
	}
	private: System::Void courses_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		backform4->Show();
	}
	private: System::Void coursesListView_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Courses_Load(System::Object^ sender, System::EventArgs^ e) {

	}
};
}