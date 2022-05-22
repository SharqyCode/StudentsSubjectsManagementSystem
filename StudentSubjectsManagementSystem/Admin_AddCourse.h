#pragma once
#include<msclr/marshal_cppstd.h>
#include<string>
#include"..\StudentSubjectsManagementSystem\Admin\Admin.h"
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin_AddCourse
	/// </summary>
	public ref class Admin_AddCourse : public System::Windows::Forms::Form
	{
	public:

		Form^ back;
		Admin* admin;
		Admin_AddCourse(Form^ form , Admin * obj )
		{
			back = form;
			admin = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin_AddCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Hours_textBox;
	protected:
	private: System::Windows::Forms::Label^ Hours_label;
	private: System::Windows::Forms::TextBox^ Max_textBox;

	private: System::Windows::Forms::Label^ Max_label;

	private: System::Windows::Forms::TextBox^ code_textBox;

	private: System::Windows::Forms::Button^ OK_AC_B;
	private: System::Windows::Forms::TextBox^ Course_Name_textbox;
	private: System::Windows::Forms::Label^ NAME_label;

	private: System::Windows::Forms::Label^ Code_label;
	private: System::Windows::Forms::PictureBox^ addcourse_back_B;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_AddCourse::typeid));
			this->Hours_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Hours_label = (gcnew System::Windows::Forms::Label());
			this->Max_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Max_label = (gcnew System::Windows::Forms::Label());
			this->code_textBox = (gcnew System::Windows::Forms::TextBox());
			this->OK_AC_B = (gcnew System::Windows::Forms::Button());
			this->Course_Name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->NAME_label = (gcnew System::Windows::Forms::Label());
			this->Code_label = (gcnew System::Windows::Forms::Label());
			this->addcourse_back_B = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// Hours_textBox
			// 
			this->Hours_textBox->BackColor = System::Drawing::Color::White;
			this->Hours_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Hours_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Hours_textBox->Location = System::Drawing::Point(49, 281);
			this->Hours_textBox->Margin = System::Windows::Forms::Padding(4);
			this->Hours_textBox->Name = L"Hours_textBox";
			this->Hours_textBox->Size = System::Drawing::Size(157, 19);
			this->Hours_textBox->TabIndex = 40;
			// 
			// Hours_label
			// 
			this->Hours_label->AutoSize = true;
			this->Hours_label->BackColor = System::Drawing::Color::Transparent;
			this->Hours_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_label->Location = System::Drawing::Point(47, 253);
			this->Hours_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Hours_label->Name = L"Hours_label";
			this->Hours_label->Size = System::Drawing::Size(60, 23);
			this->Hours_label->TabIndex = 37;
			this->Hours_label->Text = L"Hours";
			// 
			// Max_textBox
			// 
			this->Max_textBox->BackColor = System::Drawing::Color::White;
			this->Max_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Max_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Max_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Max_textBox->Location = System::Drawing::Point(251, 194);
			this->Max_textBox->Margin = System::Windows::Forms::Padding(4);
			this->Max_textBox->Name = L"Max_textBox";
			this->Max_textBox->Size = System::Drawing::Size(157, 19);
			this->Max_textBox->TabIndex = 41;
			// 
			// Max_label
			// 
			this->Max_label->AutoSize = true;
			this->Max_label->BackColor = System::Drawing::Color::Transparent;
			this->Max_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Max_label->Location = System::Drawing::Point(248, 165);
			this->Max_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Max_label->Name = L"Max_label";
			this->Max_label->Size = System::Drawing::Size(164, 23);
			this->Max_label->TabIndex = 38;
			this->Max_label->Text = L"Max # of students";
			// 
			// code_textBox
			// 
			this->code_textBox->BackColor = System::Drawing::Color::White;
			this->code_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->code_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->code_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->code_textBox->Location = System::Drawing::Point(48, 194);
			this->code_textBox->Margin = System::Windows::Forms::Padding(4);
			this->code_textBox->Name = L"code_textBox";
			this->code_textBox->Size = System::Drawing::Size(157, 19);
			this->code_textBox->TabIndex = 43;
			// 
			// OK_AC_B
			// 
			this->OK_AC_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->OK_AC_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->OK_AC_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OK_AC_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OK_AC_B->Location = System::Drawing::Point(48, 329);
			this->OK_AC_B->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OK_AC_B->Name = L"OK_AC_B";
			this->OK_AC_B->Size = System::Drawing::Size(77, 32);
			this->OK_AC_B->TabIndex = 39;
			this->OK_AC_B->Text = L"OK";
			this->OK_AC_B->UseVisualStyleBackColor = false;
			this->OK_AC_B->Click += gcnew System::EventHandler(this, &Admin_AddCourse::OK_AC_B_Click);
			// 
			// Course_Name_textbox
			// 
			this->Course_Name_textbox->BackColor = System::Drawing::Color::White;
			this->Course_Name_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Course_Name_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Course_Name_textbox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Course_Name_textbox->Location = System::Drawing::Point(48, 116);
			this->Course_Name_textbox->Margin = System::Windows::Forms::Padding(4);
			this->Course_Name_textbox->Name = L"Course_Name_textbox";
			this->Course_Name_textbox->Size = System::Drawing::Size(227, 19);
			this->Course_Name_textbox->TabIndex = 36;
			// 
			// NAME_label
			// 
			this->NAME_label->AutoSize = true;
			this->NAME_label->BackColor = System::Drawing::Color::Transparent;
			this->NAME_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NAME_label->Location = System::Drawing::Point(45, 88);
			this->NAME_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NAME_label->Name = L"NAME_label";
			this->NAME_label->Size = System::Drawing::Size(60, 23);
			this->NAME_label->TabIndex = 35;
			this->NAME_label->Text = L"Name";
			// 
			// Code_label
			// 
			this->Code_label->AutoSize = true;
			this->Code_label->BackColor = System::Drawing::Color::Transparent;
			this->Code_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Code_label->Location = System::Drawing::Point(45, 165);
			this->Code_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Code_label->Name = L"Code_label";
			this->Code_label->Size = System::Drawing::Size(54, 23);
			this->Code_label->TabIndex = 42;
			this->Code_label->Text = L"Code";
			// 
			// addcourse_back_B
			// 
			this->addcourse_back_B->BackColor = System::Drawing::Color::Transparent;
			this->addcourse_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcourse_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addcourse_back_B.Image")));
			this->addcourse_back_B->Location = System::Drawing::Point(0, 0);
			this->addcourse_back_B->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addcourse_back_B->Name = L"addcourse_back_B";
			this->addcourse_back_B->Size = System::Drawing::Size(51, 57);
			this->addcourse_back_B->TabIndex = 46;
			this->addcourse_back_B->TabStop = false;
			this->addcourse_back_B->Click += gcnew System::EventHandler(this, &Admin_AddCourse::addcourse_back_B_Click);
			// 
			// Admin_AddCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(707, 422);
			this->Controls->Add(this->addcourse_back_B);
			this->Controls->Add(this->Hours_textBox);
			this->Controls->Add(this->Hours_label);
			this->Controls->Add(this->Max_textBox);
			this->Controls->Add(this->Max_label);
			this->Controls->Add(this->code_textBox);
			this->Controls->Add(this->Code_label);
			this->Controls->Add(this->OK_AC_B);
			this->Controls->Add(this->Course_Name_textbox);
			this->Controls->Add(this->NAME_label);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Admin_AddCourse";
			this->Text = L"Admin_AddCourse";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Course * main_course;
		int course_code = -1;
private: System::Void OK_AC_B_Click(System::Object^ sender, System::EventArgs^ e) {

	msclr::interop::marshal_context context;
	std::string name = context.marshal_as<std::string>(Course_Name_textbox->Text);
	std::string code_str = context.marshal_as<std::string>(code_textBox->Text);
	std::string no_stud_str = context.marshal_as<std::string>(Max_textBox->Text);
	std::string hours_str = context.marshal_as<std::string>(Hours_textBox->Text);
    course_code = std::stoi(code_str);
	int max = std::stoi(no_stud_str);
	int hours = std::stoi(hours_str);
	Course course;
	course.set_code(course_code);
	course.set_hours(hours);
	course.set_max_num_of_students(max);
	course.set_name(name);
	admin->add_course(course);
	main_course = &course;
	this->Hide();
	back->Show();
}
private: System::Void addcourse_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	//Display the Admin panel
	back->Show();
}
};
}
