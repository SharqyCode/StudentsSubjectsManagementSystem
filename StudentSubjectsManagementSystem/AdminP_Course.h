#pragma once

namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminP_Course
	/// </summary>
	public ref class AdminP_Course : public System::Windows::Forms::Form
	{
	public:
		Form^ backform2;
		AdminP_Course(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminP_Course(Form^ form)
		{
			backform2 = form;
			InitializeComponent();
			//Hide all panels at start
			add_course_Panel->Hide();
			delete_course_panel->Hide();
			modify_course_panel->Hide();
			view_students_panel->Hide();
	
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminP_Course()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Back_B;

	private: System::Windows::Forms::PictureBox^ Add_B;
	private: System::Windows::Forms::PictureBox^ Delete_B;

	private: System::Windows::Forms::PictureBox^ Modify_B;
	private: System::Windows::Forms::PictureBox^ Students_B;
	private: System::Windows::Forms::ToolTip^ Add_tooltip;
	private: System::Windows::Forms::ToolTip^ modify_toolTip;
	private: System::Windows::Forms::ToolTip^ delete_toolTip;
	private: System::Windows::Forms::ToolTip^ students_toolTip;
	private: System::Windows::Forms::Panel^ add_course_Panel;
	private: System::Windows::Forms::PictureBox^ addcourse_back_B;
	private: System::Windows::Forms::Button^ OK_AC_B;
	private: System::Windows::Forms::Panel^ Course_Panel;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Course_Name_textbox;


	private: System::Windows::Forms::Label^ NAME_label;
	private: System::Windows::Forms::Label^ PRE_label;
	private: System::Windows::Forms::ListBox^ PRE_listBox;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Hours_textBox;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ Hours_label;
	private: System::Windows::Forms::TextBox^ Quota_textBox;


	private: System::Windows::Forms::Panel^ code_panel;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Quota_label;

	private: System::Windows::Forms::TextBox^ code_textBox;
	private: System::Windows::Forms::Label^ Code_label;
	private: System::Windows::Forms::Panel^ delete_course_panel;
	private: System::Windows::Forms::TextBox^ delete_course_textBox;
	private: System::Windows::Forms::PictureBox^ delete_course_back_B;
	private: System::Windows::Forms::Panel^ modify_course_panel;
	private: System::Windows::Forms::Label^ pre_M_label;
	private: System::Windows::Forms::ListBox^ pre_M_listBox;
	private: System::Windows::Forms::Panel^ Hours_M_panel;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Hours_M_textBox;
	private: System::Windows::Forms::Panel^ Quota_M_panel;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ Hours_M_label;
	private: System::Windows::Forms::TextBox^ Quota_M_textBox;
	private: System::Windows::Forms::Panel^ code_M_panel;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ Quota_M_label;
	private: System::Windows::Forms::TextBox^ code_M_textBox;
	private: System::Windows::Forms::Label^ code_M_label;
	private: System::Windows::Forms::Button^ OK_M_B;
	private: System::Windows::Forms::Panel^ Name_M_panel;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ Name_M_textBox;
	private: System::Windows::Forms::Label^ Name_M_label;
	private: System::Windows::Forms::TextBox^ Course_modify_textBox;
private: System::Windows::Forms::PictureBox^ m_back_B;



private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
private: System::Windows::Forms::Panel^ view_students_panel;
private: System::Windows::Forms::PictureBox^ search_back_B;
private: System::Windows::Forms::TextBox^ textBox5;

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminP_Course::typeid));
			this->Back_B = (gcnew System::Windows::Forms::PictureBox());
			this->Add_B = (gcnew System::Windows::Forms::PictureBox());
			this->Delete_B = (gcnew System::Windows::Forms::PictureBox());
			this->Modify_B = (gcnew System::Windows::Forms::PictureBox());
			this->Students_B = (gcnew System::Windows::Forms::PictureBox());
			this->Add_tooltip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->modify_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->delete_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->students_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->add_course_Panel = (gcnew System::Windows::Forms::Panel());
			this->PRE_label = (gcnew System::Windows::Forms::Label());
			this->PRE_listBox = (gcnew System::Windows::Forms::ListBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Hours_textBox = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Hours_label = (gcnew System::Windows::Forms::Label());
			this->Quota_textBox = (gcnew System::Windows::Forms::TextBox());
			this->code_panel = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Quota_label = (gcnew System::Windows::Forms::Label());
			this->code_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Code_label = (gcnew System::Windows::Forms::Label());
			this->OK_AC_B = (gcnew System::Windows::Forms::Button());
			this->Course_Panel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Course_Name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->NAME_label = (gcnew System::Windows::Forms::Label());
			this->addcourse_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->delete_course_panel = (gcnew System::Windows::Forms::Panel());
			this->delete_course_textBox = (gcnew System::Windows::Forms::TextBox());
			this->delete_course_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->modify_course_panel = (gcnew System::Windows::Forms::Panel());
			this->pre_M_label = (gcnew System::Windows::Forms::Label());
			this->pre_M_listBox = (gcnew System::Windows::Forms::ListBox());
			this->Hours_M_panel = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Hours_M_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Quota_M_panel = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Hours_M_label = (gcnew System::Windows::Forms::Label());
			this->Quota_M_textBox = (gcnew System::Windows::Forms::TextBox());
			this->code_M_panel = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Quota_M_label = (gcnew System::Windows::Forms::Label());
			this->code_M_textBox = (gcnew System::Windows::Forms::TextBox());
			this->code_M_label = (gcnew System::Windows::Forms::Label());
			this->OK_M_B = (gcnew System::Windows::Forms::Button());
			this->Name_M_panel = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Name_M_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Name_M_label = (gcnew System::Windows::Forms::Label());
			this->Course_modify_textBox = (gcnew System::Windows::Forms::TextBox());
			this->m_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->view_students_panel = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->search_back_B = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delete_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Modify_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Students_B))->BeginInit();
			this->add_course_Panel->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel4->SuspendLayout();
			this->code_panel->SuspendLayout();
			this->Course_Panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->BeginInit();
			this->delete_course_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->delete_course_back_B))->BeginInit();
			this->modify_course_panel->SuspendLayout();
			this->Hours_M_panel->SuspendLayout();
			this->Quota_M_panel->SuspendLayout();
			this->code_M_panel->SuspendLayout();
			this->Name_M_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_back_B))->BeginInit();
			this->view_students_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// Back_B
			// 
			this->Back_B->BackColor = System::Drawing::Color::Transparent;
			this->Back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Back_B.Image")));
			this->Back_B->Location = System::Drawing::Point(0, 10);
			this->Back_B->Margin = System::Windows::Forms::Padding(2);
			this->Back_B->Name = L"Back_B";
			this->Back_B->Size = System::Drawing::Size(38, 46);
			this->Back_B->TabIndex = 1;
			this->Back_B->TabStop = false;
			this->Back_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Back_B_Click);
			// 
			// Add_B
			// 
			this->Add_B->BackColor = System::Drawing::Color::Transparent;
			this->Add_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Add_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add_B.Image")));
			this->Add_B->Location = System::Drawing::Point(80, 118);
			this->Add_B->Margin = System::Windows::Forms::Padding(2);
			this->Add_B->Name = L"Add_B";
			this->Add_B->Size = System::Drawing::Size(129, 115);
			this->Add_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Add_B->TabIndex = 11;
			this->Add_B->TabStop = false;
			this->Add_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Add_B_Click);
			this->Add_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::Add_B_MouseMove);
			// 
			// Delete_B
			// 
			this->Delete_B->BackColor = System::Drawing::Color::Transparent;
			this->Delete_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Delete_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete_B.Image")));
			this->Delete_B->Location = System::Drawing::Point(80, 237);
			this->Delete_B->Margin = System::Windows::Forms::Padding(2);
			this->Delete_B->Name = L"Delete_B";
			this->Delete_B->Size = System::Drawing::Size(129, 115);
			this->Delete_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Delete_B->TabIndex = 12;
			this->Delete_B->TabStop = false;
			this->Delete_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Delete_B_Click);
			this->Delete_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::Delete_B_MouseMove);
			// 
			// Modify_B
			// 
			this->Modify_B->BackColor = System::Drawing::Color::Transparent;
			this->Modify_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Modify_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Modify_B.Image")));
			this->Modify_B->Location = System::Drawing::Point(314, 118);
			this->Modify_B->Margin = System::Windows::Forms::Padding(2);
			this->Modify_B->Name = L"Modify_B";
			this->Modify_B->Size = System::Drawing::Size(129, 115);
			this->Modify_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Modify_B->TabIndex = 13;
			this->Modify_B->TabStop = false;
			this->Modify_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Modify_B_Click);
			this->Modify_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::Modify_B_MouseMove);
			// 
			// Students_B
			// 
			this->Students_B->BackColor = System::Drawing::Color::Transparent;
			this->Students_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Students_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Students_B.Image")));
			this->Students_B->Location = System::Drawing::Point(314, 237);
			this->Students_B->Margin = System::Windows::Forms::Padding(2);
			this->Students_B->Name = L"Students_B";
			this->Students_B->Size = System::Drawing::Size(129, 115);
			this->Students_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Students_B->TabIndex = 14;
			this->Students_B->TabStop = false;
			this->Students_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Students_B_Click);
			this->Students_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::Students_B_MouseMove);
			// 
			// add_course_Panel
			// 
			this->add_course_Panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_course_Panel.BackgroundImage")));
			this->add_course_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->add_course_Panel->Controls->Add(this->PRE_label);
			this->add_course_Panel->Controls->Add(this->PRE_listBox);
			this->add_course_Panel->Controls->Add(this->panel6);
			this->add_course_Panel->Controls->Add(this->Hours_textBox);
			this->add_course_Panel->Controls->Add(this->panel4);
			this->add_course_Panel->Controls->Add(this->Hours_label);
			this->add_course_Panel->Controls->Add(this->Quota_textBox);
			this->add_course_Panel->Controls->Add(this->code_panel);
			this->add_course_Panel->Controls->Add(this->Quota_label);
			this->add_course_Panel->Controls->Add(this->code_textBox);
			this->add_course_Panel->Controls->Add(this->Code_label);
			this->add_course_Panel->Controls->Add(this->OK_AC_B);
			this->add_course_Panel->Controls->Add(this->Course_Panel);
			this->add_course_Panel->Controls->Add(this->Course_Name_textbox);
			this->add_course_Panel->Controls->Add(this->NAME_label);
			this->add_course_Panel->Controls->Add(this->addcourse_back_B);
			this->add_course_Panel->Location = System::Drawing::Point(1, 0);
			this->add_course_Panel->Name = L"add_course_Panel";
			this->add_course_Panel->Size = System::Drawing::Size(544, 381);
			this->add_course_Panel->TabIndex = 15;
			// 
			// PRE_label
			// 
			this->PRE_label->AutoSize = true;
			this->PRE_label->BackColor = System::Drawing::Color::Transparent;
			this->PRE_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PRE_label->Location = System::Drawing::Point(188, 229);
			this->PRE_label->Name = L"PRE_label";
			this->PRE_label->Size = System::Drawing::Size(95, 17);
			this->PRE_label->TabIndex = 34;
			this->PRE_label->Text = L"Prerequistics";
			// 
			// PRE_listBox
			// 
			this->PRE_listBox->FormattingEnabled = true;
			this->PRE_listBox->Location = System::Drawing::Point(195, 252);
			this->PRE_listBox->Name = L"PRE_listBox";
			this->PRE_listBox->Size = System::Drawing::Size(114, 43);
			this->PRE_listBox->TabIndex = 33;
			this->PRE_listBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Course::PRE_listBox_KeyDown);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->textBox6);
			this->panel6->Controls->Add(this->label6);
			this->panel6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel6->Location = System::Drawing::Point(40, 268);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(118, 2);
			this->panel6->TabIndex = 31;
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
			// Hours_textBox
			// 
			this->Hours_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Hours_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Hours_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Hours_textBox->Location = System::Drawing::Point(40, 252);
			this->Hours_textBox->Name = L"Hours_textBox";
			this->Hours_textBox->Size = System::Drawing::Size(118, 15);
			this->Hours_textBox->TabIndex = 30;
			this->Hours_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Course::Hours_textBox_KeyDown);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->textBox4);
			this->panel4->Controls->Add(this->label4);
			this->panel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel4->Location = System::Drawing::Point(191, 197);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(118, 2);
			this->panel4->TabIndex = 31;
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
			// Hours_label
			// 
			this->Hours_label->AutoSize = true;
			this->Hours_label->BackColor = System::Drawing::Color::Transparent;
			this->Hours_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_label->Location = System::Drawing::Point(38, 229);
			this->Hours_label->Name = L"Hours_label";
			this->Hours_label->Size = System::Drawing::Size(48, 17);
			this->Hours_label->TabIndex = 29;
			this->Hours_label->Text = L"Hours";
			// 
			// Quota_textBox
			// 
			this->Quota_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Quota_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Quota_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quota_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Quota_textBox->Location = System::Drawing::Point(191, 181);
			this->Quota_textBox->Name = L"Quota_textBox";
			this->Quota_textBox->Size = System::Drawing::Size(118, 15);
			this->Quota_textBox->TabIndex = 30;
			this->Quota_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Course::Quota_textBox_KeyDown);
			// 
			// code_panel
			// 
			this->code_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->code_panel->Controls->Add(this->panel3);
			this->code_panel->Controls->Add(this->textBox2);
			this->code_panel->Controls->Add(this->label2);
			this->code_panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->code_panel->Location = System::Drawing::Point(39, 197);
			this->code_panel->Name = L"code_panel";
			this->code_panel->Size = System::Drawing::Size(118, 2);
			this->code_panel->TabIndex = 32;
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
			// Quota_label
			// 
			this->Quota_label->AutoSize = true;
			this->Quota_label->BackColor = System::Drawing::Color::Transparent;
			this->Quota_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quota_label->Location = System::Drawing::Point(189, 158);
			this->Quota_label->Name = L"Quota_label";
			this->Quota_label->Size = System::Drawing::Size(49, 17);
			this->Quota_label->TabIndex = 29;
			this->Quota_label->Text = L"Quota";
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
			this->code_textBox->Location = System::Drawing::Point(39, 181);
			this->code_textBox->Name = L"code_textBox";
			this->code_textBox->Size = System::Drawing::Size(118, 15);
			this->code_textBox->TabIndex = 31;
			this->code_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Course::code_textBox_KeyDown);
			// 
			// Code_label
			// 
			this->Code_label->AutoSize = true;
			this->Code_label->BackColor = System::Drawing::Color::Transparent;
			this->Code_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Code_label->Location = System::Drawing::Point(37, 158);
			this->Code_label->Name = L"Code_label";
			this->Code_label->Size = System::Drawing::Size(43, 17);
			this->Code_label->TabIndex = 30;
			this->Code_label->Text = L"Code";
			// 
			// OK_AC_B
			// 
			this->OK_AC_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->OK_AC_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->OK_AC_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OK_AC_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OK_AC_B->Location = System::Drawing::Point(39, 295);
			this->OK_AC_B->Margin = System::Windows::Forms::Padding(2);
			this->OK_AC_B->Name = L"OK_AC_B";
			this->OK_AC_B->Size = System::Drawing::Size(58, 26);
			this->OK_AC_B->TabIndex = 29;
			this->OK_AC_B->Text = L"OK";
			this->OK_AC_B->UseVisualStyleBackColor = false;
			// 
			// Course_Panel
			// 
			this->Course_Panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Course_Panel->Controls->Add(this->panel1);
			this->Course_Panel->Controls->Add(this->textBox1);
			this->Course_Panel->Controls->Add(this->label1);
			this->Course_Panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Course_Panel->Location = System::Drawing::Point(39, 134);
			this->Course_Panel->Name = L"Course_Panel";
			this->Course_Panel->Size = System::Drawing::Size(170, 2);
			this->Course_Panel->TabIndex = 28;
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
			// Course_Name_textbox
			// 
			this->Course_Name_textbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Course_Name_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Course_Name_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Course_Name_textbox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Course_Name_textbox->Location = System::Drawing::Point(39, 118);
			this->Course_Name_textbox->Name = L"Course_Name_textbox";
			this->Course_Name_textbox->Size = System::Drawing::Size(170, 15);
			this->Course_Name_textbox->TabIndex = 27;
			this->Course_Name_textbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Course::Course_Name_textbox_KeyDown);
			// 
			// NAME_label
			// 
			this->NAME_label->AutoSize = true;
			this->NAME_label->BackColor = System::Drawing::Color::Transparent;
			this->NAME_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NAME_label->Location = System::Drawing::Point(37, 95);
			this->NAME_label->Name = L"NAME_label";
			this->NAME_label->Size = System::Drawing::Size(47, 17);
			this->NAME_label->TabIndex = 26;
			this->NAME_label->Text = L"Name";
			// 
			// addcourse_back_B
			// 
			this->addcourse_back_B->BackColor = System::Drawing::Color::Transparent;
			this->addcourse_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcourse_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addcourse_back_B.Image")));
			this->addcourse_back_B->Location = System::Drawing::Point(0, 11);
			this->addcourse_back_B->Margin = System::Windows::Forms::Padding(2);
			this->addcourse_back_B->Name = L"addcourse_back_B";
			this->addcourse_back_B->Size = System::Drawing::Size(38, 46);
			this->addcourse_back_B->TabIndex = 2;
			this->addcourse_back_B->TabStop = false;
			this->addcourse_back_B->Click += gcnew System::EventHandler(this, &AdminP_Course::addcourse_back_B_Click);
			// 
			// delete_course_panel
			// 
			this->delete_course_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delete_course_panel.BackgroundImage")));
			this->delete_course_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->delete_course_panel->Controls->Add(this->delete_course_textBox);
			this->delete_course_panel->Controls->Add(this->delete_course_back_B);
			this->delete_course_panel->Location = System::Drawing::Point(1, 0);
			this->delete_course_panel->Name = L"delete_course_panel";
			this->delete_course_panel->Size = System::Drawing::Size(544, 381);
			this->delete_course_panel->TabIndex = 16;
			// 
			// delete_course_textBox
			// 
			this->delete_course_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->delete_course_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->delete_course_textBox->Location = System::Drawing::Point(68, 124);
			this->delete_course_textBox->Name = L"delete_course_textBox";
			this->delete_course_textBox->Size = System::Drawing::Size(155, 13);
			this->delete_course_textBox->TabIndex = 3;
			// 
			// delete_course_back_B
			// 
			this->delete_course_back_B->BackColor = System::Drawing::Color::Transparent;
			this->delete_course_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_course_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delete_course_back_B.Image")));
			this->delete_course_back_B->Location = System::Drawing::Point(0, 11);
			this->delete_course_back_B->Margin = System::Windows::Forms::Padding(2);
			this->delete_course_back_B->Name = L"delete_course_back_B";
			this->delete_course_back_B->Size = System::Drawing::Size(38, 46);
			this->delete_course_back_B->TabIndex = 2;
			this->delete_course_back_B->TabStop = false;
			this->delete_course_back_B->Click += gcnew System::EventHandler(this, &AdminP_Course::delete_course_back_B_Click);
			// 
			// modify_course_panel
			// 
			this->modify_course_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modify_course_panel.BackgroundImage")));
			this->modify_course_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->modify_course_panel->Controls->Add(this->pre_M_label);
			this->modify_course_panel->Controls->Add(this->pre_M_listBox);
			this->modify_course_panel->Controls->Add(this->Hours_M_panel);
			this->modify_course_panel->Controls->Add(this->Hours_M_textBox);
			this->modify_course_panel->Controls->Add(this->Quota_M_panel);
			this->modify_course_panel->Controls->Add(this->Hours_M_label);
			this->modify_course_panel->Controls->Add(this->Quota_M_textBox);
			this->modify_course_panel->Controls->Add(this->code_M_panel);
			this->modify_course_panel->Controls->Add(this->Quota_M_label);
			this->modify_course_panel->Controls->Add(this->code_M_textBox);
			this->modify_course_panel->Controls->Add(this->code_M_label);
			this->modify_course_panel->Controls->Add(this->OK_M_B);
			this->modify_course_panel->Controls->Add(this->Name_M_panel);
			this->modify_course_panel->Controls->Add(this->Name_M_textBox);
			this->modify_course_panel->Controls->Add(this->Name_M_label);
			this->modify_course_panel->Controls->Add(this->Course_modify_textBox);
			this->modify_course_panel->Controls->Add(this->m_back_B);
			this->modify_course_panel->Location = System::Drawing::Point(1, 0);
			this->modify_course_panel->Name = L"modify_course_panel";
			this->modify_course_panel->Size = System::Drawing::Size(544, 381);
			this->modify_course_panel->TabIndex = 17;
			// 
			// pre_M_label
			// 
			this->pre_M_label->AutoSize = true;
			this->pre_M_label->BackColor = System::Drawing::Color::Transparent;
			this->pre_M_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pre_M_label->Location = System::Drawing::Point(186, 218);
			this->pre_M_label->Name = L"pre_M_label";
			this->pre_M_label->Size = System::Drawing::Size(95, 17);
			this->pre_M_label->TabIndex = 49;
			this->pre_M_label->Text = L"Prerequistics";
			// 
			// pre_M_listBox
			// 
			this->pre_M_listBox->FormattingEnabled = true;
			this->pre_M_listBox->Location = System::Drawing::Point(193, 241);
			this->pre_M_listBox->Name = L"pre_M_listBox";
			this->pre_M_listBox->Size = System::Drawing::Size(114, 43);
			this->pre_M_listBox->TabIndex = 48;
			// 
			// Hours_M_panel
			// 
			this->Hours_M_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Hours_M_panel->Controls->Add(this->panel8);
			this->Hours_M_panel->Controls->Add(this->textBox3);
			this->Hours_M_panel->Controls->Add(this->label5);
			this->Hours_M_panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Hours_M_panel->Location = System::Drawing::Point(38, 257);
			this->Hours_M_panel->Name = L"Hours_M_panel";
			this->Hours_M_panel->Size = System::Drawing::Size(118, 2);
			this->Hours_M_panel->TabIndex = 44;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel8->Location = System::Drawing::Point(1, 20);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(170, 2);
			this->panel8->TabIndex = 15;
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(-1, -19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Name";
			// 
			// Hours_M_textBox
			// 
			this->Hours_M_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Hours_M_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Hours_M_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_M_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Hours_M_textBox->Location = System::Drawing::Point(38, 241);
			this->Hours_M_textBox->Name = L"Hours_M_textBox";
			this->Hours_M_textBox->Size = System::Drawing::Size(118, 15);
			this->Hours_M_textBox->TabIndex = 41;
			this->Hours_M_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Course::Hours_M_textBox_KeyDown);
			// 
			// Quota_M_panel
			// 
			this->Quota_M_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Quota_M_panel->Controls->Add(this->panel10);
			this->Quota_M_panel->Controls->Add(this->textBox7);
			this->Quota_M_panel->Controls->Add(this->label7);
			this->Quota_M_panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Quota_M_panel->Location = System::Drawing::Point(189, 186);
			this->Quota_M_panel->Name = L"Quota_M_panel";
			this->Quota_M_panel->Size = System::Drawing::Size(118, 2);
			this->Quota_M_panel->TabIndex = 45;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel10->Location = System::Drawing::Point(1, 20);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(170, 2);
			this->panel10->TabIndex = 15;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Black;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox7->Location = System::Drawing::Point(1, 5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(170, 15);
			this->textBox7->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(-1, -19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Name";
			// 
			// Hours_M_label
			// 
			this->Hours_M_label->AutoSize = true;
			this->Hours_M_label->BackColor = System::Drawing::Color::Transparent;
			this->Hours_M_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_M_label->Location = System::Drawing::Point(36, 218);
			this->Hours_M_label->Name = L"Hours_M_label";
			this->Hours_M_label->Size = System::Drawing::Size(48, 17);
			this->Hours_M_label->TabIndex = 38;
			this->Hours_M_label->Text = L"Hours";
			// 
			// Quota_M_textBox
			// 
			this->Quota_M_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Quota_M_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Quota_M_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quota_M_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Quota_M_textBox->Location = System::Drawing::Point(189, 170);
			this->Quota_M_textBox->Name = L"Quota_M_textBox";
			this->Quota_M_textBox->Size = System::Drawing::Size(118, 15);
			this->Quota_M_textBox->TabIndex = 42;
			this->Quota_M_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Course::Quota_M_textBox_KeyDown);
			// 
			// code_M_panel
			// 
			this->code_M_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->code_M_panel->Controls->Add(this->panel12);
			this->code_M_panel->Controls->Add(this->textBox9);
			this->code_M_panel->Controls->Add(this->label9);
			this->code_M_panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->code_M_panel->Location = System::Drawing::Point(37, 186);
			this->code_M_panel->Name = L"code_M_panel";
			this->code_M_panel->Size = System::Drawing::Size(118, 2);
			this->code_M_panel->TabIndex = 47;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel12->Location = System::Drawing::Point(1, 20);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(170, 2);
			this->panel12->TabIndex = 15;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Black;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox9->Location = System::Drawing::Point(1, 5);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(170, 15);
			this->textBox9->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(-1, -19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 17);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Name";
			// 
			// Quota_M_label
			// 
			this->Quota_M_label->AutoSize = true;
			this->Quota_M_label->BackColor = System::Drawing::Color::Transparent;
			this->Quota_M_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quota_M_label->Location = System::Drawing::Point(187, 147);
			this->Quota_M_label->Name = L"Quota_M_label";
			this->Quota_M_label->Size = System::Drawing::Size(49, 17);
			this->Quota_M_label->TabIndex = 39;
			this->Quota_M_label->Text = L"Quota";
			// 
			// code_M_textBox
			// 
			this->code_M_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->code_M_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->code_M_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->code_M_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->code_M_textBox->Location = System::Drawing::Point(37, 170);
			this->code_M_textBox->Name = L"code_M_textBox";
			this->code_M_textBox->Size = System::Drawing::Size(118, 15);
			this->code_M_textBox->TabIndex = 46;
			this->code_M_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Course::code_M_textBox_KeyDown);
			// 
			// code_M_label
			// 
			this->code_M_label->AutoSize = true;
			this->code_M_label->BackColor = System::Drawing::Color::Transparent;
			this->code_M_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->code_M_label->Location = System::Drawing::Point(35, 147);
			this->code_M_label->Name = L"code_M_label";
			this->code_M_label->Size = System::Drawing::Size(43, 17);
			this->code_M_label->TabIndex = 43;
			this->code_M_label->Text = L"Code";
			// 
			// OK_M_B
			// 
			this->OK_M_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->OK_M_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->OK_M_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OK_M_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OK_M_B->Location = System::Drawing::Point(37, 284);
			this->OK_M_B->Margin = System::Windows::Forms::Padding(2);
			this->OK_M_B->Name = L"OK_M_B";
			this->OK_M_B->Size = System::Drawing::Size(58, 26);
			this->OK_M_B->TabIndex = 40;
			this->OK_M_B->Text = L"OK";
			this->OK_M_B->UseVisualStyleBackColor = false;
			// 
			// Name_M_panel
			// 
			this->Name_M_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Name_M_panel->Controls->Add(this->panel14);
			this->Name_M_panel->Controls->Add(this->textBox11);
			this->Name_M_panel->Controls->Add(this->label12);
			this->Name_M_panel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Name_M_panel->Location = System::Drawing::Point(37, 123);
			this->Name_M_panel->Name = L"Name_M_panel";
			this->Name_M_panel->Size = System::Drawing::Size(170, 2);
			this->Name_M_panel->TabIndex = 37;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel14->Location = System::Drawing::Point(1, 20);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(170, 2);
			this->panel14->TabIndex = 15;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Black;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox11->Location = System::Drawing::Point(1, 5);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(170, 15);
			this->textBox11->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(-1, -19);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(47, 17);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Name";
			// 
			// Name_M_textBox
			// 
			this->Name_M_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Name_M_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Name_M_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name_M_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Name_M_textBox->Location = System::Drawing::Point(37, 107);
			this->Name_M_textBox->Name = L"Name_M_textBox";
			this->Name_M_textBox->Size = System::Drawing::Size(170, 15);
			this->Name_M_textBox->TabIndex = 36;
			this->Name_M_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &AdminP_Course::Name_M_textBox_KeyDown);
			// 
			// Name_M_label
			// 
			this->Name_M_label->AutoSize = true;
			this->Name_M_label->BackColor = System::Drawing::Color::Transparent;
			this->Name_M_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name_M_label->Location = System::Drawing::Point(35, 84);
			this->Name_M_label->Name = L"Name_M_label";
			this->Name_M_label->Size = System::Drawing::Size(47, 17);
			this->Name_M_label->TabIndex = 35;
			this->Name_M_label->Text = L"Name";
			// 
			// Course_modify_textBox
			// 
			this->Course_modify_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Course_modify_textBox->Location = System::Drawing::Point(356, 131);
			this->Course_modify_textBox->Name = L"Course_modify_textBox";
			this->Course_modify_textBox->Size = System::Drawing::Size(149, 13);
			this->Course_modify_textBox->TabIndex = 3;
			// 
			// m_back_B
			// 
			this->m_back_B->BackColor = System::Drawing::Color::Transparent;
			this->m_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->m_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"m_back_B.Image")));
			this->m_back_B->Location = System::Drawing::Point(0, 0);
			this->m_back_B->Margin = System::Windows::Forms::Padding(2);
			this->m_back_B->Name = L"m_back_B";
			this->m_back_B->Size = System::Drawing::Size(38, 46);
			this->m_back_B->TabIndex = 2;
			this->m_back_B->TabStop = false;
			this->m_back_B->Click += gcnew System::EventHandler(this, &AdminP_Course::m_back_B_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// view_students_panel
			// 
			this->view_students_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"view_students_panel.BackgroundImage")));
			this->view_students_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->view_students_panel->Controls->Add(this->textBox5);
			this->view_students_panel->Controls->Add(this->search_back_B);
			this->view_students_panel->Location = System::Drawing::Point(1, 0);
			this->view_students_panel->Name = L"view_students_panel";
			this->view_students_panel->Size = System::Drawing::Size(544, 381);
			this->view_students_panel->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(353, 131);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(152, 13);
			this->textBox5->TabIndex = 3;
			// 
			// search_back_B
			// 
			this->search_back_B->BackColor = System::Drawing::Color::Transparent;
			this->search_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->search_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_back_B.Image")));
			this->search_back_B->Location = System::Drawing::Point(0, -1);
			this->search_back_B->Margin = System::Windows::Forms::Padding(2);
			this->search_back_B->Name = L"search_back_B";
			this->search_back_B->Size = System::Drawing::Size(38, 46);
			this->search_back_B->TabIndex = 2;
			this->search_back_B->TabStop = false;
			this->search_back_B->Click += gcnew System::EventHandler(this, &AdminP_Course::search_back__B_Click);
			// 
			// AdminP_Course
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(544, 381);
			this->Controls->Add(this->view_students_panel);
			this->Controls->Add(this->modify_course_panel);
			this->Controls->Add(this->delete_course_panel);
			this->Controls->Add(this->add_course_Panel);
			this->Controls->Add(this->Students_B);
			this->Controls->Add(this->Modify_B);
			this->Controls->Add(this->Delete_B);
			this->Controls->Add(this->Add_B);
			this->Controls->Add(this->Back_B);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AdminP_Course";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminP_Course";
			this->Load += gcnew System::EventHandler(this, &AdminP_Course::AdminP_Course_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::AdminP_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::AdminP_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::Adminp_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delete_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Modify_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Students_B))->EndInit();
			this->add_course_Panel->ResumeLayout(false);
			this->add_course_Panel->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->code_panel->ResumeLayout(false);
			this->code_panel->PerformLayout();
			this->Course_Panel->ResumeLayout(false);
			this->Course_Panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->EndInit();
			this->delete_course_panel->ResumeLayout(false);
			this->delete_course_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->delete_course_back_B))->EndInit();
			this->modify_course_panel->ResumeLayout(false);
			this->modify_course_panel->PerformLayout();
			this->Hours_M_panel->ResumeLayout(false);
			this->Hours_M_panel->PerformLayout();
			this->Quota_M_panel->ResumeLayout(false);
			this->Quota_M_panel->PerformLayout();
			this->code_M_panel->ResumeLayout(false);
			this->code_M_panel->PerformLayout();
			this->Name_M_panel->ResumeLayout(false);
			this->Name_M_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->m_back_B))->EndInit();
			this->view_students_panel->ResumeLayout(false);
			this->view_students_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_back_B))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Back_B_Click(System::Object^ sender, System::EventArgs^ e) {
		//Hide the Admin Course panel
		this->Hide();
		//Display the Admin panel
		backform2->Show();
	}
	private: System::Void Add_B_Click(System::Object^ sender, System::EventArgs^ e) {
		//Display the panel to add a new course
		add_course_Panel->Show();
	}
