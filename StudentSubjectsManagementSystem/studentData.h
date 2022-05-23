#pragma once
#include"Modify.h"
#include"Courses.h"
#include"../StudentSubjectsManagementSystem/Student/Student.h"
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for studentData
	/// </summary>
	public ref class studentData : public System::Windows::Forms::Form
	{
	public:
		Form^ backform3;
		Student* student;
		studentData(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		studentData(Form^ form , Student * obj) {
			backform3 = form;
			student = obj;
			InitializeComponent();
			//Hide Pannels
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~studentData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ modify_B;
	protected:
	private: System::Windows::Forms::PictureBox^ courses_B;
	private: System::Windows::Forms::ToolTip^ modify_toolTip;
	private: System::Windows::Forms::ToolTip^ courses_toolTip;
	private: System::Windows::Forms::PictureBox^ studentData_back_B;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(studentData::typeid));
			this->modify_B = (gcnew System::Windows::Forms::PictureBox());
			this->courses_B = (gcnew System::Windows::Forms::PictureBox());
			this->modify_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->courses_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->studentData_back_B = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modify_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentData_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// modify_B
			// 
			this->modify_B->BackColor = System::Drawing::Color::Transparent;
			this->modify_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"modify_B.Image")));
			this->modify_B->Location = System::Drawing::Point(101, 176);
			this->modify_B->Name = L"modify_B";
			this->modify_B->Size = System::Drawing::Size(170, 140);
			this->modify_B->TabIndex = 0;
			this->modify_B->TabStop = false;
			this->modify_B->Click += gcnew System::EventHandler(this, &studentData::modify_B_Click);
			this->modify_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &studentData::modify_B_MouseMove);
			// 
			// courses_B
			// 
			this->courses_B->BackColor = System::Drawing::Color::Transparent;
			this->courses_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"courses_B.Image")));
			this->courses_B->Location = System::Drawing::Point(287, 176);
			this->courses_B->Name = L"courses_B";
			this->courses_B->Size = System::Drawing::Size(169, 140);
			this->courses_B->TabIndex = 1;
			this->courses_B->TabStop = false;
			this->courses_B->Click += gcnew System::EventHandler(this, &studentData::courses_B_Click);
			this->courses_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &studentData::courses_B_MouseMove);
			// 
			// studentData_back_B
			// 
			this->studentData_back_B->BackColor = System::Drawing::Color::Transparent;
			this->studentData_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"studentData_back_B.Image")));
			this->studentData_back_B->Location = System::Drawing::Point(-1, -1);
			this->studentData_back_B->Name = L"studentData_back_B";
			this->studentData_back_B->Size = System::Drawing::Size(46, 49);
			this->studentData_back_B->TabIndex = 2;
			this->studentData_back_B->TabStop = false;
			this->studentData_back_B->Click += gcnew System::EventHandler(this, &studentData::studentData_back_B_Click);
			// 
			// studentData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->studentData_back_B);
			this->Controls->Add(this->courses_B);
			this->Controls->Add(this->modify_B);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"studentData";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"studentData";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->modify_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->studentData_back_B))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void modify_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
		modify_toolTip->SetToolTip(modify_B, "Edit your Personal Details.");

	}
	private: System::Void courses_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
		courses_toolTip->SetToolTip(courses_B, "View your Courses.");
	}
private: System::Void modify_B_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	Modify^ obj = gcnew Modify(this , student);
	obj->ShowDialog();
}
private: System::Void courses_B_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	Courses^ obj = gcnew Courses(this , student);
	obj->ShowDialog();
}
private: System::Void studentData_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	backform3->Show();
}
};
}
