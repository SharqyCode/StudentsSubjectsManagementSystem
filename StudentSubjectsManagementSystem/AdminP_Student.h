#pragma once

namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminP_Student
	/// </summary>
	public ref class AdminP_Student : public System::Windows::Forms::Form
	{
	public:
		Form^ backform;
		AdminP_Student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminP_Student(Form^ form)
		{
			backform = form;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminP_Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ Back_B;
	private: System::Windows::Forms::PictureBox^ Add_B;
	private: System::Windows::Forms::PictureBox^ Delet_B;
	private: System::Windows::Forms::PictureBox^ Search_B;


	private: System::Windows::Forms::PictureBox^ pictureBox3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminP_Student::typeid));
			this->Back_B = (gcnew System::Windows::Forms::PictureBox());
			this->Add_B = (gcnew System::Windows::Forms::PictureBox());
			this->Delet_B = (gcnew System::Windows::Forms::PictureBox());
			this->Search_B = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delet_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// Back_B
			// 
			this->Back_B->BackColor = System::Drawing::Color::Transparent;
			this->Back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Back_B.Image")));
			this->Back_B->Location = System::Drawing::Point(1, 12);
			this->Back_B->Name = L"Back_B";
			this->Back_B->Size = System::Drawing::Size(51, 56);
			this->Back_B->TabIndex = 0;
			this->Back_B->TabStop = false;
			this->Back_B->Click += gcnew System::EventHandler(this, &AdminP_Student::Back_B_Click);
			// 
			// Add_B
			// 
			this->Add_B->BackColor = System::Drawing::Color::Transparent;
			this->Add_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add_B.Image")));
			this->Add_B->Location = System::Drawing::Point(53, 220);
			this->Add_B->Name = L"Add_B";
			this->Add_B->Size = System::Drawing::Size(172, 141);
			this->Add_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Add_B->TabIndex = 1;
			this->Add_B->TabStop = false;
			this->Add_B->Click += gcnew System::EventHandler(this, &AdminP_Student::Add_B_Click);
			// 
			// Delet_B
			// 
			this->Delet_B->BackColor = System::Drawing::Color::Transparent;
			this->Delet_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delet_B.Image")));
			this->Delet_B->Location = System::Drawing::Point(285, 220);
			this->Delet_B->Name = L"Delet_B";
			this->Delet_B->Size = System::Drawing::Size(172, 141);
			this->Delet_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Delet_B->TabIndex = 2;
			this->Delet_B->TabStop = false;
			this->Delet_B->Click += gcnew System::EventHandler(this, &AdminP_Student::Delet_B_Click);
			// 
			// Search_B
			// 
			this->Search_B->BackColor = System::Drawing::Color::Transparent;
			this->Search_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Search_B.Image")));
			this->Search_B->Location = System::Drawing::Point(505, 220);
			this->Search_B->Name = L"Search_B";
			this->Search_B->Size = System::Drawing::Size(172, 141);
			this->Search_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Search_B->TabIndex = 3;
			this->Search_B->TabStop = false;
			this->Search_B->Click += gcnew System::EventHandler(this, &AdminP_Student::Search_B_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(682, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(49, 52);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &AdminP_Student::pictureBox3_Click);
			// 
			// AdminP_Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(743, 516);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->Search_B);
			this->Controls->Add(this->Delet_B);
			this->Controls->Add(this->Add_B);
			this->Controls->Add(this->Back_B);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminP_Student";
			this->Text = L"AdminP_Student";
			this->Load += gcnew System::EventHandler(this, &AdminP_Student::AdminP_Student_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Student::AdminLogin_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Student::AdminLogin_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminP_Student::AdminLogin_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Back_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Add_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delet_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Search_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminP_Student_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   bool dragging;
		   Point offset;
	private: System::Void AdminLogin_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Dragging the Application
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void AdminLogin_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Disable Dragging
		dragging = false;
	}
	private: System::Void AdminLogin_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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

	private: System::Void Back_B_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		backform->Show();
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Add_B_Click(System::Object^ sender, System::EventArgs^ e) {

}


private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void Delet_B_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Search_B_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
