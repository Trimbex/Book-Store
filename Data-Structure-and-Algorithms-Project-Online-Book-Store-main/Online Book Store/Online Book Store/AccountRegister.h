#pragma once

#include "User.h"
#include "BookSystem.h"
#include <msclr/marshal_cppstd.h>

namespace OnlineBookStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for AccountRegister
	/// </summary>
	public ref class AccountRegister : public System::Windows::Forms::Form
	{
	public:
		AccountRegister(void)
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
		~AccountRegister()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ signup_FirstName_textbox;
	private: System::Windows::Forms::TextBox^ signup_LastName_textbox;
	private: System::Windows::Forms::TextBox^ signup_UserName_textbox;
	private: System::Windows::Forms::TextBox^ signup_PhoneNumber_textbox;
	private: System::Windows::Forms::TextBox^ signup_Email_textbox;
	private: System::Windows::Forms::TextBox^ signup_Address_TextBox;
	private: System::Windows::Forms::TextBox^ signup_Password_textbox;
	private: System::Windows::Forms::TextBox^ signup_ConfirmPassword_textbox;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ signup_Signup_Button;
	private: System::Windows::Forms::Button^ signup_Signin_Button;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AccountRegister::typeid));
			this->signup_Address_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->signup_Signin_Button = (gcnew System::Windows::Forms::Button());
			this->signup_Signup_Button = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->signup_PhoneNumber_textbox = (gcnew System::Windows::Forms::TextBox());
			this->signup_ConfirmPassword_textbox = (gcnew System::Windows::Forms::TextBox());
			this->signup_Password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->signup_Email_textbox = (gcnew System::Windows::Forms::TextBox());
			this->signup_UserName_textbox = (gcnew System::Windows::Forms::TextBox());
			this->signup_LastName_textbox = (gcnew System::Windows::Forms::TextBox());
			this->signup_FirstName_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// signup_Address_TextBox
			// 
			this->signup_Address_TextBox->BackColor = System::Drawing::Color::LightYellow;
			this->signup_Address_TextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->signup_Address_TextBox->Location = System::Drawing::Point(21, 497);
			this->signup_Address_TextBox->Name = L"signup_Address_TextBox";
			this->signup_Address_TextBox->Size = System::Drawing::Size(622, 43);
			this->signup_Address_TextBox->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(14, 441);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 42);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Address:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(329, 759);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(356, 32);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"I agree to terms and conditions";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// signup_Signin_Button
			// 
			this->signup_Signin_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signup_Signin_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signup_Signin_Button->Location = System::Drawing::Point(28, 817);
			this->signup_Signin_Button->Name = L"signup_Signin_Button";
			this->signup_Signin_Button->Size = System::Drawing::Size(271, 53);
			this->signup_Signin_Button->TabIndex = 11;
			this->signup_Signin_Button->Text = L"Sign in";
			this->signup_Signin_Button->UseVisualStyleBackColor = true;
			this->signup_Signin_Button->Click += gcnew System::EventHandler(this, &AccountRegister::signup_Signin_Button_Click);
			// 
			// signup_Signup_Button
			// 
			this->signup_Signup_Button->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->signup_Signup_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signup_Signup_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signup_Signup_Button->Location = System::Drawing::Point(28, 744);
			this->signup_Signup_Button->Name = L"signup_Signup_Button";
			this->signup_Signup_Button->Size = System::Drawing::Size(271, 53);
			this->signup_Signup_Button->TabIndex = 10;
			this->signup_Signup_Button->Text = L"Sign up";
			this->signup_Signup_Button->UseVisualStyleBackColor = false;
			this->signup_Signup_Button->Click += gcnew System::EventHandler(this, &AccountRegister::signup_Signup_Button_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(358, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(261, 42);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Phone Number:";
			// 
			// signup_PhoneNumber_textbox
			// 
			this->signup_PhoneNumber_textbox->BackColor = System::Drawing::Color::LightYellow;
			this->signup_PhoneNumber_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->signup_PhoneNumber_textbox->Location = System::Drawing::Point(365, 235);
			this->signup_PhoneNumber_textbox->Name = L"signup_PhoneNumber_textbox";
			this->signup_PhoneNumber_textbox->Size = System::Drawing::Size(278, 43);
			this->signup_PhoneNumber_textbox->TabIndex = 4;
			// 
			// signup_ConfirmPassword_textbox
			// 
			this->signup_ConfirmPassword_textbox->BackColor = System::Drawing::Color::LightYellow;
			this->signup_ConfirmPassword_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->signup_ConfirmPassword_textbox->Location = System::Drawing::Point(372, 620);
			this->signup_ConfirmPassword_textbox->Name = L"signup_ConfirmPassword_textbox";
			this->signup_ConfirmPassword_textbox->Size = System::Drawing::Size(278, 43);
			this->signup_ConfirmPassword_textbox->TabIndex = 8;
			this->signup_ConfirmPassword_textbox->UseSystemPasswordChar = true;
			// 
			// signup_Password_textbox
			// 
			this->signup_Password_textbox->BackColor = System::Drawing::Color::LightYellow;
			this->signup_Password_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->signup_Password_textbox->Location = System::Drawing::Point(21, 620);
			this->signup_Password_textbox->Name = L"signup_Password_textbox";
			this->signup_Password_textbox->Size = System::Drawing::Size(278, 43);
			this->signup_Password_textbox->TabIndex = 7;
			this->signup_Password_textbox->UseSystemPasswordChar = true;
			// 
			// signup_Email_textbox
			// 
			this->signup_Email_textbox->BackColor = System::Drawing::Color::LightYellow;
			this->signup_Email_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->signup_Email_textbox->Location = System::Drawing::Point(21, 369);
			this->signup_Email_textbox->Name = L"signup_Email_textbox";
			this->signup_Email_textbox->Size = System::Drawing::Size(622, 43);
			this->signup_Email_textbox->TabIndex = 5;
			// 
			// signup_UserName_textbox
			// 
			this->signup_UserName_textbox->BackColor = System::Drawing::Color::LightYellow;
			this->signup_UserName_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->signup_UserName_textbox->Location = System::Drawing::Point(21, 235);
			this->signup_UserName_textbox->Name = L"signup_UserName_textbox";
			this->signup_UserName_textbox->Size = System::Drawing::Size(278, 43);
			this->signup_UserName_textbox->TabIndex = 3;
			// 
			// signup_LastName_textbox
			// 
			this->signup_LastName_textbox->BackColor = System::Drawing::Color::LightYellow;
			this->signup_LastName_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->signup_LastName_textbox->Location = System::Drawing::Point(365, 96);
			this->signup_LastName_textbox->Name = L"signup_LastName_textbox";
			this->signup_LastName_textbox->Size = System::Drawing::Size(278, 43);
			this->signup_LastName_textbox->TabIndex = 2;
			// 
			// signup_FirstName_textbox
			// 
			this->signup_FirstName_textbox->BackColor = System::Drawing::Color::LightYellow;
			this->signup_FirstName_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->signup_FirstName_textbox->Location = System::Drawing::Point(21, 96);
			this->signup_FirstName_textbox->Name = L"signup_FirstName_textbox";
			this->signup_FirstName_textbox->Size = System::Drawing::Size(278, 43);
			this->signup_FirstName_textbox->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(365, 563);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(309, 42);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Confirm Password:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(21, 563);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 42);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Password:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(14, 310);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 42);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(14, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(185, 42);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(358, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 42);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Last Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(14, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 42);
			this->label1->TabIndex = 19;
			this->label1->Text = L"First Name:";
			// 
			// AccountRegister
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(698, 904);
			this->Controls->Add(this->signup_Address_TextBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->signup_Signin_Button);
			this->Controls->Add(this->signup_Signup_Button);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->signup_PhoneNumber_textbox);
			this->Controls->Add(this->signup_ConfirmPassword_textbox);
			this->Controls->Add(this->signup_Password_textbox);
			this->Controls->Add(this->signup_Email_textbox);
			this->Controls->Add(this->signup_UserName_textbox);
			this->Controls->Add(this->signup_LastName_textbox);
			this->Controls->Add(this->signup_FirstName_textbox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AccountRegister";
			this->Text = L"AccountRegister";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void signup_Signin_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		
	}
	private: System::Void signup_Signup_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (signup_Password_textbox->Text == signup_ConfirmPassword_textbox->Text && signup_FirstName_textbox->Text != ""
			&& signup_Password_textbox->Text != "" && signup_Email_textbox->Text != "" && signup_Address_TextBox->Text != "" 
			&& signup_PhoneNumber_textbox->Text != "") {



			User newUser(
				msclr::interop::marshal_as<std::string>(signup_UserName_textbox->Text),
				msclr::interop::marshal_as<std::string>(signup_FirstName_textbox->Text + signup_LastName_textbox->Text),
				msclr::interop::marshal_as<std::string>(signup_Email_textbox->Text),
				msclr::interop::marshal_as<std::string>(signup_Password_textbox->Text),
				msclr::interop::marshal_as<std::string>(signup_Address_TextBox->Text),
				msclr::interop::marshal_as<std::string>(signup_PhoneNumber_textbox->Text));
			BookSystem BookSys;
			BookSys.addUser(newUser);
			System::String^ userString = gcnew System::String(newUser.print().c_str());
			MessageBox::Show("Added User" + userString, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			if (signup_Password_textbox->Text != signup_ConfirmPassword_textbox->Text) {
				MessageBox::Show("Please make sure confirmed password matches password.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (signup_FirstName_textbox->Text == "") {
				MessageBox::Show("Please enter your first name.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (signup_Password_textbox->Text == "") {
				MessageBox::Show("please enter a password.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (signup_Email_textbox->Text == "") {
				MessageBox::Show("Please enter your email.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (signup_Address_TextBox->Text == "") {
				MessageBox::Show("Please enter your address.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else if (signup_PhoneNumber_textbox->Text != "") {
				MessageBox::Show("Please enter your PhoneNumber.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			
		}
	}
};
}


