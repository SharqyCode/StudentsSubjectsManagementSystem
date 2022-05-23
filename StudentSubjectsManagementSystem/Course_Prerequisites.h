#pragma once
#include<msclr/marshal_cppstd.h>;
#include<string>
#include"../StudentSubjectsManagementSystem/Admin/Admin.h";
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Course_Prerequisites
	/// </summary>
	public ref class Course_Prerequisites : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::PictureBox^ addcourse_back_B;
	private: System::Windows::Forms::TextBox^ course1;
	private: System::Windows::Forms::TextBox^ course2;
	private: System::Windows::Forms::TextBox^ course3;
	public:
		Form^ back;
		Admin* admin;
		Course_Prerequisites(Admin* obj1, Form^ form)
		{
			admin = obj1;
			back = form;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^ Course1_label;
	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Panel^ password_panel;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
		   

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Course_Prerequisites()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ actual;
	protected:

	protected:



	private: System::Windows::Forms::Button^ okay;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Course_Prerequisites::typeid));
			this->actual = (gcnew System::Windows::Forms::TextBox());
			this->okay = (gcnew System::Windows::Forms::Button());
			this->addcourse_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->course1 = (gcnew System::Windows::Forms::TextBox());
			this->course2 = (gcnew System::Windows::Forms::TextBox());
			this->course3 = (gcnew System::Windows::Forms::TextBox());
			this->Course1_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password_panel = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->BeginInit();
			this->password_panel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// actual
			// 
			this->actual->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->actual->Location = System::Drawing::Point(362, 142);
			this->actual->Margin = System::Windows::Forms::Padding(2);
			this->actual->Name = L"actual";
			this->actual->Size = System::Drawing::Size(145, 13);
			this->actual->TabIndex = 0;
			// 
			// okay
			// 
			this->okay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->okay->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->okay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okay->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->okay->Location = System::Drawing::Point(160, 306);
			this->okay->Margin = System::Windows::Forms::Padding(2);
			this->okay->Name = L"okay";
			this->okay->Size = System::Drawing::Size(66, 26);
			this->okay->TabIndex = 4;
			this->okay->Text = L"Add";
			this->okay->UseVisualStyleBackColor = false;
			this->okay->Click += gcnew System::EventHandler(this, &Course_Prerequisites::okay_Click);
			// 
			// addcourse_back_B
			// 
			this->addcourse_back_B->BackColor = System::Drawing::Color::Transparent;
			this->addcourse_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcourse_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addcourse_back_B.Image")));
			this->addcourse_back_B->Location = System::Drawing::Point(-2, -1);
			this->addcourse_back_B->Margin = System::Windows::Forms::Padding(2);
			this->addcourse_back_B->Name = L"addcourse_back_B";
			this->addcourse_back_B->Size = System::Drawing::Size(38, 46);
			this->addcourse_back_B->TabIndex = 47;
			this->addcourse_back_B->TabStop = false;
			this->addcourse_back_B->Click += gcnew System::EventHandler(this, &Course_Prerequisites::addcourse_back_B_Click);
			// 
			// course1
			// 
			this->course1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->course1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->course1->Location = System::Drawing::Point(59, 157);
			this->course1->Margin = System::Windows::Forms::Padding(2);
			this->course1->Name = L"course1";
			this->course1->Size = System::Drawing::Size(170, 13);
			this->course1->TabIndex = 48;
			this->course1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Course_Prerequisites::course1_KeyDown);
			// 
			// course2
			// 
			this->course2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->course2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->course2->Location = System::Drawing::Point(58, 213);
			this->course2->Margin = System::Windows::Forms::Padding(2);
			this->course2->Name = L"course2";
			this->course2->Size = System::Drawing::Size(170, 13);
			this->course2->TabIndex = 49;
			this->course2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Course_Prerequisites::course2_KeyDown);
			// 
			// course3
			// 
			this->course3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->course3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->course3->Location = System::Drawing::Point(58, 270);
			this->course3->Margin = System::Windows::Forms::Padding(2);
			this->course3->Name = L"course3";
			this->course3->Size = System::Drawing::Size(170, 13);
			this->course3->TabIndex = 50;
			this->course3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Course_Prerequisites::course3_KeyDown);
			// 
			// Course1_label
			// 
			this->Course1_label->AutoSize = true;
			this->Course1_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Course1_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold));
			this->Course1_label->Location = System::Drawing::Point(53, 134);
			this->Course1_label->Name = L"Course1_label";
			this->Course1_label->Size = System::Drawing::Size(111, 17);
			this->Course1_label->TabIndex = 51;
			this->Course1_label->Text = L"1-Course code:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(56, 190);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 17);
			this->label1->TabIndex = 52;
			this->label1->Text = L"2-Course code:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(55, 248);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 17);
			this->label2->TabIndex = 53;
			this->label2->Text = L"3-Course code:";
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
			this->password_panel->Location = System::Drawing::Point(57, 286);
			this->password_panel->Name = L"password_panel";
			this->password_panel->Size = System::Drawing::Size(170, 2);
			this->password_panel->TabIndex = 55;
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
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel1->Location = System::Drawing::Point(58, 172);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(170, 2);
			this->panel1->TabIndex = 56;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel2->Location = System::Drawing::Point(1, 20);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(170, 2);
			this->panel2->TabIndex = 15;
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
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->label4);
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel3->Location = System::Drawing::Point(58, 228);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(170, 2);
			this->panel3->TabIndex = 57;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel4->Location = System::Drawing::Point(1, 20);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(170, 2);
			this->panel4->TabIndex = 15;
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
			// Course_Prerequisites
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->password_panel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Course1_label);
			this->Controls->Add(this->course3);
			this->Controls->Add(this->course2);
			this->Controls->Add(this->course1);
			this->Controls->Add(this->addcourse_back_B);
			this->Controls->Add(this->okay);
			this->Controls->Add(this->actual);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Course_Prerequisites";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Course_Prerequisites";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->EndInit();
			this->password_panel->ResumeLayout(false);
			this->password_panel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void okay_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string actual_str = context.marshal_as<std::string>(actual->Text);
		std::string course1_str = context.marshal_as<std::string>(course1->Text);
		std::string course2_str = context.marshal_as<std::string>(course2->Text);
		std::string course3_str = context.marshal_as<std::string>(course3->Text);
		int code1, code2, code3 , actual;
		actual = code1 = code2 = code3 = -1;
		if (actual_str == "") {
			MessageBox::Show("State the course's code!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (actual_str == "" && course1_str == "" && course2_str == "" && course3_str == "") {

			MessageBox::Show("No changes Done", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (actual_str != "") {
			actual = std::stoi(actual_str);
		}
		if (course1_str != "") {
			code1 = std::stoi(course1_str);
		}
		if (course2_str != "") {
			code2 = std::stoi(course2_str);
		}
		if (course3_str != "") {
			code3 = std::stoi(course3_str);
		}
		admin->set_course_prerequisites(code1, code2, code3, actual);
		this->Hide();
		back->Show();
	}
private: System::Void addcourse_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	back->Show();
}
private: System::Void course1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


	if (e->KeyValue == (int)Keys::Enter) {
		course2->Focus();
	}
}
private: System::Void course2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


	if (e->KeyValue == (int)Keys::Enter) {
		course3->Focus();
	}
}
private: System::Void course3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


	if (e->KeyValue == (int)Keys::Enter) {
		okay->PerformClick();
	}
}
};
}
