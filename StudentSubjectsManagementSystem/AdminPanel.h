#pragma once
#include "AdminP_Student.h"
#include "AdminP_Course.h"
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminPanel
	/// </summary>
	public ref class AdminPanel : public System::Windows::Forms::Form
	{
	public:
		AdminPanel(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Student_P;
	private: System::Windows::Forms::PictureBox^ Exit_B;
	private: System::Windows::Forms::PictureBox^ Courses_P;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminPanel::typeid));
			this->Student_P = (gcnew System::Windows::Forms::PictureBox());
			this->Exit_B = (gcnew System::Windows::Forms::PictureBox());
			this->Courses_P = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Student_P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Courses_P))->BeginInit();
			this->SuspendLayout();
			// 
			// Student_P
			// 
			this->Student_P->BackColor = System::Drawing::Color::Transparent;
			this->Student_P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Student_P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Student_P->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Student_P.Image")));
			this->Student_P->Location = System::Drawing::Point(53, 195);
			this->Student_P->Name = L"Student_P";
			this->Student_P->Size = System::Drawing::Size(172, 141);
			this->Student_P->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Student_P->TabIndex = 0;
			this->Student_P->TabStop = false;
			this->Student_P->Click += gcnew System::EventHandler(this, &AdminPanel::Student_P_Click);
			// 
			// Exit_B
			// 
			this->Exit_B->BackColor = System::Drawing::Color::Transparent;
			this->Exit_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Exit_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit_B.Image")));
			this->Exit_B->Location = System::Drawing::Point(495, 195);
			this->Exit_B->Name = L"Exit_B";
			this->Exit_B->Size = System::Drawing::Size(172, 141);
			this->Exit_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Exit_B->TabIndex = 1;
			this->Exit_B->TabStop = false;
			this->Exit_B->Click += gcnew System::EventHandler(this, &AdminPanel::Exit_B_Click);
			// 
			// Courses_P
			// 
			this->Courses_P->BackColor = System::Drawing::Color::Transparent;
			this->Courses_P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Courses_P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Courses_P->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Courses_P.Image")));
			this->Courses_P->Location = System::Drawing::Point(272, 195);
			this->Courses_P->Name = L"Courses_P";
			this->Courses_P->Size = System::Drawing::Size(172, 141);
			this->Courses_P->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Courses_P->TabIndex = 2;
			this->Courses_P->TabStop = false;
			this->Courses_P->Click += gcnew System::EventHandler(this, &AdminPanel::Courses_P_Click);
			// 
			// AdminPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(725, 469);
			this->Controls->Add(this->Courses_P);
			this->Controls->Add(this->Exit_B);
			this->Controls->Add(this->Student_P);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminPanel";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminPanel::AdminPanel_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminPanel::AdminPanel_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminPanel::AdminPanel_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Student_P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Courses_P))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void Student_P_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		AdminP_Student^ obj = gcnew AdminP_Student(this);
		obj->ShowDialog();
	}
	private: System::Void Exit_B_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
		
	}
private: System::Void Courses_P_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	AdminP_Course^ obj2 = gcnew AdminP_Course(this);
	obj2->ShowDialog();
}
	   bool dragging;
	   Point offset;
	private: System::Void AdminPanel_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Dragging the Application
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void AdminPanel_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Disable Dragging
		dragging = false;
	}
	private: System::Void AdminPanel_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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
};
}
