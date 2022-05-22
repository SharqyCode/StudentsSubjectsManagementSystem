#pragma once
#include <msclr/marshal_cppstd.h>
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
	/// Summary for Student_Register
	/// </summary>
	public ref class Student_Register : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::PictureBox^ addcourse_back_B;
	private: System::Windows::Forms::Button^ button1;
	public:
		Student* student;
		Form^ back;
		Student_Register(Form ^ form , Student *  obj )
		{
			back = form;
			student = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Student_Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ course_code_textBox;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student_Register::typeid));
			this->course_code_textBox = (gcnew System::Windows::Forms::TextBox());
			this->addcourse_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// course_code_textBox
			// 
			this->course_code_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->course_code_textBox->Location = System::Drawing::Point(457, 144);
			this->course_code_textBox->Margin = System::Windows::Forms::Padding(4);
			this->course_code_textBox->Name = L"course_code_textBox";
			this->course_code_textBox->Size = System::Drawing::Size(199, 15);
			this->course_code_textBox->TabIndex = 1;
			//this->course_code_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Student_Register::enroll);
			// 
			// addcourse_back_B
			// 
			this->addcourse_back_B->BackColor = System::Drawing::Color::Transparent;
			this->addcourse_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcourse_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addcourse_back_B.Image")));
			this->addcourse_back_B->Location = System::Drawing::Point(1, -1);
			this->addcourse_back_B->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addcourse_back_B->Name = L"addcourse_back_B";
			this->addcourse_back_B->Size = System::Drawing::Size(51, 57);
			this->addcourse_back_B->TabIndex = 48;
			this->addcourse_back_B->TabStop = false;
			this->addcourse_back_B->Click += gcnew System::EventHandler(this, &Student_Register::addcourse_back_B_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(457, 327);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 49;
			this->button1->Text = L"Okay";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Student_Register::button1_Click);
			// 
			// Student_Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(707, 422);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->addcourse_back_B);
			this->Controls->Add(this->course_code_textBox);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Student_Register";
			this->Text = L"Student_Register";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addcourse_back_B_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		back->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string code_str = context.marshal_as<std::string>(course_code_textBox->Text);
		int code = std::stoi(code_str);
	    student->enroll_course(student->gd->courses[code]);
		this->Hide();
		back->Show();
	}
};
}
