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
		Admin* admin;
		Form^ back;
		Admin_AddCourse(Form^ form, Admin* obj)
		{
			back = form;
			admin = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Panel^ Name_Panel;
	public:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
		   
		

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
			this->Name_Panel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->BeginInit();
			this->Name_Panel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// Hours_textBox
			// 
			this->Hours_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Hours_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Hours_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Hours_textBox->Location = System::Drawing::Point(67, 286);
			this->Hours_textBox->Name = L"Hours_textBox";
			this->Hours_textBox->Size = System::Drawing::Size(170, 15);
			this->Hours_textBox->TabIndex = 40;
			this->Hours_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Admin_AddCourse::Hours_textBox_KeyDown);
			// 
			// Hours_label
			// 
			this->Hours_label->AutoSize = true;
			this->Hours_label->BackColor = System::Drawing::Color::Transparent;
			this->Hours_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_label->Location = System::Drawing::Point(67, 264);
			this->Hours_label->Name = L"Hours_label";
			this->Hours_label->Size = System::Drawing::Size(48, 17);
			this->Hours_label->TabIndex = 37;
			this->Hours_label->Text = L"Hours";
			// 
			// Max_textBox
			// 
			this->Max_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Max_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Max_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Max_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Max_textBox->Location = System::Drawing::Point(67, 243);
			this->Max_textBox->Name = L"Max_textBox";
			this->Max_textBox->Size = System::Drawing::Size(170, 15);
			this->Max_textBox->TabIndex = 41;
			this->Max_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Admin_AddCourse::Max_textBox_KeyDown);
			// 
			// Max_label
			// 
			this->Max_label->AutoSize = true;
			this->Max_label->BackColor = System::Drawing::Color::Transparent;
			this->Max_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Max_label->Location = System::Drawing::Point(66, 222);
			this->Max_label->Name = L"Max_label";
			this->Max_label->Size = System::Drawing::Size(49, 17);
			this->Max_label->TabIndex = 38;
			this->Max_label->Text = L"Quota";
			// 
			// code_textBox
			// 
			this->code_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->code_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->code_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->code_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->code_textBox->Location = System::Drawing::Point(67, 196);
			this->code_textBox->Name = L"code_textBox";
			this->code_textBox->Size = System::Drawing::Size(170, 15);
			this->code_textBox->TabIndex = 43;
			this->code_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Admin_AddCourse::code_textBox_KeyDown);
			// 
			// OK_AC_B
			// 
			this->OK_AC_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->OK_AC_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->OK_AC_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OK_AC_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OK_AC_B->Location = System::Drawing::Point(178, 315);
			this->OK_AC_B->Margin = System::Windows::Forms::Padding(2);
			this->OK_AC_B->Name = L"OK_AC_B";
			this->OK_AC_B->Size = System::Drawing::Size(58, 26);
			this->OK_AC_B->TabIndex = 39;
			this->OK_AC_B->Text = L"Add";
			this->OK_AC_B->UseVisualStyleBackColor = false;
			this->OK_AC_B->Click += gcnew System::EventHandler(this, &Admin_AddCourse::OK_AC_B_Click);
			// 
			// Course_Name_textbox
			// 
			this->Course_Name_textbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Course_Name_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Course_Name_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Course_Name_textbox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Course_Name_textbox->Location = System::Drawing::Point(67, 147);
			this->Course_Name_textbox->Name = L"Course_Name_textbox";
			this->Course_Name_textbox->Size = System::Drawing::Size(170, 15);
			this->Course_Name_textbox->TabIndex = 36;
			this->Course_Name_textbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Admin_AddCourse::Course_Name_textbox_KeyDown);
			// 
			// NAME_label
			// 
			this->NAME_label->AutoSize = true;
			this->NAME_label->BackColor = System::Drawing::Color::Transparent;
			this->NAME_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NAME_label->Location = System::Drawing::Point(67, 125);
			this->NAME_label->Name = L"NAME_label";
			this->NAME_label->Size = System::Drawing::Size(47, 17);
			this->NAME_label->TabIndex = 35;
			this->NAME_label->Text = L"Name";
			// 
			// Code_label
			// 
			this->Code_label->AutoSize = true;
			this->Code_label->BackColor = System::Drawing::Color::Transparent;
			this->Code_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Code_label->Location = System::Drawing::Point(65, 172);
			this->Code_label->Name = L"Code_label";
			this->Code_label->Size = System::Drawing::Size(43, 17);
			this->Code_label->TabIndex = 42;
			this->Code_label->Text = L"Code";
			// 
			// addcourse_back_B
			// 
			this->addcourse_back_B->BackColor = System::Drawing::Color::Transparent;
			this->addcourse_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcourse_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addcourse_back_B.Image")));
			this->addcourse_back_B->Location = System::Drawing::Point(0, 0);
			this->addcourse_back_B->Margin = System::Windows::Forms::Padding(2);
			this->addcourse_back_B->Name = L"addcourse_back_B";
			this->addcourse_back_B->Size = System::Drawing::Size(38, 46);
			this->addcourse_back_B->TabIndex = 46;
			this->addcourse_back_B->TabStop = false;
			this->addcourse_back_B->Click += gcnew System::EventHandler(this, &Admin_AddCourse::addcourse_back_B_Click);
			// 
			// Name_Panel
			// 
			this->Name_Panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Name_Panel->Controls->Add(this->panel1);
			this->Name_Panel->Controls->Add(this->textBox1);
			this->Name_Panel->Controls->Add(this->label1);
			this->Name_Panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Name_Panel->Location = System::Drawing::Point(67, 163);
			this->Name_Panel->Name = L"Name_Panel";
			this->Name_Panel->Size = System::Drawing::Size(170, 2);
			this->Name_Panel->TabIndex = 47;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel1->Location = System::Drawing::Point(1, 20);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(170, 2);
			this->panel1->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox1->Location = System::Drawing::Point(1, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 15);
			this->textBox1->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-1, -19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Name";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel2->Location = System::Drawing::Point(67, 259);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(170, 2);
			this->panel2->TabIndex = 48;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel3->Location = System::Drawing::Point(1, 20);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(170, 2);
			this->panel3->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox2->Location = System::Drawing::Point(1, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 15);
			this->textBox2->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-1, -19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Name";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->label3);
			this->panel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel4->Location = System::Drawing::Point(67, 303);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(170, 2);
			this->panel4->TabIndex = 49;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel5->Location = System::Drawing::Point(1, 20);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(170, 2);
			this->panel5->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox3->Location = System::Drawing::Point(1, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(170, 15);
			this->textBox3->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-1, -19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Name";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->textBox4);
			this->panel6->Controls->Add(this->label4);
			this->panel6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel6->Location = System::Drawing::Point(67, 212);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(170, 2);
			this->panel6->TabIndex = 49;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel7->Location = System::Drawing::Point(1, 20);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(170, 2);
			this->panel7->TabIndex = 15;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox4->Location = System::Drawing::Point(1, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(170, 15);
			this->textBox4->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(-1, -19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 17);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Name";
			// 
			// Admin_AddCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Name_Panel);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Admin_AddCourse";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin_AddCourse";
			this->Load += gcnew System::EventHandler(this, &Admin_AddCourse::Admin_AddCourse_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->EndInit();
			this->Name_Panel->ResumeLayout(false);
			this->Name_Panel->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
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

	if (name == "" || code_str == "" || no_stud_str == "" || hours_str == "") {
		MessageBox::Show("Complete the course's data!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
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
private: System::Void Admin_AddCourse_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Course_Name_textbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter) {
		code_textBox->Focus();
	}
}
private: System::Void code_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


	if (e->KeyValue == (int)Keys::Enter) {
		Max_textBox->Focus();
	}
}
private: System::Void Max_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


	if (e->KeyValue == (int)Keys::Enter) {
		Hours_textBox->Focus();
	}
}
private: System::Void Hours_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


	if (e->KeyValue == (int)Keys::Enter) {
		OK_AC_B->PerformClick();
	}
}
};
}
