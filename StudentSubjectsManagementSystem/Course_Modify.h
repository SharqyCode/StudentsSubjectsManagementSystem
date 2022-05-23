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
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolTip^ modidy_course_toolTip;
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
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->modidy_course_toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Course_modify_textBox
			// 
			this->Course_modify_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Course_modify_textBox->Location = System::Drawing::Point(363, 141);
			this->Course_modify_textBox->Name = L"Course_modify_textBox";
			this->Course_modify_textBox->Size = System::Drawing::Size(149, 13);
			this->Course_modify_textBox->TabIndex = 4;
			this->Course_modify_textBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Course_Modify::Course_modify_textBox_MouseMove);
			// 
			// Hours_M_textBox
			// 
			this->Hours_M_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Hours_M_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Hours_M_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_M_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Hours_M_textBox->Location = System::Drawing::Point(46, 268);
			this->Hours_M_textBox->Name = L"Hours_M_textBox";
			this->Hours_M_textBox->Size = System::Drawing::Size(170, 15);
			this->Hours_M_textBox->TabIndex = 51;
			this->Hours_M_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Course_Modify::Hours_M_textBox_KeyDown);
			// 
			// Hours_M_label
			// 
			this->Hours_M_label->AutoSize = true;
			this->Hours_M_label->BackColor = System::Drawing::Color::Transparent;
			this->Hours_M_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hours_M_label->Location = System::Drawing::Point(46, 245);
			this->Hours_M_label->Name = L"Hours_M_label";
			this->Hours_M_label->Size = System::Drawing::Size(48, 17);
			this->Hours_M_label->TabIndex = 49;
			this->Hours_M_label->Text = L"Hours";
			// 
			// Quota_M_textBox
			// 
			this->Quota_M_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Quota_M_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Quota_M_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quota_M_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Quota_M_textBox->Location = System::Drawing::Point(46, 206);
			this->Quota_M_textBox->Name = L"Quota_M_textBox";
			this->Quota_M_textBox->Size = System::Drawing::Size(170, 15);
			this->Quota_M_textBox->TabIndex = 52;
			this->Quota_M_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Course_Modify::Quota_M_textBox_KeyDown);
			// 
			// Quota_M_label
			// 
			this->Quota_M_label->AutoSize = true;
			this->Quota_M_label->BackColor = System::Drawing::Color::Transparent;
			this->Quota_M_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Quota_M_label->Location = System::Drawing::Point(46, 171);
			this->Quota_M_label->Name = L"Quota_M_label";
			this->Quota_M_label->Size = System::Drawing::Size(49, 17);
			this->Quota_M_label->TabIndex = 50;
			this->Quota_M_label->Text = L"Quota";
			// 
			// Name_M_textBox
			// 
			this->Name_M_textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->Name_M_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Name_M_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name_M_textBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->Name_M_textBox->Location = System::Drawing::Point(46, 134);
			this->Name_M_textBox->Name = L"Name_M_textBox";
			this->Name_M_textBox->Size = System::Drawing::Size(170, 15);
			this->Name_M_textBox->TabIndex = 48;
			this->Name_M_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Course_Modify::Name_M_textBox_KeyDown);
			// 
			// Name_M_label
			// 
			this->Name_M_label->AutoSize = true;
			this->Name_M_label->BackColor = System::Drawing::Color::Transparent;
			this->Name_M_label->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name_M_label->Location = System::Drawing::Point(46, 111);
			this->Name_M_label->Name = L"Name_M_label";
			this->Name_M_label->Size = System::Drawing::Size(47, 17);
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
			this->OK_M_B->Location = System::Drawing::Point(142, 301);
			this->OK_M_B->Margin = System::Windows::Forms::Padding(2);
			this->OK_M_B->Name = L"OK_M_B";
			this->OK_M_B->Size = System::Drawing::Size(73, 32);
			this->OK_M_B->TabIndex = 55;
			this->OK_M_B->Text = L"Modify";
			this->OK_M_B->UseVisualStyleBackColor = false;
			this->OK_M_B->Click += gcnew System::EventHandler(this, &Course_Modify::OK_M_B_Click);
			// 
			// addcourse_back_B
			// 
			this->addcourse_back_B->BackColor = System::Drawing::Color::Transparent;
			this->addcourse_back_B->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addcourse_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addcourse_back_B.Image")));
			this->addcourse_back_B->Location = System::Drawing::Point(0, 0);
			this->addcourse_back_B->Margin = System::Windows::Forms::Padding(2);
			this->addcourse_back_B->Name = L"addcourse_back_B";
			this->addcourse_back_B->Size = System::Drawing::Size(38, 46);
			this->addcourse_back_B->TabIndex = 56;
			this->addcourse_back_B->TabStop = false;
			this->addcourse_back_B->Click += gcnew System::EventHandler(this, &Course_Modify::addcourse_back_B_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Controls->Add(this->label3);
			this->panel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel4->Location = System::Drawing::Point(46, 149);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(170, 2);
			this->panel4->TabIndex = 57;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel5->Location = System::Drawing::Point(1, 20);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(170, 2);
			this->panel5->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox3->Location = System::Drawing::Point(1, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(170, 15);
			this->textBox3->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-1, -19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Name";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel1->Location = System::Drawing::Point(46, 222);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(170, 2);
			this->panel1->TabIndex = 58;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel2->Location = System::Drawing::Point(1, 20);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(170, 2);
			this->panel2->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox1->Location = System::Drawing::Point(1, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 15);
			this->textBox1->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-1, -19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Name";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->label2);
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel3->Location = System::Drawing::Point(46, 284);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(170, 2);
			this->panel3->TabIndex = 59;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->panel6->Location = System::Drawing::Point(1, 20);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(170, 2);
			this->panel6->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox2->Location = System::Drawing::Point(1, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 15);
			this->textBox2->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-1, -19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Name";
			// 
			// Course_Modify
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->addcourse_back_B);
			this->Controls->Add(this->OK_M_B);
			this->Controls->Add(this->Hours_M_textBox);
			this->Controls->Add(this->Hours_M_label);
			this->Controls->Add(this->Quota_M_textBox);
			this->Controls->Add(this->Quota_M_label);
			this->Controls->Add(this->Name_M_textBox);
			this->Controls->Add(this->Name_M_label);
			this->Controls->Add(this->Course_modify_textBox);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Course_Modify";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Course_Modify";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addcourse_back_B))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OK_M_B_Click(System::Object^ sender, System::EventArgs^ e) {

		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(Name_M_textBox->Text);
		std::string no_stud_str = context.marshal_as<std::string>(Quota_M_textBox->Text);
		std::string hours_str = context.marshal_as<std::string>(Hours_M_textBox->Text);
		if (name == "" || no_stud_str == "" || hours_str == "") {
			MessageBox::Show("Complete the course's data!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
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
private: System::Void Course_modify_textBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	modidy_course_toolTip->SetToolTip(Course_modify_textBox,"Enter the Course Code.");
}
private: System::Void Name_M_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


	if (e->KeyValue == (int)Keys::Enter) {
		Quota_M_textBox->Focus();
	}
}
private: System::Void Quota_M_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


	if (e->KeyValue == (int)Keys::Enter) {
		Hours_M_textBox->Focus();
	}
}
private: System::Void Hours_M_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


	if (e->KeyValue == (int)Keys::Enter) {
		OK_M_B->PerformClick();
	}
}
};
}
