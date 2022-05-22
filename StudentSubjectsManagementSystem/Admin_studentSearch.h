#pragma once
#include<msclr/marshal_cppstd.h>;
#include<string>;
#include"..\StudentSubjectsManagementSystem\\Admin\Admin.h";
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin_studentSearch
	/// </summary>
	public ref class Admin_studentSearch : public System::Windows::Forms::Form
	{
	public:
		Form^ search;
		Admin* admin;
		Admin_studentSearch(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Admin_studentSearch(Form^ form , Admin * obj)
		{
			search = form;
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
		~Admin_studentSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ search_textBox;
	protected:
	private: System::Windows::Forms::PictureBox^ search_back_B;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_studentSearch::typeid));
			this->search_textBox = (gcnew System::Windows::Forms::TextBox());
			this->search_back_B = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// search_textBox
			// 
			this->search_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->search_textBox->Location = System::Drawing::Point(417, 160);
			this->search_textBox->Margin = System::Windows::Forms::Padding(4);
			this->search_textBox->Name = L"search_textBox";
			this->search_textBox->Size = System::Drawing::Size(182, 15);
			this->search_textBox->TabIndex = 0;
			this->search_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Admin_studentSearch::search_textBox_KeyDown);
			// 
			// search_back_B
			// 
			this->search_back_B->BackColor = System::Drawing::Color::Transparent;
			this->search_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_back_B.Image")));
			this->search_back_B->Location = System::Drawing::Point(0, -1);
			this->search_back_B->Margin = System::Windows::Forms::Padding(4);
			this->search_back_B->Name = L"search_back_B";
			this->search_back_B->Size = System::Drawing::Size(63, 62);
			this->search_back_B->TabIndex = 1;
			this->search_back_B->TabStop = false;
			this->search_back_B->Click += gcnew System::EventHandler(this, &Admin_studentSearch::search_back_B_Click);
			// 
			// Admin_studentSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(653, 473);
			this->Controls->Add(this->search_back_B);
			this->Controls->Add(this->search_textBox);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Admin_studentSearch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin_studentSearch";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_back_B))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void search_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		search->Show();
		
	}

	private: System::Void search_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string id  = context.marshal_as<std::string>(search_textBox->Text);
		std::unordered_map<std::string, Student>  ::iterator it;
		Student student;
		for (it = admin->gd->students.begin(); it != admin->gd->students.end(); it++) {
			if (it->second.get_id() == id) {
				student = it->second;
				break;
			}
		}

		/*To do :
		    now you have object student from which you can get the finshed courses and course in proggress
			keep in mind both are vectors of courses:
			student.finished_courses;
			student.courses_in_progress;
	        all you have to do is display them
		
		*/
	}
};
}
