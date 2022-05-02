#pragma once

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentPortal::typeid));
			this->Exit_B = (gcnew System::Windows::Forms::PictureBox());
			this->Myself_B = (gcnew System::Windows::Forms::PictureBox());
			this->Course_B = (gcnew System::Windows::Forms::PictureBox());
			this->Register_B = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Myself_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Course_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Register_B))->BeginInit();
			this->SuspendLayout();
			// 
			// Exit_B
			// 
			this->Exit_B->BackColor = System::Drawing::Color::Transparent;
			this->Exit_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Exit_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit_B.Image")));
			this->Exit_B->Location = System::Drawing::Point(422, 126);
			this->Exit_B->Name = L"Exit_B";
			this->Exit_B->Size = System::Drawing::Size(172, 141);
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
			this->Myself_B->Location = System::Drawing::Point(104, 126);
			this->Myself_B->Name = L"Myself_B";
			this->Myself_B->Size = System::Drawing::Size(172, 141);
			this->Myself_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Myself_B->TabIndex = 3;
			this->Myself_B->TabStop = false;
			this->Myself_B->Click += gcnew System::EventHandler(this, &StudentPortal::Myself_B_Click);
			// 
			// Course_B
			// 
			this->Course_B->BackColor = System::Drawing::Color::Transparent;
			this->Course_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Course_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Course_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Course_B.Image")));
			this->Course_B->Location = System::Drawing::Point(104, 273);
			this->Course_B->Name = L"Course_B";
			this->Course_B->Size = System::Drawing::Size(172, 141);
			this->Course_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Course_B->TabIndex = 4;
			this->Course_B->TabStop = false;
			this->Course_B->Click += gcnew System::EventHandler(this, &StudentPortal::Course_B_Click);
			// 
			// Register_B
			// 
			this->Register_B->BackColor = System::Drawing::Color::Transparent;
			this->Register_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Register_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Register_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Register_B.Image")));
			this->Register_B->Location = System::Drawing::Point(422, 273);
			this->Register_B->Name = L"Register_B";
			this->Register_B->Size = System::Drawing::Size(172, 141);
			this->Register_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Register_B->TabIndex = 5;
			this->Register_B->TabStop = false;
			this->Register_B->Click += gcnew System::EventHandler(this, &StudentPortal::Register_B_Click);
			// 
			// StudentPortal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(725, 469);
			this->Controls->Add(this->Register_B);
			this->Controls->Add(this->Course_B);
			this->Controls->Add(this->Myself_B);
			this->Controls->Add(this->Exit_B);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
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

	}
private: System::Void Exit_B_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit(); 
}
private: System::Void Course_B_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Register_B_Click(System::Object^ sender, System::EventArgs^ e) {

}
};

}
