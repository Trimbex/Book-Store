#pragma once
#include "ShoppingList.h"
#include "Payment.h"
#include <string>
#include <msclr/marshal_cppstd.h>

namespace OnlineBookStore {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PaymentForm
	/// </summary>
	/// 
	/// 
	
	public ref class PaymentForm : public System::Windows::Forms::Form
	{
	private:
	
	public:

		
		PaymentForm(void)
		{
			InitializeComponent();
			this->Load += gcnew System::EventHandler(this, &PaymentForm::displaytotalprice);
			button1->Click += gcnew System::EventHandler(this, &PaymentForm::Pay);
			//
			//TODO: Add the constructor code here
			//
		}
		/*PaymentForm(ShoppingList* list) // Pass pointer in the constructor
		{
			InitializeComponent();
			shoppingList = list;
			this->Load += gcnew System::EventHandler(this, &PaymentForm::displaytotalprice);
			// ... rest of the constructor
		} */
	//	PaymentForm(ShoppingList list);
		
			
			
			
			
			//
			//TODO: Add the constructor code here
			//
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PaymentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ CARDNAME;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ qty;

	private: System::Windows::Forms::Label^ totalprice;

	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ info;



	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CARDNAME = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->qty = (gcnew System::Windows::Forms::Label());
			this->totalprice = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->info = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Checkout";
			this->label1->Click += gcnew System::EventHandler(this, &PaymentForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Card Name";
			this->label2->Click += gcnew System::EventHandler(this, &PaymentForm::label2_Click);
			// 
			// CARDNAME
			// 
			this->CARDNAME->Location = System::Drawing::Point(45, 129);
			this->CARDNAME->Name = L"CARDNAME";
			this->CARDNAME->Size = System::Drawing::Size(271, 20);
			this->CARDNAME->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(40, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Card Number";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(45, 190);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(271, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(194, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"CCV";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(256, 223);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(60, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(41, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 25);
			this->label5->TabIndex = 7;
			this->label5->Text = L"ExpDate";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(134, 221);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(21, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(155, 219);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 25);
			this->label6->TabIndex = 9;
			this->label6->Text = L"/";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(169, 221);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(21, 20);
			this->textBox5->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(45, 300);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(271, 20);
			this->textBox6->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(40, 259);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(205, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"First and Last Name";
			this->label7->Click += gcnew System::EventHandler(this, &PaymentForm::label7_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(45, 373);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(271, 20);
			this->textBox7->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(41, 333);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 25);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Address";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(611, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(118, 25);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Your Order";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(45, 412);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(272, 46);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Pay";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// qty
			// 
			this->qty->AutoSize = true;
			this->qty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qty->Location = System::Drawing::Point(497, 101);
			this->qty->Name = L"qty";
			this->qty->Size = System::Drawing::Size(137, 20);
			this->qty->TabIndex = 19;
			this->qty->Text = L"Quantity of books:";
			// 
			// totalprice
			// 
			this->totalprice->AutoSize = true;
			this->totalprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalprice->Location = System::Drawing::Point(497, 130);
			this->totalprice->Name = L"totalprice";
			this->totalprice->Size = System::Drawing::Size(86, 20);
			this->totalprice->TabIndex = 20;
			this->totalprice->Text = L"Total price:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(497, 162);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(138, 20);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Order Information:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(589, 130);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 20);
			this->label12->TabIndex = 23;
			// 
			// info
			// 
			this->info->AutoSize = true;
			this->info->Location = System::Drawing::Point(500, 192);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(35, 13);
			this->info->TabIndex = 24;
			this->info->Text = L"label8";
			// 
			// PaymentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(910, 482);
			this->Controls->Add(this->info);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->totalprice);
			this->Controls->Add(this->qty);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->CARDNAME);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"PaymentForm";
			this->Text = L"PaymentForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void displaytotalprice(System::Object^ sender, System::EventArgs^ e)
	{
		ShoppingList shoppinglist;
		Book book1;
		shoppinglist.addBookToShoppingList(book1); //test
		double totalPrice = shoppinglist.totalamount();
		std::string formattedPrice = "Total Price: " + std::to_string(totalPrice) + " USD";  // Adjust currency as needed
		totalprice->Text = gcnew System::String(formattedPrice.c_str());
		qty->Text = "Number of Books: " + shoppinglist.getsize();
		info->Text = gcnew String(shoppinglist.printstring().c_str());
	}
    private: System::Void Pay(System::Object^ sender, System::EventArgs^ e)
		   {
		CreditCard card;

		String^ enteredcardname = CARDNAME->Text;
		String^ enteredcardnumber = textBox2->Text;
		String^ enteredexp = textBox4->Text +  "/" + textBox5->Text;
		String^ enteredCCV = textBox3->Text;
		String^ enterednames = textBox6->Text;
		String^ enteredAddress = textBox7->Text;

		std::string cardName = msclr::interop::marshal_as<std::string>(enteredcardname);
		int cardNumber = std::stoi(msclr::interop::marshal_as<std::string>(enteredcardnumber));
		int expdate = std::stoi(msclr::interop::marshal_as<std::string>(enteredexp));
		int CCV = std::stoi(msclr::interop::marshal_as<std::string>(enteredCCV));
		string names = msclr::interop::marshal_as<std::string>(enterednames);
		string Address = msclr::interop::marshal_as<std::string>(enteredAddress);
		
		
		
		card.setCardName(cardName);
		card.setCardNumber(cardNumber);
		card.setExpDate(expdate);
		card.setCCV(CCV);
		card.setAddress(Address);



		   }
		   
    private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
