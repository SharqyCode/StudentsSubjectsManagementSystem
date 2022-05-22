#pragma once
#include<msclr/marshal_cppstd.h>
#include<string>
#include<queue>
#include"..\StudentSubjectsManagementSystem\Admin\Admin.h" 
namespace StudentSubjectsManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin_courseSearch
	/// </summary>
	public ref class Admin_courseSearch : public System::Windows::Forms::Form
	{
	public:
		Admin* admin;
	private: System::Windows::Forms::PictureBox^ search_back_B;
	public:
		Form^ back;
		Admin_courseSearch(Form ^ form , Admin * obj )
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
		~Admin_courseSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ course_id;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_courseSearch::typeid));
			this->course_id = (gcnew System::Windows::Forms::TextBox());
			this->search_back_B = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// course_id
			// 
			this->course_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->course_id->Location = System::Drawing::Point(483, 176);
			this->course_id->Margin = System::Windows::Forms::Padding(4);
			this->course_id->Name = L"course_id";
			this->course_id->Size = System::Drawing::Size(203, 15);
			this->course_id->TabIndex = 4;
			this->course_id->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Admin_courseSearch::search);
			// 
			// search_back_B
			// 
			this->search_back_B->BackColor = System::Drawing::Color::Transparent;
			this->search_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_back_B.Image")));
			this->search_back_B->Location = System::Drawing::Point(2, 0);
			this->search_back_B->Margin = System::Windows::Forms::Padding(4);
			this->search_back_B->Name = L"search_back_B";
			this->search_back_B->Size = System::Drawing::Size(63, 62);
			this->search_back_B->TabIndex = 5;
			this->search_back_B->TabStop = false;
			this->search_back_B->Click += gcnew System::EventHandler(this, &Admin_courseSearch::search_back_B_Click);
			// 
			// Admin_courseSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(744, 531);
			this->Controls->Add(this->search_back_B);
			this->Controls->Add(this->course_id);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Admin_courseSearch";
			this->Text = L"Admin_courseSearch";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_back_B))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void search(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string code_str= context.marshal_as<std::string>(course_id->Text);
		int code;
		std::unordered_map<int, Course> ::iterator it;
		Course course;
		for (it = admin->gd->courses.begin(); it != admin->gd->courses.end(); it++) {
			if (it->second.get_code() == code) {
				course = it->second;
				break;
			}
		}
		std::queue<Student > student  = admin->list_students_for_course(course);
		/*To do :
              now you have a queue with all the students enrolled in the course 
			  all you need to do is display their names 
			  step1: create a loop
			     in loop:
							step2 display the name of the top element
							step3 pop the top to move onto the next element
			 ex:
				std::cout << "Students in course: \n";
	for (int i = 0; i < studs_enrolled.size(); i++) {

		std::cout << studs_enrolled.front().get_name() << std::endl;
		studs_enrolled.pop();
	}

		*/
	}

	private: System::Void search_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		back->Show();
	}
};
}
