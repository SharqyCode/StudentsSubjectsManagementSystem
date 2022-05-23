#pragma once
#include<msclr/marshal_cppstd.h>
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
	/// Summary for Modify
	/// </summary>
	public ref class Modify : public System::Windows::Forms::Form
	{
	public:
		Student* student;
		Form^ backform5;
		Modify(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Modify(Form^ form , Student * obj) {
			backform5 = form;
			student = obj;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Modify()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ modify_back_B;
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




	private: System::Windows::Forms::Label^ Year_label;

	private: System::Windows::Forms::Panel^ Name_Panel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ Student_Name;
	private: System::Windows::Forms::Label^ NAME_label;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Modify::typeid));
			this->modify_back_B = (gcnew System::Windows::Forms::PictureBox());
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
			this->Year_label = (gcnew System::Windows::Forms::Label());
			this->Name_Panel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Student_Name = (gcnew System::Windows::Forms::TextBox());
			this->NAME_label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modify_back_B))->BeginInit();
			this->password_panel->SuspendLayout();
			this->Year_panel->SuspendLayout();
			this->Name_Panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// modify_back_B
			// 
			this->modify_back_B->BackColor = System::Drawing::Color::Transparent;
			this->modify_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modify_back_B.Image")));
			this->modify_back_B->Location = System::Drawing::Point(0, 0);
			this->modify_back_B->Name = L"modify_back_B";
			this->modify_back_B->Size = System::Drawing::Size(46, 49);
			this->modify_back_B->TabIndex = 0;
			this->modify_back_B->TabStop = false;
			this->modify_back_B->Click += gcnew System::EventHandler(this, &Modify::modify_back_B_Click);
			// 
			// OK_AS_B
			// 
			this->OK_AS_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->OK_AS_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->OK_AS_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OK_AS_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OK_AS_B->Location = System::Drawing::Point(175, 318);
			this->OK_AS_B->Margin = System::Windows::Forms::Padding(2);
			this->OK_AS_B->Name = L"OK_AS_B";
			this->OK_AS_B->Size = System::Drawing::Size(58, 26);
			this->OK_AS_B->TabIndex = 38;
			this->OK_AS_B->Text = L"Edit";
			this->OK_AS_B->UseVisualStyleBackColor = false;
			this->OK_AS_B->Click += gcnew System::EventHandler(this, &Modify::OK_AS_B_Click);
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
			this->password_panel->Location = System::Drawing::Point(63, 293);
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
			this->Password_textBox->Location = System::Drawing::Point(63, 279);
			this->Password_textBox->Name = L"Password_textBox";
			this->Password_textBox->Size = System::Drawing::Size(170, 15);
			this->Password_textBox->TabIndex = 36;
			this->Password_textBox->TextChanged += gcnew System::EventHandler(this, &Modify::Password_textBox_TextChanged);
			this->Password_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Modify::Password_textBox_KeyDown);
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
			this->Year_panel->Location = System::Drawing::Point(63, 214);
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
			this->Password_label->Location = System::Drawing::Point(63, 247);
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
			this->Year_textBox->Location = System::Drawing::Point(63, 200);
			this->Year_textBox->Name = L"Year_textBox";
			this->Year_textBox->Size = System::Drawing::Size(170, 15);
			this->Year_textBox->TabIndex = 33;
			this->Year_textBox->TextChanged += gcnew System::EventHandler(this, &Modify::Year_textBox_TextChanged);
			this->Year_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Modify::Year_textBox_KeyDown);
			// 
			// Year_label
			// 
			this->Year_label->AutoSize = true;
			this->Year_label->BackColor = System::Drawing::Color::Transparent;
			this->Year_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Year_label->Location = System::Drawing::Point(63, 178);
			this->Year_label->Name = L"Year_label";
			this->Year_label->Size = System::Drawing::Size(38, 17);
			this->Year_label->TabIndex = 32;
			this->Year_label->Text = L"Year";
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
			this->Name_Panel->Location = System::Drawing::Point(63, 154);
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
			// Student_Name
			// 
			this->Student_Name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Student_Name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Student_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Student_Name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Student_Name->Location = System::Drawing::Point(63, 138);
			this->Student_Name->Name = L"Student_Name";
			this->Student_Name->Size = System::Drawing::Size(170, 15);
			this->Student_Name->TabIndex = 27;
			this->Student_Name->TextChanged += gcnew System::EventHandler(this, &Modify::Student_Name_TextChanged);
			this->Student_Name->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Modify::Student_Name_KeyDown);
			// 
			// NAME_label
			// 
			this->NAME_label->AutoSize = true;
			this->NAME_label->BackColor = System::Drawing::Color::Transparent;
			this->NAME_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NAME_label->Location = System::Drawing::Point(63, 115);
			this->NAME_label->Name = L"NAME_label";
			this->NAME_label->Size = System::Drawing::Size(47, 17);
			this->NAME_label->TabIndex = 26;
			this->NAME_label->Text = L"Name";
			// 
			// Modify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->OK_AS_B);
			this->Controls->Add(this->password_panel);
			this->Controls->Add(this->Password_textBox);
			this->Controls->Add(this->Year_panel);
			this->Controls->Add(this->Password_label);
			this->Controls->Add(this->Year_textBox);
			this->Controls->Add(this->Year_label);
			this->Controls->Add(this->Name_Panel);
			this->Controls->Add(this->Student_Name);
			this->Controls->Add(this->NAME_label);
			this->Controls->Add(this->modify_back_B);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Modify";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Modify";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modify_back_B))->EndInit();
			this->password_panel->ResumeLayout(false);
			this->password_panel->PerformLayout();
			this->Year_panel->ResumeLayout(false);
			this->Year_panel->PerformLayout();
			this->Name_Panel->ResumeLayout(false);
			this->Name_Panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Student_Name_TextChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void ID_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void Year_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void Password_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void OK_AS_B_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	std::string name = context.marshal_as<std::string>(Student_Name->Text);
	std::string year = context.marshal_as<std::string>(Year_textBox->Text);
	std::string pass = context.marshal_as<std::string>(Password_textBox->Text);

	if (name == "" || year == "" || pass == "" ) {
		MessageBox::Show("Complete the student's data!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	Student stud;
	stud.set_academic_year(year);
	stud.set_name(name);
	stud.set_password(pass);
	student->edit_student(stud);
	this->Hide();
	backform5->Show();
}

private: System::Void Student_Name_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


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

	//Perform click
	if (e->KeyValue == (int)Keys::Enter) {
		OK_AS_B->PerformClick();
	}
}
private: System::Void modify_back_B_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	backform5->Show();
}
};
}
