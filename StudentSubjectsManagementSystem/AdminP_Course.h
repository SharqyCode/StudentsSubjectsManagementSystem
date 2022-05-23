#pragma once
#include"Admin_AddCourse.h" ;
#include"Course_Modify.h" ;
#include"Course_Prerequisites.h" ;
#include "Admin_courseSearch.h" ;
#include<msclr/marshal_cppstd.h>;
#include<string>;
#include "..\StudentSubjectsManagementSystem\Admin\Admin.h";
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
		Admin* admin;
	private: System::Windows::Forms::PictureBox^ Back_B;
	private: System::Windows::Forms::PictureBox^ Add_B;
	private: System::Windows::Forms::PictureBox^ Modify_B;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolTip^ delete_toolTip;
	private: System::Windows::Forms::ToolTip^ pre_toolTip;
	private: System::Windows::Forms::PictureBox^ Students_B;
	public:
		AdminP_Course(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminP_Course(Form^ form , Admin * obj)
		{
			backform2 = form;
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
		~AdminP_Course()
		{
			if (components)
			{
				delete components;
			}
		}







	private: System::Windows::Forms::ToolTip^ Add_tooltip;
	private: System::Windows::Forms::ToolTip^ modify_toolTip;

	private: System::Windows::Forms::ToolTip^ students_toolTip;

private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;




















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
			this->Add_tooltip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->modify_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->students_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->Back_B = (gcnew System::Windows::Forms::PictureBox());
			this->Add_B = (gcnew System::Windows::Forms::PictureBox());
			this->Modify_B = (gcnew System::Windows::Forms::PictureBox());
			this->Students_B = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->delete_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pre_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Modify_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Students_B))->BeginInit();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
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
			this->Add_B->Location = System::Drawing::Point(102, 128);
			this->Add_B->Margin = System::Windows::Forms::Padding(2);
			this->Add_B->Name = L"Add_B";
			this->Add_B->Size = System::Drawing::Size(129, 115);
			this->Add_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Add_B->TabIndex = 12;
			this->Add_B->TabStop = false;
			this->Add_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Add_B_Click_1);
			this->Add_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::Add_B_MouseMove_1);
			// 
			// Modify_B
			// 
			this->Modify_B->BackColor = System::Drawing::Color::Transparent;
			this->Modify_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Modify_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Modify_B.Image")));
			this->Modify_B->Location = System::Drawing::Point(102, 265);
			this->Modify_B->Margin = System::Windows::Forms::Padding(2);
			this->Modify_B->Name = L"Modify_B";
			this->Modify_B->Size = System::Drawing::Size(129, 115);
			this->Modify_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Modify_B->TabIndex = 14;
			this->Modify_B->TabStop = false;
			this->Modify_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Modify_B_Click_2);
			this->Modify_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::Modify_B_MouseMove_1);
			// 
			// Students_B
			// 
			this->Students_B->BackColor = System::Drawing::Color::Transparent;
			this->Students_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Students_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Students_B.Image")));
			this->Students_B->Location = System::Drawing::Point(326, 265);
			this->Students_B->Margin = System::Windows::Forms::Padding(2);
			this->Students_B->Name = L"Students_B";
			this->Students_B->Size = System::Drawing::Size(129, 115);
			this->Students_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Students_B->TabIndex = 15;
			this->Students_B->TabStop = false;
			this->Students_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Students_B_Click_1);
			this->Students_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::Students_B_MouseMove_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(326, 128);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 115);
			this->button1->TabIndex = 16;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminP_Course::button1_Click);
			this->button1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::button1_MouseMove);
			// 
			// AdminP_Course
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Students_B);
			this->Controls->Add(this->Modify_B);
			this->Controls->Add(this->Add_B);
			this->Controls->Add(this->Back_B);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AdminP_Course";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminP_Course";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::AdminP_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::AdminP_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::Adminp_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Modify_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Students_B))->EndInit();
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
	}
private: System::Void Modify_B_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Delete_B_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Students_B_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void Modify_B_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Add_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void Modify_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void Students_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void Add_B_Click_1(System::Object^ sender, System::EventArgs^ e) {
	  this->Hide();
      Admin_AddCourse ^ obj = gcnew Admin_AddCourse(this , admin);
	  obj->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Course_Prerequisites^ obj = gcnew Course_Prerequisites(admin , this);
	obj->ShowDialog();
}
private: System::Void Modify_B_Click_2(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Course_Modify^ obj = gcnew Course_Modify(this, admin);
	obj->ShowDialog();
}
private: System::Void Students_B_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Admin_courseSearch^ obj = gcnew Admin_courseSearch(this , admin);
	this->Hide();
	obj->ShowDialog();

}
private: System::Void Add_B_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	Add_tooltip->SetToolTip(Add_B,"Add a Course.");
}
private: System::Void button1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	pre_toolTip->SetToolTip(button1,"Add Course Prerequisites");
}
private: System::Void Modify_B_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	modify_toolTip->SetToolTip(Modify_B,"Modify a Course.");
}
private: System::Void Students_B_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	students_toolTip->SetToolTip(Students_B,"List Students Registered in a Specific Course");
}
};
}
