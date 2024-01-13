#pragma once

#include "AccountRegister.h"
#include "BookSystem.h"
#include "UserDashboard.h"
#include "TermsAndConditions.h"
#include <msclr/marshal_cppstd.h>


namespace OnlineBookStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for LandingPage
	/// </summary>
	public ref class LandingPage : public System::Windows::Forms::Form
	{
	public:
		LandingPage(void)
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
		~LandingPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ termsCheckBox;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ passtextBox;
	private: System::Windows::Forms::Button^ mainForm_Signup_Button;
	private: System::Windows::Forms::Button^ mainForm_Signin_Button;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ userTextBox;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LandingPage::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->termsCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->passtextBox = (gcnew System::Windows::Forms::TextBox());
			this->mainForm_Signup_Button = (gcnew System::Windows::Forms::Button());
			this->mainForm_Signin_Button = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->userTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(52, 571);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(160, 20);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Don\'t have an account\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 10));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(191, 410);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 25);
			this->label4->TabIndex = 22;
			this->label4->Text = L"terms and conditions";
			this->label4->Click += gcnew System::EventHandler(this, &LandingPage::label4_Click);
			// 
			// termsCheckBox
			// 
			this->termsCheckBox->AutoSize = true;
			this->termsCheckBox->BackColor = System::Drawing::Color::Transparent;
			this->termsCheckBox->Checked = true;
			this->termsCheckBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->termsCheckBox->Font = (gcnew System::Drawing::Font(L"Impact", 10));
			this->termsCheckBox->Location = System::Drawing::Point(56, 409);
			this->termsCheckBox->Name = L"termsCheckBox";
			this->termsCheckBox->Size = System::Drawing::Size(149, 29);
			this->termsCheckBox->TabIndex = 21;
			this->termsCheckBox->Text = L"I agree to the ";
			this->termsCheckBox->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(56, 386);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(287, 5);
			this->panel2->TabIndex = 20;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(56, 254);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(287, 5);
			this->panel1->TabIndex = 19;
			// 
			// passtextBox
			// 
			this->passtextBox->BackColor = System::Drawing::Color::White;
			this->passtextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passtextBox->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->passtextBox->Location = System::Drawing::Point(56, 350);
			this->passtextBox->Name = L"passtextBox";
			this->passtextBox->Size = System::Drawing::Size(287, 30);
			this->passtextBox->TabIndex = 18;
			this->passtextBox->UseSystemPasswordChar = true;
			// 
			// mainForm_Signup_Button
			// 
			this->mainForm_Signup_Button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->mainForm_Signup_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mainForm_Signup_Button->Location = System::Drawing::Point(218, 565);
			this->mainForm_Signup_Button->Name = L"mainForm_Signup_Button";
			this->mainForm_Signup_Button->Size = System::Drawing::Size(125, 29);
			this->mainForm_Signup_Button->TabIndex = 17;
			this->mainForm_Signup_Button->Text = L"Sign Up";
			this->mainForm_Signup_Button->UseVisualStyleBackColor = false;
			this->mainForm_Signup_Button->Click += gcnew System::EventHandler(this, &LandingPage::mainForm_Signup_Button_Click);
			// 
			// mainForm_Signin_Button
			// 
			this->mainForm_Signin_Button->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->mainForm_Signin_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mainForm_Signin_Button->Location = System::Drawing::Point(56, 472);
			this->mainForm_Signin_Button->Name = L"mainForm_Signin_Button";
			this->mainForm_Signin_Button->Size = System::Drawing::Size(287, 48);
			this->mainForm_Signin_Button->TabIndex = 16;
			this->mainForm_Signin_Button->Text = L"Sign In";
			this->mainForm_Signin_Button->UseVisualStyleBackColor = false;
			this->mainForm_Signin_Button->Click += gcnew System::EventHandler(this, &LandingPage::mainForm_Signin_Button_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->label3->Location = System::Drawing::Point(51, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 29);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->label2->Location = System::Drawing::Point(51, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 29);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Username";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 24));
			this->label1->Location = System::Drawing::Point(46, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 60);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Sign In";
			// 
			// userTextBox
			// 
			this->userTextBox->BackColor = System::Drawing::Color::White;
			this->userTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->userTextBox->Font = (gcnew System::Drawing::Font(L"Impact", 12));
			this->userTextBox->Location = System::Drawing::Point(56, 218);
			this->userTextBox->Name = L"userTextBox";
			this->userTextBox->Size = System::Drawing::Size(287, 30);
			this->userTextBox->TabIndex = 12;
			// 
			// LandingPage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1258, 664);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->termsCheckBox);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->passtextBox);
			this->Controls->Add(this->mainForm_Signup_Button);
			this->Controls->Add(this->mainForm_Signin_Button);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->userTextBox);
			this->Font = (gcnew System::Drawing::Font(L"Impact", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"LandingPage";
			this->Text = L"LandingPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainForm_Signup_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		AccountRegister^ accountForm = gcnew AccountRegister();
		this->Hide();
		accountForm->ShowDialog();
		this->Show();

	}
	private: System::Void mainForm_Signin_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string usernameText = msclr::interop::marshal_as<std::string>(userTextBox->Text);
		std::string passwordText = msclr::interop::marshal_as<std::string>(passtextBox->Text);
		BookSystem booksys;
		if (booksys.authentication(usernameText, passwordText)) {
			MessageBox::Show("Signed in as: " + userTextBox->Text, "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			UserDashboard^ userDashboard = gcnew UserDashboard;
			this->Hide();
			userDashboard->ShowDialog();
			this->Close();
		}
		else {
			MessageBox::Show("Wrong Username/Password", "Signin failed", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}	
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	TermsAndConditions^ termsForm = gcnew TermsAndConditions;
	termsForm->ShowDialog();

}
};
}
