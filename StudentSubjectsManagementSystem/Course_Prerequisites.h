#pragma once
#include<msclr/marshal_cppstd.h>;
#include<string>
#include"../StudentSubjectsManagementSystem/Admin/Admin.h";
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Course_Prerequisites
	/// </summary>
	public ref class Course_Prerequisites : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::PictureBox^ addcourse_back_B;
	private: System::Windows::Forms::TextBox^ course1;
	private: System::Windows::Forms::TextBox^ course2;
	private: System::Windows::Forms::TextBox^ course3;
	public:
		Form^ back;
		Admin* admin;
		Course_Prerequisites(Admin *  obj1 , Form ^ form )
		{
			admin = obj1;
			back = form;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Course_Prerequisites()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ actual;
	protected:

	protected:



	private: System::Windows::Forms::Button^ okay;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Course_Prerequisites::typeid));
			this->actual = (gcnew System::Windows::Forms::TextBox());
			this->okay = (gcnew System::Windows::Forms::Button());
			this->addcourse_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->course1 = (gcnew System::Windows::Forms::TextBox());
			this->course2 = (gcnew System::Windows::Forms::TextBox());
			this->course3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// actual
			// 
			this->actual->Location = System::Drawing::Point(105, 124);
			this->actual->Name = L"actual";
			this->actual->Size = System::Drawing::Size(192, 22);
			this->actual->TabIndex = 0;
			this->actual->Text = L"Course code ";
			// 
			// okay
			// 
			this->okay->Location = System::Drawing::Point(456, 312);
			this->okay->Name = L"okay";
			this->okay->Size = System::Drawing::Size(75, 23);
			this->okay->TabIndex = 4;
			this->okay->Text = L"Ok";
			this->okay->UseVisualStyleBackColor = true;
			this->okay->Click += gcnew System::EventHandler(this, &Course_Prerequisites::okay_Click);
			// 
			// addcourse_back_B
			// 
			this->addcourse_back_B->BackColor = System::Drawing::Color::Transparent;
			this->addcourse_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcourse_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addcourse_back_B.Image")));
			this->addcourse_back_B->Location = System::Drawing::Point(-2, -1);
			this->addcourse_back_B->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addcourse_back_B->Name = L"addcourse_back_B";
			this->addcourse_back_B->Size = System::Drawing::Size(51, 57);
			this->addcourse_back_B->TabIndex = 47;
			this->addcourse_back_B->TabStop = false;
			this->addcourse_back_B->Click += gcnew System::EventHandler(this, &Course_Prerequisites::addcourse_back_B_Click);
			// 
			// course1
			// 
			this->course1->Location = System::Drawing::Point(226, 175);
			this->course1->Name = L"course1";
			this->course1->Size = System::Drawing::Size(192, 22);
			this->course1->TabIndex = 48;
			// 
			// course2
			// 
			this->course2->Location = System::Drawing::Point(226, 232);
			this->course2->Name = L"course2";
			this->course2->Size = System::Drawing::Size(192, 22);
			this->course2->TabIndex = 49;
			// 
			// course3
			// 
			this->course3->Location = System::Drawing::Point(226, 287);
			this->course3->Name = L"course3";
			this->course3->Size = System::Drawing::Size(192, 22);
			this->course3->TabIndex = 50;
			// 
			// Course_Prerequisites
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(689, 375);
			this->Controls->Add(this->course3);
			this->Controls->Add(this->course2);
			this->Controls->Add(this->course1);
			this->Controls->Add(this->addcourse_back_B);
			this->Controls->Add(this->okay);
			this->Controls->Add(this->actual);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Course_Prerequisites";
			this->Text = L"Course_Prerequisites";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void okay_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string actual_str = context.marshal_as<std::string>(actual->Text);
		std::string course1_str = context.marshal_as<std::string>(course1->Text);
		std::string course2_str = context.marshal_as<std::string>(course2->Text);
		std::string course3_str = context.marshal_as<std::string>(course3->Text);
		int code1, code2, code3 , actual;
		actual = code1 = code2 = code3 = -1;
		if (actual_str != "") {
			actual = std::stoi(actual_str);
		}
		if (course1_str != "") {
			code1 = std::stoi(course1_str);
		}
		if (course2_str != "") {
			code2 = std::stoi(course2_str);
		}
		if (course3_str != "") {
			code3 = std::stoi(course3_str);
		}
		admin->set_course_prerequisites(code1, code2, code3, actual);
		this->Hide();
		back->Show();
	}
private: System::Void addcourse_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	back->Show();
}
};
}
