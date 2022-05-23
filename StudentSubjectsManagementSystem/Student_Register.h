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
	private: System::Windows::Forms::ToolTip^ reg_toolTip;
	public:
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
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student_Register::typeid));
			this->course_code_textBox = (gcnew System::Windows::Forms::TextBox());
			this->addcourse_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->reg_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// course_code_textBox
			// 
			this->course_code_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->course_code_textBox->Location = System::Drawing::Point(180, 136);
			this->course_code_textBox->Name = L"course_code_textBox";
			this->course_code_textBox->Size = System::Drawing::Size(149, 13);
			this->course_code_textBox->TabIndex = 1;
			this->course_code_textBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Student_Register::course_code_textBox_MouseMove);
			// 
			// addcourse_back_B
			// 
			this->addcourse_back_B->BackColor = System::Drawing::Color::Transparent;
			this->addcourse_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcourse_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addcourse_back_B.Image")));
			this->addcourse_back_B->Location = System::Drawing::Point(1, -1);
			this->addcourse_back_B->Margin = System::Windows::Forms::Padding(2);
			this->addcourse_back_B->Name = L"addcourse_back_B";
			this->addcourse_back_B->Size = System::Drawing::Size(38, 46);
			this->addcourse_back_B->TabIndex = 48;
			this->addcourse_back_B->TabStop = false;
			this->addcourse_back_B->Click += gcnew System::EventHandler(this, &Student_Register::addcourse_back_B_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->Location = System::Drawing::Point(228, 316);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 30);
			this->button1->TabIndex = 49;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Student_Register::button1_Click);
			// 
			// Student_Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->addcourse_back_B);
			this->Controls->Add(this->course_code_textBox);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Student_Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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
		int code = -1;
		if(code_str  != "")
		code = std::stoi(code_str);
		if (code == -1)
			return;
	    student->enroll_course(student->gd->courses[code]);
		this->Hide();
		back->Show();
	}
private: System::Void course_code_textBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	reg_toolTip->SetToolTip(course_code_textBox,"Enter the Course Code.");
}
};
}
