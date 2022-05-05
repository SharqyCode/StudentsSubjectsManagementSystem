#pragma once

namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Myself1
	/// </summary>
	public ref class Myself1 : public System::Windows::Forms::Form
	{
	public:
		Form^ backform3;
		Myself1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Myself1(Form^ form) {
			backform3 = form;
			InitializeComponent();
			//Hide Pannels
			modify_myself_panel->Hide();
			courses_panel->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Myself1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ modify_myself_B;
	protected:
	private: System::Windows::Forms::PictureBox^ courses_myself_B;
	private: System::Windows::Forms::PictureBox^ myself_back_B;
	private: System::Windows::Forms::Panel^ modify_myself_panel;
	private: System::Windows::Forms::PictureBox^ modify_myself_back_B;
	private: System::Windows::Forms::Button^ Apply_B;
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
	private: System::Windows::Forms::ToolTip^ modify_toolTip;
	private: System::Windows::Forms::ToolTip^ corses_toolTip;
	private: System::Windows::Forms::Panel^ courses_panel;
	private: System::Windows::Forms::CheckBox^ finished_checkBox;
	private: System::Windows::Forms::CheckBox^ inProgress_checkBox;
	private: System::Windows::Forms::PictureBox^ courses_back_B;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Myself1::typeid));
			this->modify_myself_B = (gcnew System::Windows::Forms::PictureBox());
			this->courses_myself_B = (gcnew System::Windows::Forms::PictureBox());
			this->myself_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->modify_myself_panel = (gcnew System::Windows::Forms::Panel());
			this->Apply_B = (gcnew System::Windows::Forms::Button());
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
			this->modify_myself_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->modify_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->corses_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->courses_panel = (gcnew System::Windows::Forms::Panel());
			this->finished_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->inProgress_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->courses_back_B = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modify_myself_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses_myself_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myself_back_B))->BeginInit();
			this->modify_myself_panel->SuspendLayout();
			this->password_panel->SuspendLayout();
			this->Year_panel->SuspendLayout();
			this->ID_panel->SuspendLayout();
			this->Name_Panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modify_myself_back_B))->BeginInit();
			this->courses_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// modify_myself_B
			// 
			this->modify_myself_B->BackColor = System::Drawing::Color::Transparent;
			this->modify_myself_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->modify_myself_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modify_myself_B.Image")));
			this->modify_myself_B->Location = System::Drawing::Point(94, 161);
			this->modify_myself_B->Name = L"modify_myself_B";
			this->modify_myself_B->Size = System::Drawing::Size(179, 152);
			this->modify_myself_B->TabIndex = 0;
			this->modify_myself_B->TabStop = false;
			this->modify_myself_B->Click += gcnew System::EventHandler(this, &Myself1::modify_myself_B_Click);
			this->modify_myself_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Myself1::modify_myself_B_MouseMove);
			// 
			// courses_myself_B
			// 
			this->courses_myself_B->BackColor = System::Drawing::Color::Transparent;
			this->courses_myself_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->courses_myself_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"courses_myself_B.Image")));
			this->courses_myself_B->Location = System::Drawing::Point(279, 167);
			this->courses_myself_B->Name = L"courses_myself_B";
			this->courses_myself_B->Size = System::Drawing::Size(170, 139);
			this->courses_myself_B->TabIndex = 1;
			this->courses_myself_B->TabStop = false;
			this->courses_myself_B->Click += gcnew System::EventHandler(this, &Myself1::courses_myself_B_Click);
			this->courses_myself_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Myself1::courses_myself_B_MouseMove);
			// 
			// myself_back_B
			// 
			this->myself_back_B->BackColor = System::Drawing::Color::Transparent;
			this->myself_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"myself_back_B.Image")));
			this->myself_back_B->Location = System::Drawing::Point(0, 12);
			this->myself_back_B->Name = L"myself_back_B";
			this->myself_back_B->Size = System::Drawing::Size(41, 46);
			this->myself_back_B->TabIndex = 3;
			this->myself_back_B->TabStop = false;
			this->myself_back_B->Click += gcnew System::EventHandler(this, &Myself1::myself_back_B_Click);
			// 
			// modify_myself_panel
			// 
			this->modify_myself_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modify_myself_panel.BackgroundImage")));
			this->modify_myself_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->modify_myself_panel->Controls->Add(this->Apply_B);
			this->modify_myself_panel->Controls->Add(this->password_panel);
			this->modify_myself_panel->Controls->Add(this->Password_textBox);
			this->modify_myself_panel->Controls->Add(this->Year_panel);
			this->modify_myself_panel->Controls->Add(this->Password_label);
			this->modify_myself_panel->Controls->Add(this->Year_textBox);
			this->modify_myself_panel->Controls->Add(this->ID_panel);
			this->modify_myself_panel->Controls->Add(this->Year_label);
			this->modify_myself_panel->Controls->Add(this->ID_textBox);
			this->modify_myself_panel->Controls->Add(this->Name_Panel);
			this->modify_myself_panel->Controls->Add(this->ID_label);
			this->modify_myself_panel->Controls->Add(this->Student_Name);
			this->modify_myself_panel->Controls->Add(this->NAME_label);
			this->modify_myself_panel->Controls->Add(this->modify_myself_back_B);
			this->modify_myself_panel->Location = System::Drawing::Point(0, 339);
			this->modify_myself_panel->Name = L"modify_myself_panel";
			this->modify_myself_panel->Size = System::Drawing::Size(557, 419);
			this->modify_myself_panel->TabIndex = 4;
			// 
			// Apply_B
			// 
			this->Apply_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Apply_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Apply_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Apply_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Apply_B->Location = System::Drawing::Point(174, 317);
			this->Apply_B->Margin = System::Windows::Forms::Padding(2);
			this->Apply_B->Name = L"Apply_B";
			this->Apply_B->Size = System::Drawing::Size(110, 34);
			this->Apply_B->TabIndex = 38;
			this->Apply_B->Text = L"Apply changes";
			this->Apply_B->UseVisualStyleBackColor = false;
			this->Apply_B->Click += gcnew System::EventHandler(this, &Myself1::Apply_B_Click);
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
			this->password_panel->Location = System::Drawing::Point(63, 305);
			this->password_panel->Name = L"password_panel";
			this->password_panel->Size = System::Drawing::Size(170, 2);
			this->password_panel->TabIndex = 37;
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
			this->Password_textBox->Location = System::Drawing::Point(63, 289);
			this->Password_textBox->Name = L"Password_textBox";
			this->Password_textBox->Size = System::Drawing::Size(170, 15);
			this->Password_textBox->TabIndex = 36;
			this->Password_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Myself1::Password_textBox_KeyDown);
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
			this->Year_panel->Location = System::Drawing::Point(64, 245);
			this->Year_panel->Name = L"Year_panel";
			this->Year_panel->Size = System::Drawing::Size(170, 2);
			this->Year_panel->TabIndex = 34;
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
			this->Password_label->Location = System::Drawing::Point(61, 266);
			this->Password_label->Name = L"Password_label";
			this->Password_label->Size = System::Drawing::Size(72, 17);
			this->Password_label->TabIndex = 35;
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
			this->Year_textBox->Location = System::Drawing::Point(64, 229);
			this->Year_textBox->Name = L"Year_textBox";
			this->Year_textBox->Size = System::Drawing::Size(170, 15);
			this->Year_textBox->TabIndex = 33;
			this->Year_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Myself1::Year_textBox_KeyDown);
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
			this->ID_panel->Location = System::Drawing::Point(64, 190);
			this->ID_panel->Name = L"ID_panel";
			this->ID_panel->Size = System::Drawing::Size(170, 2);
			this->ID_panel->TabIndex = 31;
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
			this->Year_label->Location = System::Drawing::Point(62, 206);
			this->Year_label->Name = L"Year_label";
			this->Year_label->Size = System::Drawing::Size(38, 17);
			this->Year_label->TabIndex = 32;
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
			this->ID_textBox->Location = System::Drawing::Point(64, 174);
			this->ID_textBox->Name = L"ID_textBox";
			this->ID_textBox->Size = System::Drawing::Size(170, 15);
			this->ID_textBox->TabIndex = 30;
			this->ID_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Myself1::ID_textBox_KeyDown);
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
			this->Name_Panel->Location = System::Drawing::Point(63, 143);
			this->Name_Panel->Name = L"Name_Panel";
			this->Name_Panel->Size = System::Drawing::Size(170, 2);
			this->Name_Panel->TabIndex = 28;
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
			this->ID_label->Location = System::Drawing::Point(62, 151);
			this->ID_label->Name = L"ID_label";
			this->ID_label->Size = System::Drawing::Size(22, 17);
			this->ID_label->TabIndex = 29;
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
			this->Student_Name->Location = System::Drawing::Point(63, 127);
			this->Student_Name->Name = L"Student_Name";
			this->Student_Name->Size = System::Drawing::Size(170, 15);
			this->Student_Name->TabIndex = 27;
			this->Student_Name->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Myself1::Student_Name_KeyDown);
			// 
			// NAME_label
			// 
			this->NAME_label->AutoSize = true;
			this->NAME_label->BackColor = System::Drawing::Color::Transparent;
			this->NAME_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NAME_label->Location = System::Drawing::Point(61, 104);
			this->NAME_label->Name = L"NAME_label";
			this->NAME_label->Size = System::Drawing::Size(47, 17);
			this->NAME_label->TabIndex = 26;
			this->NAME_label->Text = L"Name";
			// 
			// modify_myself_back_B
			// 
			this->modify_myself_back_B->BackColor = System::Drawing::Color::Transparent;
			this->modify_myself_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modify_myself_back_B.Image")));
			this->modify_myself_back_B->Location = System::Drawing::Point(0, 12);
			this->modify_myself_back_B->Name = L"modify_myself_back_B";
			this->modify_myself_back_B->Size = System::Drawing::Size(41, 46);
			this->modify_myself_back_B->TabIndex = 4;
			this->modify_myself_back_B->TabStop = false;
			this->modify_myself_back_B->Click += gcnew System::EventHandler(this, &Myself1::modify_myself_back_B_Click);
			// 
			// courses_panel
			// 
			this->courses_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"courses_panel.BackgroundImage")));
			this->courses_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->courses_panel->Controls->Add(this->finished_checkBox);
			this->courses_panel->Controls->Add(this->inProgress_checkBox);
			this->courses_panel->Controls->Add(this->courses_back_B);
			this->courses_panel->Location = System::Drawing::Point(418, 12);
			this->courses_panel->Name = L"courses_panel";
			this->courses_panel->Size = System::Drawing::Size(557, 419);
			this->courses_panel->TabIndex = 5;
			// 
			// finished_checkBox
			// 
			this->finished_checkBox->AutoCheck = false;
			this->finished_checkBox->AutoSize = true;
			this->finished_checkBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->finished_checkBox->Location = System::Drawing::Point(388, 267);
			this->finished_checkBox->Name = L"finished_checkBox";
			this->finished_checkBox->Size = System::Drawing::Size(65, 17);
			this->finished_checkBox->TabIndex = 6;
			this->finished_checkBox->Text = L"Finished";
			this->finished_checkBox->UseVisualStyleBackColor = false;
			this->finished_checkBox->CheckedChanged += gcnew System::EventHandler(this, &Myself1::finished_checkBox_CheckedChanged);
			// 
			// inProgress_checkBox
			// 
			this->inProgress_checkBox->AutoCheck = false;
			this->inProgress_checkBox->AutoSize = true;
			this->inProgress_checkBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->inProgress_checkBox->Location = System::Drawing::Point(387, 243);
			this->inProgress_checkBox->Name = L"inProgress_checkBox";
			this->inProgress_checkBox->Size = System::Drawing::Size(79, 17);
			this->inProgress_checkBox->TabIndex = 5;
			this->inProgress_checkBox->Text = L"In-Progress";
			this->inProgress_checkBox->UseVisualStyleBackColor = false;
			this->inProgress_checkBox->CheckedChanged += gcnew System::EventHandler(this, &Myself1::inProgress_checkBox_CheckedChanged);
			// 
			// courses_back_B
			// 
			this->courses_back_B->BackColor = System::Drawing::Color::Transparent;
			this->courses_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"courses_back_B.Image")));
			this->courses_back_B->Location = System::Drawing::Point(0, 3);
			this->courses_back_B->Name = L"courses_back_B";
			this->courses_back_B->Size = System::Drawing::Size(41, 46);
			this->courses_back_B->TabIndex = 4;
			this->courses_back_B->TabStop = false;
			this->courses_back_B->Click += gcnew System::EventHandler(this, &Myself1::courses_back_B_Click);
			// 
			// Myself1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->courses_panel);
			this->Controls->Add(this->modify_myself_panel);
			this->Controls->Add(this->myself_back_B);
			this->Controls->Add(this->courses_myself_B);
			this->Controls->Add(this->modify_myself_B);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Myself1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Myself";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modify_myself_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses_myself_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myself_back_B))->EndInit();
			this->modify_myself_panel->ResumeLayout(false);
			this->modify_myself_panel->PerformLayout();
			this->password_panel->ResumeLayout(false);
			this->password_panel->PerformLayout();
			this->Year_panel->ResumeLayout(false);
			this->Year_panel->PerformLayout();
			this->ID_panel->ResumeLayout(false);
			this->ID_panel->PerformLayout();
			this->Name_Panel->ResumeLayout(false);
			this->Name_Panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modify_myself_back_B))->EndInit();
			this->courses_panel->ResumeLayout(false);
			this->courses_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses_back_B))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
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
		Apply_B->PerformClick();
	}
}
private: System::Void Apply_B_Click(System::Object^ sender, System::EventArgs^ e) {

	//Add your Logic to modify the students data
}
private: System::Void courses_myself_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	corses_toolTip->SetToolTip(courses_myself_B,"View your Courses.");
}
private: System::Void modify_myself_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	modify_toolTip->SetToolTip(modify_myself_B, "Edit your Personal Details.");

}
private: System::Void inProgress_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (inProgress_checkBox->Checked) {
		//Add your logic to display the students current courses
		//NB:No component added for the courses to be displayed in
	}
}
private: System::Void finished_checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (finished_checkBox->Checked) {
		//Add your logic to display the students finished courses
		//NB:No component added for the courses to be displayed in
	}
}
private: System::Void courses_back_B_Click(System::Object^ sender, System::EventArgs^ e) {

	//Hide panel
	courses_panel->Hide();
}
private: System::Void modify_myself_back_B_Click(System::Object^ sender, System::EventArgs^ e) {

	//Hide panel
	modify_myself_panel->Hide();
}
private: System::Void modify_myself_B_Click(System::Object^ sender, System::EventArgs^ e) {

	//Display panel
	modify_myself_panel->Show();
}
private: System::Void courses_myself_B_Click(System::Object^ sender, System::EventArgs^ e) {

	//Display panel
	courses_panel->Show();
}
private: System::Void myself_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	backform3->Show();
}
};
}
