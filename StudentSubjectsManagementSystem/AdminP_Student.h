#pragma once
#include"Admin_studentSearch.h"
#include<msclr\marshal_cppstd.h>;
#include "..\StudentSubjectsManagementSystem\Admin\Admin.h"
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminP_Student
	/// </summary>
	public ref class AdminP_Student : public System::Windows::Forms::Form
	{
	public:
		Form^ backform;
		Admin* admin;
		AdminP_Student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminP_Student(Form^ form , Admin * obj)
		{
			admin = obj;
			backform = form;
			InitializeComponent();
			//Hide Pannels
			Add_Student_panel->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminP_Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Back_B;
	private: System::Windows::Forms::PictureBox^ Add_B;
	private: System::Windows::Forms::PictureBox^ Search_B;
	private: System::Windows::Forms::PictureBox^ close;













	private: System::Windows::Forms::Panel^ Add_Student_panel;
	private: System::Windows::Forms::PictureBox^ add_Back_B;

	private: System::Windows::Forms::Button^ OK_AS_B;
	private: System::Windows::Forms::Panel^ password_panel;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Password_textBox;
	private: System::Windows::Forms::Panel^ Year_panel;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ Password_label;
	private: System::Windows::Forms::TextBox^ Year_textBox;
	private: System::Windows::Forms::Panel^ ID_panel;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Year_label;
	private: System::Windows::Forms::TextBox^ ID_textBox;
	private: System::Windows::Forms::Panel^ Name_Panel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ ID_label;
	private: System::Windows::Forms::TextBox^ Student_Name;
	private: System::Windows::Forms::Label^ NAME_label;

	private: System::Windows::Forms::ToolTip^ add_studentent_toolTip;
	private: System::Windows::Forms::ToolTip^ search_student_toolTip;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminP_Student::typeid));
			this->Back_B = (gcnew System::Windows::Forms::PictureBox());
			this->Add_B = (gcnew System::Windows::Forms::PictureBox());
			this->Search_B = (gcnew System::Windows::Forms::PictureBox());
			this->close = (gcnew System::Windows::Forms::PictureBox());
			this->Add_Student_panel = (gcnew System::Windows::Forms::Panel());
			this->add_Back_B = (gcnew System::Windows::Forms::PictureBox());
			this->OK_AS_B = (gcnew System::Windows::Forms::Button());
			this->password_panel = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Password_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Year_panel = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Password_label = (gcnew System::Windows::Forms::Label());
			this->Year_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ID_panel = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Year_label = (gcnew System::Windows::Forms::Label());
			this->ID_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Name_Panel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ID_label = (gcnew System::Windows::Forms::Label());
			this->Student_Name = (gcnew System::Windows::Forms::TextBox());
			this->NAME_label = (gcnew System::Windows::Forms::Label());
			this->add_studentent_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->search_student_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close))->BeginInit();
			this->Add_Student_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_Back_B))->BeginInit();
			this->password_panel->SuspendLayout();
			this->Year_panel->SuspendLayout();
			this->ID_panel->SuspendLayout();
			this->Name_Panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Back_B
			// 
			this->Back_B->BackColor = System::Drawing::Color::Transparent;
			this->Back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Back_B.Image")));
			this->Back_B->Location = System::Drawing::Point(1, 10);
			this->Back_B->Margin = System::Windows::Forms::Padding(2);
			this->Back_B->Name = L"Back_B";
			this->Back_B->Size = System::Drawing::Size(38, 46);
			this->Back_B->TabIndex = 0;
			this->Back_B->TabStop = false;
			this->Back_B->Click += gcnew System::EventHandler(this, &AdminP_Student::Back_B_Click);
			// 
			// Add_B
			// 
			this->Add_B->BackColor = System::Drawing::Color::Transparent;
			this->Add_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Add_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add_B.Image")));
			this->Add_B->Location = System::Drawing::Point(116, 182);
			this->Add_B->Margin = System::Windows::Forms::Padding(2);
			this->Add_B->Name = L"Add_B";
			this->Add_B->Size = System::Drawing::Size(129, 115);
			this->Add_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Add_B->TabIndex = 1;
			this->Add_B->TabStop = false;
			this->Add_B->Click += gcnew System::EventHandler(this, &AdminP_Student::Add_B_Click);
			this->Add_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Student::Add_B_MouseMove);
			// 
			// Search_B
			// 
			this->Search_B->BackColor = System::Drawing::Color::Transparent;
			this->Search_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Search_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Search_B.Image")));
			this->Search_B->Location = System::Drawing::Point(324, 182);
			this->Search_B->Margin = System::Windows::Forms::Padding(2);
			this->Search_B->Name = L"Search_B";
			this->Search_B->Size = System::Drawing::Size(129, 115);
			this->Search_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Search_B->TabIndex = 3;
			this->Search_B->TabStop = false;
			this->Search_B->Click += gcnew System::EventHandler(this, &AdminP_Student::Search_B_Click);
			this->Search_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Student::Search_B_MouseMove);
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close.Image")));
			this->close->Location = System::Drawing::Point(507, 10);
			this->close->Margin = System::Windows::Forms::Padding(2);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(37, 42);
			this->close->TabIndex = 9;
			this->close->TabStop = false;
			this->close->Click += gcnew System::EventHandler(this, &AdminP_Student::close_Click);
			// 
			// Add_Student_panel
			// 
			this->Add_Student_panel->BackColor = System::Drawing::Color::Transparent;
			this->Add_Student_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add_Student_panel.BackgroundImage")));
			this->Add_Student_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Add_Student_panel->Controls->Add(this->add_Back_B);
			this->Add_Student_panel->Controls->Add(this->OK_AS_B);
			this->Add_Student_panel->Controls->Add(this->password_panel);
			this->Add_Student_panel->Controls->Add(this->Password_textBox);
			this->Add_Student_panel->Controls->Add(this->Year_panel);
			this->Add_Student_panel->Controls->Add(this->Password_label);
			this->Add_Student_panel->Controls->Add(this->Year_textBox);
			this->Add_Student_panel->Controls->Add(this->ID_panel);
			this->Add_Student_panel->Controls->Add(this->Year_label);
			this->Add_Student_panel->Controls->Add(this->ID_textBox);
			this->Add_Student_panel->Controls->Add(this->Name_Panel);
			this->Add_Student_panel->Controls->Add(this->ID_label);
			this->Add_Student_panel->Controls->Add(this->Student_Name);
			this->Add_Student_panel->Controls->Add(this->NAME_label);
			this->Add_Student_panel->Location = System::Drawing::Point(1, 0);
			this->Add_Student_panel->Name = L"Add_Student_panel";
			this->Add_Student_panel->Size = System::Drawing::Size(557, 419);
			this->Add_Student_panel->TabIndex = 14;
			// 
			// add_Back_B
			// 
			this->add_Back_B->BackColor = System::Drawing::Color::Transparent;
			this->add_Back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_Back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_Back_B.Image")));
			this->add_Back_B->Location = System::Drawing::Point(0, 2);
			this->add_Back_B->Margin = System::Windows::Forms::Padding(2);
			this->add_Back_B->Name = L"add_Back_B";
			this->add_Back_B->Size = System::Drawing::Size(38, 46);
			this->add_Back_B->TabIndex = 27;
			this->add_Back_B->TabStop = false;
			this->add_Back_B->Click += gcnew System::EventHandler(this, &AdminP_Student::add_Back_B_Click);
			// 
			// OK_AS_B
			// 
			this->OK_AS_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->OK_AS_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->OK_AS_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OK_AS_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OK_AS_B->Location = System::Drawing::Point(169, 329);
			this->OK_AS_B->Margin = System::Windows::Forms::Padding(2);
			this->OK_AS_B->Name = L"OK_AS_B";
			this->OK_AS_B->Size = System::Drawing::Size(58, 26);
			this->OK_AS_B->TabIndex = 25;
			this->OK_AS_B->Text = L"Add";
			this->OK_AS_B->UseVisualStyleBackColor = false;
			this->OK_AS_B->Click += gcnew System::EventHandler(this, &AdminP_Student::OK_AS_B_Click);
			// 
			// password_panel
			// 
			this->password_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->password_panel->Controls->Add(this->panel7);
			this->password_panel->Controls->Add(this->textBox6);
			this->password_panel->Controls->Add(this->label6);
			this->password_panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->password_panel->Location = System::Drawing::Point(58, 317);
			this->password_panel->Name = L"password_panel";
			this->password_panel->Size = System::Drawing::Size(170, 2);
			this->password_panel->TabIndex = 24;
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
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox6->Location = System::Drawing::Point(1, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(170, 15);
			this->textBox6->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(-1, -19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Name";
			// 
			// Password_textBox
			// 
			this->Password_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Password_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Password_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Password_textBox->Location = System::Drawing::Point(58, 301);
			this->Password_textBox->Name = L"Password_textBox";
			this->Password_textBox->Size = System::Drawing::Size(170, 15);
			this->Password_textBox->TabIndex = 23;
			this->Password_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Student::Password_textBox_KeyDown);
			// 
			// Year_panel
			// 
			this->Year_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Year_panel->Controls->Add(this->panel5);
			this->Year_panel->Controls->Add(this->textBox4);
			this->Year_panel->Controls->Add(this->label4);
			this->Year_panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Year_panel->Location = System::Drawing::Point(59, 257);
			this->Year_panel->Name = L"Year_panel";
			this->Year_panel->Size = System::Drawing::Size(170, 2);
			this->Year_panel->TabIndex = 21;
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
			// Password_label
			// 
			this->Password_label->AutoSize = true;
			this->Password_label->BackColor = System::Drawing::Color::Transparent;
			this->Password_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password_label->Location = System::Drawing::Point(56, 278);
			this->Password_label->Name = L"Password_label";
			this->Password_label->Size = System::Drawing::Size(72, 17);
			this->Password_label->TabIndex = 22;
			this->Password_label->Text = L"Password";
			// 
			// Year_textBox
			// 
			this->Year_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Year_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Year_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Year_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Year_textBox->Location = System::Drawing::Point(59, 241);
			this->Year_textBox->Name = L"Year_textBox";
			this->Year_textBox->Size = System::Drawing::Size(170, 15);
			this->Year_textBox->TabIndex = 20;
			this->Year_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Student::Year_textBox_KeyDown);
			// 
			// ID_panel
			// 
			this->ID_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ID_panel->Controls->Add(this->panel3);
			this->ID_panel->Controls->Add(this->textBox2);
			this->ID_panel->Controls->Add(this->label2);
			this->ID_panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ID_panel->Location = System::Drawing::Point(59, 202);
			this->ID_panel->Name = L"ID_panel";
			this->ID_panel->Size = System::Drawing::Size(170, 2);
			this->ID_panel->TabIndex = 18;
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
			// Year_label
			// 
			this->Year_label->AutoSize = true;
			this->Year_label->BackColor = System::Drawing::Color::Transparent;
			this->Year_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Year_label->Location = System::Drawing::Point(57, 218);
			this->Year_label->Name = L"Year_label";
			this->Year_label->Size = System::Drawing::Size(38, 17);
			this->Year_label->TabIndex = 19;
			this->Year_label->Text = L"Year";
			// 
			// ID_textBox
			// 
			this->ID_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->ID_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ID_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ID_textBox->Location = System::Drawing::Point(59, 186);
			this->ID_textBox->Name = L"ID_textBox";
			this->ID_textBox->Size = System::Drawing::Size(170, 15);
			this->ID_textBox->TabIndex = 17;
			this->ID_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Student::ID_textBox_KeyDown);
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
			this->Name_Panel->Location = System::Drawing::Point(58, 155);
			this->Name_Panel->Name = L"Name_Panel";
			this->Name_Panel->Size = System::Drawing::Size(170, 2);
			this->Name_Panel->TabIndex = 12;
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
			// ID_label
			// 
			this->ID_label->AutoSize = true;
			this->ID_label->BackColor = System::Drawing::Color::Transparent;
			this->ID_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_label->Location = System::Drawing::Point(57, 163);
			this->ID_label->Name = L"ID_label";
			this->ID_label->Size = System::Drawing::Size(22, 17);
			this->ID_label->TabIndex = 16;
			this->ID_label->Text = L"ID";
			// 
			// Student_Name
			// 
			this->Student_Name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Student_Name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Student_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Student_Name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Student_Name->Location = System::Drawing::Point(58, 139);
			this->Student_Name->Name = L"Student_Name";
			this->Student_Name->Size = System::Drawing::Size(170, 15);
			this->Student_Name->TabIndex = 11;
			this->Student_Name->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Student::Student_Name_KeyDown);
			// 
			// NAME_label
			// 
			this->NAME_label->AutoSize = true;
			this->NAME_label->BackColor = System::Drawing::Color::Transparent;
			this->NAME_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NAME_label->Location = System::Drawing::Point(56, 116);
			this->NAME_label->Name = L"NAME_label";
			this->NAME_label->Size = System::Drawing::Size(47, 17);
			this->NAME_label->TabIndex = 0;
			this->NAME_label->Text = L"Name";
			// 
			// AdminP_Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->Add_Student_panel);
			this->Controls->Add(this->close);
			this->Controls->Add(this->Search_B);
			this->Controls->Add(this->Add_B);
			this->Controls->Add(this->Back_B);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AdminP_Student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminP_Student";
			this->Load += gcnew System::EventHandler(this, &AdminP_Student::AdminP_Student_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Student::AdminLogin_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Student::AdminLogin_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Student::AdminLogin_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close))->EndInit();
			this->Add_Student_panel->ResumeLayout(false);
			this->Add_Student_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_Back_B))->EndInit();
			this->password_panel->ResumeLayout(false);
			this->password_panel->PerformLayout();
			this->Year_panel->ResumeLayout(false);
			this->Year_panel->PerformLayout();
			this->ID_panel->ResumeLayout(false);
			this->ID_panel->PerformLayout();
			this->Name_Panel->ResumeLayout(false);
			this->Name_Panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminP_Student_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   bool dragging;
		   Point offset;
	private: System::Void AdminLogin_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Dragging the Application
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void AdminLogin_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Disable Dragging
		dragging = false;
	}
	private: System::Void AdminLogin_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Check Whether able to move
		if (dragging) {
			Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
			/*Reduce offset from Current Screen Position
			  to calculate the correct point to move your
			  form Location = currentScreenPosition.X;
			  */
			Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
		}
	}

	private: System::Void Back_B_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		backform->Show();
	}

	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
		   //All keyDown Functions help ease the user
		   //experience by moving directly to the next field
	private: System::Void Student_Name_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			ID_textBox->Focus();

		}
	}
	private: System::Void ID_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			Year_textBox->Focus();
		}
	}

	private: System::Void Year_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyValue == (int)Keys::Enter) {
			Password_textBox->Focus();
		}
	}
	private: System::Void Password_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyValue == (int)Keys::Enter) {
			OK_AS_B->PerformClick();
		}
	}

	private: System::Void OK_AS_B_Click(System::Object^ sender, System::EventArgs^ e) {
		//Code to add student to DB & DS
		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(Student_Name->Text);
		std::string id = context.marshal_as<std::string>(ID_textBox->Text);
		std::string password = context.marshal_as<std::string>(Password_textBox->Text);
		std::string year = context.marshal_as<std::string>(Year_textBox->Text);
		if (name == "" || id == "" || password == "" || year == "") {
			MessageBox::Show("Complete student's data!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
			Student stud;
			stud.set_name(name);
			stud.set_password(password);
			stud.set_id(id);
			stud.set_academic_year(year);
			admin->add_student(stud);
		Add_Student_panel->Hide();
	}
	private: System::Void Add_Student_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void add_Back_B_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		//backform->Show();
		Add_Student_panel->Hide();
	}
	private: System::Void Add_B_Click(System::Object^ sender, System::EventArgs^ e) {
		Add_Student_panel->Show();
		//Add student in DS
	}
	private: System::Void Search_B_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Admin_studentSearch^ obj = gcnew Admin_studentSearch(this , admin);
		obj->ShowDialog();
	}
	private: System::Void Search_Student_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void close_add_B_Click(System::Object^ sender, System::EventArgs^ e) {
		Add_Student_panel->Hide();
	}
	private: System::Void student_search_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {


	}
		   //MouseMove Function
		   //Displays description upon hoover on button
	private: System::Void Add_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		add_studentent_toolTip->SetToolTip(Add_B, "Add a new student.");
	}
	private: System::Void Search_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		search_student_toolTip->SetToolTip(Search_B, "Lookup a specific student courses.");
	}
	};
}
