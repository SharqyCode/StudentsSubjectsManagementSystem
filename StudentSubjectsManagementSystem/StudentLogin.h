#pragma once
#include "StudentPortal.h" ;
#include"../StudentSubjectsManagementSystem/Student/Student.h" ;
#include"../StudentSubjectsManagementSystem/Database/GlobalData.h";
#include<msclr/marshal_cppstd.h>
#include<string>
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentLogin
	/// </summary>
	public ref class StudentLogin : public System::Windows::Forms::Form
	{
	public:
		Student* student;
		GlobalData* gd;
		StudentLogin(GlobalData * obj)
		{
			gd = obj;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ UserName_In;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Password_In;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ Login_B;
	private: System::Windows::Forms::Button^ Exit_B;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentLogin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->UserName_In = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Password_In = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Login_B = (gcnew System::Windows::Forms::Button());
			this->Exit_B = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 202);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(52, 248);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(136, 2);
			this->panel1->TabIndex = 4;
			// 
			// UserName_In
			// 
			this->UserName_In->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->UserName_In->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UserName_In->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserName_In->Location = System::Drawing::Point(52, 228);
			this->UserName_In->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->UserName_In->Name = L"UserName_In";
			this->UserName_In->Size = System::Drawing::Size(136, 19);
			this->UserName_In->TabIndex = 6;
			this->UserName_In->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &StudentLogin::UserName_In_KeyDown);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(49, 274);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Password";
			// 
			// Password_In
			// 
			this->Password_In->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Password_In->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password_In->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password_In->Location = System::Drawing::Point(52, 296);
			this->Password_In->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Password_In->Name = L"Password_In";
			this->Password_In->PasswordChar = '~';
			this->Password_In->Size = System::Drawing::Size(136, 19);
			this->Password_In->TabIndex = 8;
			this->Password_In->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &StudentLogin::Password_In_KeyDown);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(52, 319);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(136, 2);
			this->panel2->TabIndex = 5;
			// 
			// Login_B
			// 
			this->Login_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Login_B->FlatAppearance->BorderSize = 0;
			this->Login_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Login_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Login_B->Location = System::Drawing::Point(52, 330);
			this->Login_B->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Login_B->Name = L"Login_B";
			this->Login_B->Size = System::Drawing::Size(64, 31);
			this->Login_B->TabIndex = 9;
			this->Login_B->Text = L"Login";
			this->Login_B->UseVisualStyleBackColor = true;
			this->Login_B->Click += gcnew System::EventHandler(this, &StudentLogin::Login_B_Click);
			// 
			// Exit_B
			// 
			this->Exit_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Exit_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Exit_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Exit_B->Location = System::Drawing::Point(129, 330);
			this->Exit_B->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Exit_B->Name = L"Exit_B";
			this->Exit_B->Size = System::Drawing::Size(66, 31);
			this->Exit_B->TabIndex = 10;
			this->Exit_B->Text = L"Exit";
			this->Exit_B->UseVisualStyleBackColor = false;
			this->Exit_B->Click += gcnew System::EventHandler(this, &StudentLogin::Exit_B_Click);
			// 
			// StudentLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(559, 423);
			this->Controls->Add(this->Exit_B);
			this->Controls->Add(this->Login_B);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Password_In);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->UserName_In);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"StudentLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentLogin";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &StudentLogin::StudentLogin_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &StudentLogin::StudentLogin_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &StudentLogin::StudentLogin_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserName_In_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		//Jump to password automatically
		if (e->KeyValue == (int)Keys::Enter) {
			Password_In->Focus();
		}

	}

	private: System::Void Password_In_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			Login_B->PerformClick();
		}
	}

	private: System::Void Login_B_Click(System::Object^ sender, System::EventArgs^ e) {

		//UserName_In->Text == "student" && Password_In->Text == "password"
		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(UserName_In->Text);
		std::string password = context.marshal_as<std::string>(Password_In->Text);
		std::unordered_map<std::string , Student>::iterator it;
		bool fnd = 0;
		for (it = gd->students.begin(); it != gd->students.end(); it++) {
			//admin = it->second;
			//admin.gd = &gd;
			if ((it->second.get_name() == name) && (it->second.get_password() == password)) {

				fnd = 1;
				student = &(it->second);
				student->gd = gd;
				break;
			}
		}
		if (fnd) {
			//MessageBox::Show("Access Granted", "Signed in Successfuly", MessageBoxButtons::OK, MessageBoxIcon::Information);
			StudentPortal obj(student);
			this->Hide();// hide home page
			obj.ShowDialog();// open login form
		}
		else {
			MessageBox::Show("Incorrect Username or Password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   bool dragging;
		   Point offset;
	private: System::Void StudentLogin_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Dragging the Application
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void StudentLogin_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Disable Dragging
		dragging = false;
	}
	private: System::Void StudentLogin_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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
	private: System::Void Exit_B_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}

