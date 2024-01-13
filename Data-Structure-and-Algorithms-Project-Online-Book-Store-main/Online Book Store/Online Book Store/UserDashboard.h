#pragma once
#include "PaymentForm.h"
#include "TermsAndConditions.h"

namespace OnlineBookStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for UserDashboard
	/// </summary>
	public ref class UserDashboard : public System::Windows::Forms::Form
	{
	public:

		UserDashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		UserDashboard(String^ username, String^ password) {
			userdata = username;
			passdata = password;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		String^ userdata;
		String^ passdata;
	private: System::Windows::Forms::Button^ userdashboard_Nav_button;
	private: System::Windows::Forms::Splitter^ userDashbaord_splitter;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;

	private: System::Windows::Forms::TreeView^ treeView1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserDashboard::typeid));
			System::Windows::Forms::TreeNode^ treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"Browse The Catalog"));
			System::Windows::Forms::TreeNode^ treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"Shopping Cart"));
			System::Windows::Forms::TreeNode^ treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"Orders"));
			System::Windows::Forms::TreeNode^ treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"Wish List"));
			System::Windows::Forms::TreeNode^ treeNode19 = (gcnew System::Windows::Forms::TreeNode(L"ISBN Search"));
			System::Windows::Forms::TreeNode^ treeNode20 = (gcnew System::Windows::Forms::TreeNode(L"Normal Search"));
			System::Windows::Forms::TreeNode^ treeNode21 = (gcnew System::Windows::Forms::TreeNode(L"Search", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode19,
					treeNode20
			}));
			this->userdashboard_Nav_button = (gcnew System::Windows::Forms::Button());
			this->userDashbaord_splitter = (gcnew System::Windows::Forms::Splitter());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// userdashboard_Nav_button
			// 
			this->userdashboard_Nav_button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"userdashboard_Nav_button.BackgroundImage")));
			this->userdashboard_Nav_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->userdashboard_Nav_button->Location = System::Drawing::Point(298, 5);
			this->userdashboard_Nav_button->Name = L"userdashboard_Nav_button";
			this->userdashboard_Nav_button->Size = System::Drawing::Size(35, 35);
			this->userdashboard_Nav_button->TabIndex = 0;
			this->userdashboard_Nav_button->Text = L".";
			this->userdashboard_Nav_button->UseVisualStyleBackColor = true;
			this->userdashboard_Nav_button->Click += gcnew System::EventHandler(this, &UserDashboard::userdashboard_Nav_button_Click);
			// 
			// userDashbaord_splitter
			// 
			this->userDashbaord_splitter->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->userDashbaord_splitter->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->userDashbaord_splitter->Location = System::Drawing::Point(0, 0);
			this->userDashbaord_splitter->MaximumSize = System::Drawing::Size(300, 0);
			this->userDashbaord_splitter->Name = L"userDashbaord_splitter";
			this->userDashbaord_splitter->Size = System::Drawing::Size(300, 861);
			this->userDashbaord_splitter->TabIndex = 1;
			this->userDashbaord_splitter->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &UserDashboard::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &UserDashboard::timer2_Tick);
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::Color::Khaki;
			this->treeView1->Location = System::Drawing::Point(12, 12);
			this->treeView1->Name = L"treeView1";
			treeNode15->Name = L"Node0";
			treeNode15->Text = L"Browse The Catalog";
			treeNode16->Name = L"Node1";
			treeNode16->Text = L"Shopping Cart";
			treeNode17->Name = L"Node2";
			treeNode17->Text = L"Orders";
			treeNode18->Name = L"Node3";
			treeNode18->Text = L"Wish List";
			treeNode19->Name = L"Node5";
			treeNode19->Text = L"ISBN Search";
			treeNode20->Name = L"Node8";
			treeNode20->Text = L"Normal Search";
			treeNode21->Name = L"Node4";
			treeNode21->Text = L"Search";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(5) {
				treeNode15, treeNode16, treeNode17,
					treeNode18, treeNode21
			});
			this->treeView1->Size = System::Drawing::Size(277, 1000);
			this->treeView1->TabIndex = 3;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &UserDashboard::treeView1_AfterSelect);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl1->ItemSize = System::Drawing::Size(1, 0);
			this->tabControl1->Location = System::Drawing::Point(339, 28);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1207, 821);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->listView1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage1->Location = System::Drawing::Point(4, 32);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1199, 785);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Browse";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(428, 404);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 37);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Book ISBN:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(428, 305);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 37);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Book Genre:";
			this->label3->Click += gcnew System::EventHandler(this, &UserDashboard::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(428, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 37);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Book Type:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(428, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Book Name:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(435, 668);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(584, 74);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add to shopping list";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listView1->BackColor = System::Drawing::Color::Khaki;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(6, 6);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(345, 773);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 32);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1125, 748);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Shopping Cart";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(396, 674);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(276, 68);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Proceed to payment";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UserDashboard::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 32);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1125, 748);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Orders";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 32);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1125, 748);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Wish List";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 32);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1125, 748);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"ISBN Search";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 32);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(1125, 748);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Normal Search";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// UserDashboard
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1558, 861);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->userdashboard_Nav_button);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->userDashbaord_splitter);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"UserDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserDashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		int count = 0;

	private: System::Void userdashboard_Nav_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (userdashboard_Nav_button->Text == ".") {
			timer1->Start();
			userdashboard_Nav_button->Text = "_";
		}
		else {
			timer2->Start();
			userdashboard_Nav_button->Text = ".";
		}
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count < 10) {
			userDashbaord_splitter->Width -= 30;
			userdashboard_Nav_button->Left -= 30;
			treeView1->Left -= 30;
			count++;
		}
		else {
			timer1->Stop();
		}

	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (count > 0) {
			userDashbaord_splitter->Width += 30;
			userdashboard_Nav_button->Left += 30;
			treeView1->Left += 30;
			count--;
		}
		else {
			timer2->Stop();
		}
	}
private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	if (e->Node->Text == "Browse The Catalog") {
		tabControl1->SelectedTab = tabPage1;
	}
	else if (e->Node->Text == "Shopping Cart") {
		tabControl1->SelectedTab = tabPage2;
	}
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	PaymentForm^ paymentform = gcnew PaymentForm;
	this->Hide();
	paymentform->ShowDialog();
	this->Show();
}
};
}
