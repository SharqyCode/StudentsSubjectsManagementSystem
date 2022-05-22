#pragma once
#include<msclr/marshal_cppstd.h>;
#include<string>;
#include"..\StudentSubjectsManagementSystem\Admin\Admin.h";
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Course_Modify
	/// </summary>
	public ref class Course_Modify : public System::Windows::Forms::Form
	{
	public:
		Admin* admin;
	private: System::Windows::Forms::PictureBox^ addcourse_back_B;
	public:
		Form^ back;
		Course_Modify(Form ^ form , Admin * obj)
		{
			admin = obj;
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
		~Course_Modify()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Course_modify_textBox;
	protected:
	private: System::Windows::Forms::TextBox^ Hours_M_textBox;
	private: System::Windows::Forms::Label^ Hours_M_label;
	private: System::Windows::Forms::TextBox^ Quota_M_textBox;
	private: System::Windows::Forms::Label^ Quota_M_label;


	private: System::Windows::Forms::TextBox^ Name_M_textBox;
	private: System::Windows::Forms::Label^ Name_M_label;
	private: System::Windows::Forms::Button^ OK_M_B;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Course_Modify::typeid));
			this->Course_modify_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Hours_M_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Hours_M_label = (gcnew System::Windows::Forms::Label());
			this->Quota_M_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Quota_M_label = (gcnew System::Windows::Forms::Label());
			this->Name_M_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Name_M_label = (gcnew System::Windows::Forms::Label());
			this->OK_M_B = (gcnew System::Windows::Forms::Button());
			this->addcourse_back_B = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// Course_modify_textBox
			// 
			this->Course_modify_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Course_modify_textBox->Location = System::Drawing::Point(484, 174);
			this->Course_modify_textBox->Margin = System::Windows::Forms::Padding(4);
			this->Course_modify_textBox->Name = L"Course_modify_textBox";
			this->Course_modify_textBox->Size = System::Drawing::Size(199, 15);
			this->Course_modify_textBox->TabIndex = 4;
			// 
			// Hours_M_textBox
			// 
			this->Hours_M_textBox->BackColor = System::Drawing::Color::White;
			this->Hours_M_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Hours_M_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_M_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Hours_M_textBox->Location = System::Drawing::Point(49, 314);
			this->Hours_M_textBox->Margin = System::Windows::Forms::Padding(4);
			this->Hours_M_textBox->Name = L"Hours_M_textBox";
			this->Hours_M_textBox->Size = System::Drawing::Size(157, 19);
			this->Hours_M_textBox->TabIndex = 51;
			// 
			// Hours_M_label
			// 
			this->Hours_M_label->AutoSize = true;
			this->Hours_M_label->BackColor = System::Drawing::Color::Transparent;
			this->Hours_M_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_M_label->Location = System::Drawing::Point(46, 285);
			this->Hours_M_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Hours_M_label->Name = L"Hours_M_label";
			this->Hours_M_label->Size = System::Drawing::Size(60, 23);
			this->Hours_M_label->TabIndex = 49;
			this->Hours_M_label->Text = L"Hours";
			// 
			// Quota_M_textBox
			// 
			this->Quota_M_textBox->BackColor = System::Drawing::Color::White;
			this->Quota_M_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Quota_M_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quota_M_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Quota_M_textBox->Location = System::Drawing::Point(49, 238);
			this->Quota_M_textBox->Margin = System::Windows::Forms::Padding(4);
			this->Quota_M_textBox->Name = L"Quota_M_textBox";
			this->Quota_M_textBox->Size = System::Drawing::Size(157, 19);
			this->Quota_M_textBox->TabIndex = 52;
			// 
			// Quota_M_label
			// 
			this->Quota_M_label->AutoSize = true;
			this->Quota_M_label->BackColor = System::Drawing::Color::Transparent;
			this->Quota_M_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quota_M_label->Location = System::Drawing::Point(55, 195);
			this->Quota_M_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Quota_M_label->Name = L"Quota_M_label";
			this->Quota_M_label->Size = System::Drawing::Size(163, 23);
			this->Quota_M_label->TabIndex = 50;
			this->Quota_M_label->Text = L"Max 3 of students";
			// 
			// Name_M_textBox
			// 
			this->Name_M_textBox->BackColor = System::Drawing::Color::White;
			this->Name_M_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Name_M_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name_M_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Name_M_textBox->Location = System::Drawing::Point(47, 149);
			this->Name_M_textBox->Margin = System::Windows::Forms::Padding(4);
			this->Name_M_textBox->Name = L"Name_M_textBox";
			this->Name_M_textBox->Size = System::Drawing::Size(227, 19);
			this->Name_M_textBox->TabIndex = 48;
			// 
			// Name_M_label
			// 
			this->Name_M_label->AutoSize = true;
			this->Name_M_label->BackColor = System::Drawing::Color::Transparent;
			this->Name_M_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name_M_label->Location = System::Drawing::Point(45, 120);
			this->Name_M_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Name_M_label->Name = L"Name_M_label";
			this->Name_M_label->Size = System::Drawing::Size(60, 23);
			this->Name_M_label->TabIndex = 47;
			this->Name_M_label->Text = L"Name";
			// 
			// OK_M_B
			// 
			this->OK_M_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->OK_M_B->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->OK_M_B->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OK_M_B->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OK_M_B->Location = System::Drawing::Point(50, 389);
			this->OK_M_B->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OK_M_B->Name = L"OK_M_B";
			this->OK_M_B->Size = System::Drawing::Size(77, 32);
			this->OK_M_B->TabIndex = 55;
			this->OK_M_B->Text = L"OK";
			this->OK_M_B->UseVisualStyleBackColor = false;
			this->OK_M_B->Click += gcnew System::EventHandler(this, &Course_Modify::OK_M_B_Click);
			// 
			// addcourse_back_B
			// 
			this->addcourse_back_B->BackColor = System::Drawing::Color::Transparent;
			this->addcourse_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcourse_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addcourse_back_B.Image")));
			this->addcourse_back_B->Location = System::Drawing::Point(0, 0);
			this->addcourse_back_B->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addcourse_back_B->Name = L"addcourse_back_B";
			this->addcourse_back_B->Size = System::Drawing::Size(51, 57);
			this->addcourse_back_B->TabIndex = 56;
			this->addcourse_back_B->TabStop = false;
			this->addcourse_back_B->Click += gcnew System::EventHandler(this, &Course_Modify::addcourse_back_B_Click);
			// 
			// Course_Modify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(743, 518);
			this->Controls->Add(this->addcourse_back_B);
			this->Controls->Add(this->OK_M_B);
			this->Controls->Add(this->Hours_M_textBox);
			this->Controls->Add(this->Hours_M_label);
			this->Controls->Add(this->Quota_M_textBox);
			this->Controls->Add(this->Quota_M_label);
			this->Controls->Add(this->Name_M_textBox);
			this->Controls->Add(this->Name_M_label);
			this->Controls->Add(this->Course_modify_textBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Course_Modify";
			this->Text = L"Course_Modify";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OK_M_B_Click(System::Object^ sender, System::EventArgs^ e) {

		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(Name_M_textBox->Text);
		std::string no_stud_str = context.marshal_as<std::string>(Quota_M_textBox->Text);
		std::string hours_str = context.marshal_as<std::string>(Hours_M_textBox->Text);
		int max = std::stoi(no_stud_str);
		int hours = std::stoi(hours_str);
		Course course;
		course.set_hours(hours);
		course.set_max_num_of_students(max);
		course.set_name(name);
		admin->edit_course(course);
		this->Hide();
		back->Show();
	}

private: System::Void addcourse_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	back->Show();
}
};
}
