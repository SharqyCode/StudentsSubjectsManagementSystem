#pragma once
#include"Myself.h" ;
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentPortal
	/// </summary>
	public ref class StudentPortal : public System::Windows::Forms::Form
	{
	public:
		StudentPortal(void)
		{
			InitializeComponent();
			register_panel->Hide();
			available_courses_panel->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentPortal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Exit_B;
	protected:
	private: System::Windows::Forms::PictureBox^ Myself_B;
	private: System::Windows::Forms::PictureBox^ Course_B;
	private: System::Windows::Forms::PictureBox^ Register_B;
	private: System::Windows::Forms::ToolTip^ myself_toolTip;
	private: System::Windows::Forms::ToolTip^ courses_toolTip;
	private: System::Windows::Forms::ToolTip^ register_toolTip;
	private: System::Windows::Forms::Panel^ register_panel;
	private: System::Windows::Forms::PictureBox^ register_course_back_B;
	private: System::Windows::Forms::TextBox^ course_code_textBox;
	private: System::Windows::Forms::Panel^ available_courses_panel;
	private: System::Windows::Forms::PictureBox^ avail_course_back_B;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentPortal::typeid));
			this->Exit_B = (gcnew System::Windows::Forms::PictureBox());
			this->Myself_B = (gcnew System::Windows::Forms::PictureBox());
			this->Course_B = (gcnew System::Windows::Forms::PictureBox());
			this->Register_B = (gcnew System::Windows::Forms::PictureBox());
			this->myself_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->courses_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->register_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->register_panel = (gcnew System::Windows::Forms::Panel());
			this->register_course_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->course_code_textBox = (gcnew System::Windows::Forms::TextBox());
			this->available_courses_panel = (gcnew System::Windows::Forms::Panel());
			this->avail_course_back_B = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Myself_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Course_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Register_B))->BeginInit();
			this->register_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->register_course_back_B))->BeginInit();
			this->available_courses_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avail_course_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// Exit_B
			// 
			this->Exit_B->BackColor = System::Drawing::Color::Transparent;
			this->Exit_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Exit_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit_B.Image")));
			this->Exit_B->Location = System::Drawing::Point(316, 102);
			this->Exit_B->Margin = System::Windows::Forms::Padding(2);
			this->Exit_B->Name = L"Exit_B";
			this->Exit_B->Size = System::Drawing::Size(129, 115);
			this->Exit_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Exit_B->TabIndex = 2;
			this->Exit_B->TabStop = false;
			this->Exit_B->Click += gcnew System::EventHandler(this, &StudentPortal::Exit_B_Click);
			// 
			// Myself_B
			// 
			this->Myself_B->BackColor = System::Drawing::Color::Transparent;
			this->Myself_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Myself_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Myself_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Myself_B.Image")));
			this->Myself_B->Location = System::Drawing::Point(78, 102);
			this->Myself_B->Margin = System::Windows::Forms::Padding(2);
			this->Myself_B->Name = L"Myself_B";
			this->Myself_B->Size = System::Drawing::Size(129, 115);
			this->Myself_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Myself_B->TabIndex = 3;
			this->Myself_B->TabStop = false;
			this->Myself_B->Click += gcnew System::EventHandler(this, &StudentPortal::Myself_B_Click);
			this->Myself_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &StudentPortal::Myself_B_MouseMove);
			// 
			// Course_B
			// 
			this->Course_B->BackColor = System::Drawing::Color::Transparent;
			this->Course_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Course_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Course_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Course_B.Image")));
			this->Course_B->Location = System::Drawing::Point(78, 222);
			this->Course_B->Margin = System::Windows::Forms::Padding(2);
			this->Course_B->Name = L"Course_B";
			this->Course_B->Size = System::Drawing::Size(129, 115);
			this->Course_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Course_B->TabIndex = 4;
			this->Course_B->TabStop = false;
			this->Course_B->Click += gcnew System::EventHandler(this, &StudentPortal::Course_B_Click);
			this->Course_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &StudentPortal::Course_B_MouseMove);
			// 
			// Register_B
			// 
			this->Register_B->BackColor = System::Drawing::Color::Transparent;
			this->Register_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Register_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Register_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Register_B.Image")));
			this->Register_B->Location = System::Drawing::Point(316, 222);
			this->Register_B->Margin = System::Windows::Forms::Padding(2);
			this->Register_B->Name = L"Register_B";
			this->Register_B->Size = System::Drawing::Size(129, 115);
			this->Register_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Register_B->TabIndex = 5;
			this->Register_B->TabStop = false;
			this->Register_B->Click += gcnew System::EventHandler(this, &StudentPortal::Register_B_Click);
			this->Register_B->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &StudentPortal::Register_B_MouseMove);
			// 
			// register_panel
			// 
			this->register_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"register_panel.BackgroundImage")));
			this->register_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->register_panel->Controls->Add(this->register_course_back_B);
			this->register_panel->Controls->Add(this->course_code_textBox);
			this->register_panel->Location = System::Drawing::Point(1, 0);
			this->register_panel->Name = L"register_panel";
			this->register_panel->Size = System::Drawing::Size(544, 381);
			this->register_panel->TabIndex = 6;
			// 
			// register_course_back_B
			// 
			this->register_course_back_B->BackColor = System::Drawing::Color::Transparent;
			this->register_course_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"register_course_back_B.Image")));
			this->register_course_back_B->Location = System::Drawing::Point(3, 0);
			this->register_course_back_B->Name = L"register_course_back_B";
			this->register_course_back_B->Size = System::Drawing::Size(41, 46);
			this->register_course_back_B->TabIndex = 1;
			this->register_course_back_B->TabStop = false;
			this->register_course_back_B->Click += gcnew System::EventHandler(this, &StudentPortal::register_course_back_B_Click);
			// 
			// course_code_textBox
			// 
			this->course_code_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->course_code_textBox->Location = System::Drawing::Point(352, 127);
			this->course_code_textBox->Name = L"course_code_textBox";
			this->course_code_textBox->Size = System::Drawing::Size(149, 13);
			this->course_code_textBox->TabIndex = 0;
			// 
			// available_courses_panel
			// 
			this->available_courses_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"available_courses_panel.BackgroundImage")));
			this->available_courses_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->available_courses_panel->Controls->Add(this->avail_course_back_B);
			this->available_courses_panel->Location = System::Drawing::Point(12, 42);
			this->available_courses_panel->Name = L"available_courses_panel";
			this->available_courses_panel->Size = System::Drawing::Size(544, 381);
			this->available_courses_panel->TabIndex = 7;
			// 
			// avail_course_back_B
			// 
			this->avail_course_back_B->BackColor = System::Drawing::Color::Transparent;
			this->avail_course_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"avail_course_back_B.Image")));
			this->avail_course_back_B->Location = System::Drawing::Point(0, 3);
			this->avail_course_back_B->Name = L"avail_course_back_B";
			this->avail_course_back_B->Size = System::Drawing::Size(41, 46);
			this->avail_course_back_B->TabIndex = 2;
			this->avail_course_back_B->TabStop = false;
			this->avail_course_back_B->Click += gcnew System::EventHandler(this, &StudentPortal::avail_course_back_B_Click);
			// 
			// StudentPortal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(544, 381);
			this->Controls->Add(this->available_courses_panel);
			this->Controls->Add(this->register_panel);
			this->Controls->Add(this->Register_B);
			this->Controls->Add(this->Course_B);
			this->Controls->Add(this->Myself_B);
			this->Controls->Add(this->Exit_B);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StudentPortal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentPortal";
			this->Load += gcnew System::EventHandler(this, &StudentPortal::StudentPortal_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &StudentPortal::StudentPortal_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &StudentPortal::StudentPortal_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &StudentPortal::StudentPortal_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Myself_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Course_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Register_B))->EndInit();
			this->register_panel->ResumeLayout(false);
			this->register_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->register_course_back_B))->EndInit();
			this->available_courses_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avail_course_back_B))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StudentPortal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   bool dragging;
		   Point offset;
	private: System::Void StudentPortal_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Dragging the Application
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void StudentPortal_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Disable Dragging
		dragging = false;
	}
	private: System::Void StudentPortal_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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
	private: System::Void Myself_B_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Myself1^ obj = gcnew Myself1(this);
		obj->ShowDialog();

	}
private: System::Void Exit_B_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit(); 
}
private: System::Void Course_B_Click(System::Object^ sender, System::EventArgs^ e) {
	available_courses_panel->Show();

}
private: System::Void Register_B_Click(System::Object^ sender, System::EventArgs^ e) {
	register_panel->Show();

}
private: System::Void Myself_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	//Displays a tip to the user if s/he hoovers with  the mouse on the button
	myself_toolTip->SetToolTip(Myself_B, "Edit your personal details OR view your courses.");
}
private: System::Void Course_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	//Displays a tip to the user if s/he hoovers with  the mouse on the button
	courses_toolTip->SetToolTip(Course_B, "View available courses");

}
private: System::Void Register_B_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
	//Displays a tip to the user if s/he hoovers with  the mouse on the button
	register_toolTip->SetToolTip(Register_B, "Register a course.");

}
private: System::Void register_course_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	register_panel->Hide();
}
private: System::Void avail_course_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	available_courses_panel->Hide();
}
};

}