private: System::Void Modify_B_Click(System::Object^ sender, System::EventArgs^ e) {
	//Display the panel to modify a  course
	modify_course_panel->Show();
}
private: System::Void Delete_B_Click(System::Object^ sender, System::EventArgs^ e) {
	//Display the panel to delete a course
	delete_course_panel->Show();
}
private: System::Void Students_B_Click(System::Object^ sender, System::EventArgs^ e) {
	//Display the panel to view students registered 
	//in a specific course, by search a course code
	view_students_panel->Show();
}
	   bool dragging;
	   Point offset;
	private: System::Void AdminP_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Dragging the Application
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void Adminp_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Disable Dragging
		dragging = false;
	}
	private: System::Void AdminP_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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
private: System::Void Add_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Add_tooltip->SetToolTip(Add_B, "Add a new Course.");
}

private: System::Void Modify_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	modify_toolTip->SetToolTip(Modify_B, "Modify an existing Course.");
}
private: System::Void Delete_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	delete_toolTip->SetToolTip(Delete_B,"Delete an existing Course.");
}
private: System::Void Students_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	students_toolTip->SetToolTip(Students_B,"View students registered in a Course.");
}

private: System::Void Course_Name_textbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter) {
		code_textBox->Focus();
	}
}
private: System::Void code_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter) {
		Quota_textBox->Focus();
	}
}
private: System::Void Quota_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter) {
		Hours_textBox->Focus();
	}
}
private: System::Void Hours_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter) {
		PRE_listBox->Focus();
	}
}
private: System::Void PRE_listBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
}
private: System::Void Name_M_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter) {
		code_M_textBox->Focus();
	}
}
private: System::Void code_M_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter) {
		Quota_M_textBox->Focus();
	}
}
private: System::Void Quota_M_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter) {
		Hours_M_textBox->Focus();
	}
}
private: System::Void Hours_M_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter) {
		pre_M_listBox->Focus();
	}
}
private: System::Void addcourse_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	add_course_Panel->Hide();
}

private: System::Void delete_course_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	delete_course_panel->Hide();
}
private: System::Void m_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	modify_course_panel->Hide();
}

private: System::Void AdminP_Course_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void search_back__B_Click(System::Object^ sender, System::EventArgs^ e) {
	view_students_panel->Hide();
}

};
}
