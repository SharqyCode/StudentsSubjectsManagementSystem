#pragma once
#include<msclr/marshal_cppstd.h>
#include<string>
#include<vector>
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
	private: System::Windows::Forms::ListView^ resultStudentSearch;
	private: System::Windows::Forms::ToolTip^ toolTip;





	public:
		Form^ back;
		Admin_courseSearch(Form^ form, Admin* obj)
		{
			admin = obj;
			back = form;
			InitializeComponent();
			resultStudentSearch->View = View::Details;

			resultStudentSearch->Columns->Add("Name:", 180);
			resultStudentSearch->Columns->Add("Id:");
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
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_courseSearch::typeid));
			this->course_id = (gcnew System::Windows::Forms::TextBox());
			this->search_back_B = (gcnew System::Windows::Forms::PictureBox());
			this->resultStudentSearch = (gcnew System::Windows::Forms::ListView());
			this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_back_B))->BeginInit();
			this->SuspendLayout();
			// 
			// course_id
			// 
			this->course_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->course_id->Location = System::Drawing::Point(362, 143);
			this->course_id->Name = L"course_id";
			this->course_id->Size = System::Drawing::Size(152, 13);
			this->course_id->TabIndex = 4;
			this->course_id->TextChanged += gcnew System::EventHandler(this, &Admin_courseSearch::course_id_TextChanged);
			this->course_id->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Admin_courseSearch::search);
			this->course_id->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Admin_courseSearch::course_id_MouseMove);
			// 
			// search_back_B
			// 
			this->search_back_B->BackColor = System::Drawing::Color::Transparent;
			this->search_back_B->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_back_B.Image")));
			this->search_back_B->Location = System::Drawing::Point(2, 0);
			this->search_back_B->Name = L"search_back_B";
			this->search_back_B->Size = System::Drawing::Size(47, 50);
			this->search_back_B->TabIndex = 5;
			this->search_back_B->TabStop = false;
			this->search_back_B->Click += gcnew System::EventHandler(this, &Admin_courseSearch::search_back_B_Click);
			// 
			// resultStudentSearch
			// 
			this->resultStudentSearch->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->resultStudentSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(194)));
			this->resultStudentSearch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultStudentSearch->GridLines = true;
			this->resultStudentSearch->HideSelection = false;
			this->resultStudentSearch->Location = System::Drawing::Point(31, 87);
			this->resultStudentSearch->Margin = System::Windows::Forms::Padding(2);
			this->resultStudentSearch->Name = L"resultStudentSearch";
			this->resultStudentSearch->Size = System::Drawing::Size(299, 253);
			this->resultStudentSearch->TabIndex = 8;
			this->resultStudentSearch->UseCompatibleStateImageBehavior = false;
			this->resultStudentSearch->View = System::Windows::Forms::View::Details;
			// 
			// Admin_courseSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(557, 419);
			this->Controls->Add(this->resultStudentSearch);
			this->Controls->Add(this->search_back_B);
			this->Controls->Add(this->course_id);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Admin_courseSearch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin_courseSearch";
			this->Load += gcnew System::EventHandler(this, &Admin_courseSearch::Admin_courseSearch_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_back_B))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void search(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	}

	private: System::Void search_back_B_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		back->Show();
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void Admin_courseSearch_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void course_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;
	std::string input =context.marshal_as<std::string>(course_id->Text);

	if (input == "") {
		return;
	}
	resultStudentSearch->Items->Clear();
	int code = std::stoi(input);
	//resultStudentSearch->Items->Clear();


	/*for (auto courseItem : admin->gd->courses) {

		auto course = courseItem.second;
		if (course.get_name().rfind(input, 0) == 0) {

			auto fullNameStr = gcnew System::String(stud.get_name().c_str());

			std::string coursesStr = "";
			for (auto course : stud.get_finished_courses())
				coursesStr += "  " + course.get_name();
			std::string coursesStr2 = "";
			for (auto course : stud.get_courses_in_progress())
				coursesStr2 += "  " + course.get_name();

			auto courses = gcnew System::String(coursesStr.c_str());
			auto courses2 = gcnew System::String(coursesStr2.c_str());
			auto arr = gcnew array<String^>(3);
			arr[0] = fullNameStr;
			arr[1] = courses;
			arr[2] = courses2;
			resultStudentSearch->Items->Add(gcnew ListViewItem(arr));
		}
	}*/

	std::string nameStr = "";
	std::string idStr = "";
	std:: queue<Student> studs_q = admin->list_students_for_course(admin->gd->courses[code]);
	int size = studs_q.size() ;
	for (int i = 0; i < size ; i++) {
		nameStr += "  " + studs_q.front().get_name();
		idStr += "  " + studs_q.front().get_id();
		studs_q.pop();
	}

	auto name= gcnew System::String(nameStr.c_str());
	auto id = gcnew System::String(idStr.c_str());
	auto arr = gcnew array<String^>(2);
	arr[0] = name;
	arr[1] = id;
	resultStudentSearch->Items->Add(gcnew ListViewItem(arr));
}
private: System::Void course_id_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	toolTip->SetToolTip(course_id,"Enter Course Code to list Registered Students");
}
};
}