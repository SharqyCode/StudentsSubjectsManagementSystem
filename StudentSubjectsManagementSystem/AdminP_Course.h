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
	private: System::Windows::Forms::PictureBox^ Exit_B;
	private: System::Windows::Forms::PictureBox^ Add_B;
	private: System::Windows::Forms::PictureBox^ Delete_B;

	private: System::Windows::Forms::PictureBox^ Modify_B;
	private: System::Windows::Forms::PictureBox^ Students_B;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminP_Course::typeid));
			this->Back_B = (gcnew System::Windows::Forms::PictureBox());
			this->Exit_B = (gcnew System::Windows::Forms::PictureBox());
			this->Add_B = (gcnew System::Windows::Forms::PictureBox());
			this->Delete_B = (gcnew System::Windows::Forms::PictureBox());
			this->Modify_B = (gcnew System::Windows::Forms::PictureBox());
			this->Students_B = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delete_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Modify_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Students_B))->BeginInit();
			this->SuspendLayout();
			// 
			// Back_B
			// 
			this->Back_B->BackColor = System::Drawing::Color::Transparent;
			this->Back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Back_B.Image")));
			this->Back_B->Location = System::Drawing::Point(0, 12);
			this->Back_B->Name = L"Back_B";
			this->Back_B->Size = System::Drawing::Size(51, 56);
			this->Back_B->TabIndex = 1;
			this->Back_B->TabStop = false;
			this->Back_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Back_B_Click_1);
			// 
			// Exit_B
			// 
			this->Exit_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Exit_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit_B.Image")));
			this->Exit_B->Location = System::Drawing::Point(664, 12);
			this->Exit_B->Name = L"Exit_B";
			this->Exit_B->Size = System::Drawing::Size(49, 52);
			this->Exit_B->TabIndex = 10;
			this->Exit_B->TabStop = false;
			this->Exit_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Exit_B_Click);
			// 
			// Add_B
			// 
			this->Add_B->BackColor = System::Drawing::Color::Transparent;
			this->Add_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add_B.Image")));
			this->Add_B->Location = System::Drawing::Point(106, 145);
			this->Add_B->Name = L"Add_B";
			this->Add_B->Size = System::Drawing::Size(172, 141);
			this->Add_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Add_B->TabIndex = 11;
			this->Add_B->TabStop = false;
			this->Add_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Add_B_Click_1);
			// 
			// Delete_B
			// 
			this->Delete_B->BackColor = System::Drawing::Color::Transparent;
			this->Delete_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete_B.Image")));
			this->Delete_B->Location = System::Drawing::Point(106, 292);
			this->Delete_B->Name = L"Delete_B";
			this->Delete_B->Size = System::Drawing::Size(172, 141);
			this->Delete_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Delete_B->TabIndex = 12;
			this->Delete_B->TabStop = false;
			this->Delete_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Delete_B_Click);
			// 
			// Modify_B
			// 
			this->Modify_B->BackColor = System::Drawing::Color::Transparent;
			this->Modify_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Modify_B.Image")));
			this->Modify_B->Location = System::Drawing::Point(418, 145);
			this->Modify_B->Name = L"Modify_B";
			this->Modify_B->Size = System::Drawing::Size(172, 141);
			this->Modify_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Modify_B->TabIndex = 13;
			this->Modify_B->TabStop = false;
			this->Modify_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Modify_B_Click);
			// 
			// Students_B
			// 
			this->Students_B->BackColor = System::Drawing::Color::Transparent;
			this->Students_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Students_B.Image")));
			this->Students_B->Location = System::Drawing::Point(418, 292);
			this->Students_B->Name = L"Students_B";
			this->Students_B->Size = System::Drawing::Size(172, 141);
			this->Students_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Students_B->TabIndex = 14;
			this->Students_B->TabStop = false;
			this->Students_B->Click += gcnew System::EventHandler(this, &AdminP_Course::Students_B_Click);
			// 
			// AdminP_Course
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(725, 469);
			this->Controls->Add(this->Students_B);
			this->Controls->Add(this->Modify_B);
			this->Controls->Add(this->Delete_B);
			this->Controls->Add(this->Add_B);
			this->Controls->Add(this->Exit_B);
			this->Controls->Add(this->Back_B);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminP_Course";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminP_Course";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::AdminP_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::AdminP_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Course::Adminp_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delete_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Modify_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Students_B))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Add_B_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Back_B_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	backform2->Show();
}
private: System::Void Exit_B_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void Add_B_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
};
}
