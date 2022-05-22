#pragma once
#include "AdminLogin.h" ;
#include "StudentLogin.h" ;
class GlobalData;
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		GlobalData* gd;
		Home(GlobalData * obj)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^ Admin_B;
	private: System::Windows::Forms::Button^ Student_B;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ close;









	protected:





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->Admin_B = (gcnew System::Windows::Forms::Button());
			this->Student_B = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close))->BeginInit();
			this->SuspendLayout();
			// 
			// Admin_B
			// 
			this->Admin_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Admin_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Admin_B->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Admin_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Admin_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Admin_B->Location = System::Drawing::Point(164, 323);
			this->Admin_B->Margin = System::Windows::Forms::Padding(2);
			this->Admin_B->Name = L"Admin_B";
			this->Admin_B->Size = System::Drawing::Size(101, 35);
			this->Admin_B->TabIndex = 5;
			this->Admin_B->Text = L"Admin";
			this->Admin_B->UseVisualStyleBackColor = false;
			this->Admin_B->Click += gcnew System::EventHandler(this, &Home::Admin_B_Click);
			// 
			// Student_B
			// 
			this->Student_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Student_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Student_B->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Student_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Student_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Student_B->Location = System::Drawing::Point(313, 323);
			this->Student_B->Margin = System::Windows::Forms::Padding(2);
			this->Student_B->Name = L"Student_B";
			this->Student_B->Size = System::Drawing::Size(101, 35);
			this->Student_B->TabIndex = 7;
			this->Student_B->Text = L"Student";
			this->Student_B->UseVisualStyleBackColor = false;
			this->Student_B->Click += gcnew System::EventHandler(this, &Home::Student_B_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->button1->Location = System::Drawing::Point(428, 80);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 35);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Student";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// close
			// 
			this->close->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close.Image")));
			this->close->Location = System::Drawing::Point(512, 2);
			this->close->Margin = System::Windows::Forms::Padding(2);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(37, 42);
			this->close->TabIndex = 8;
			this->close->TabStop = false;
			this->close->Click += gcnew System::EventHandler(this, &Home::close_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->close);
			this->Controls->Add(this->Student_B);
			this->Controls->Add(this->Admin_B);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::Home_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::Home_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::Home_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Admin_B_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminLogin obj(gd);
		this->Hide();// hide home page
		obj.ShowDialog();// open login form

	}
private: System::Void Student_B_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentLogin obj(gd);
	this->Hide();// hide home page
	obj.ShowDialog();// open login form
}
		   bool dragging;
		   Point offset;
	private: System::Void Home_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Dragging the Application
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void Home_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Disable Dragging
		dragging = false;
	}
	private: System::Void Home_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Application::Exit();
	}
	};
}
