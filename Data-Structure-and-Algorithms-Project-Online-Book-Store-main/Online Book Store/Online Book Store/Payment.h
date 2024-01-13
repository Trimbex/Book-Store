#pragma once

#include <iostream>
#include "User.h"
#include "ShoppingList.h"
#include "DynamicArray.h"

class CreditCard {
private:
    User user;
    ShoppingList shoppinglist;
	string cardname;
	int cardnumber;
	int CCV;
	int expdate;
	int amount;
	string address;

public:
	CreditCard();
	CreditCard(string cardname, int cardnumber,int CCV,int expdate,int amount);
    
    void setCardName(const string& name);
    void setCardNumber(int number);
    void setCCV(int ccv);
    void setExpDate(int date);
    void setAmount(int amount);
	void setAddress(string address);
	

    string getCardName() const;
    int getCardNumber() const;
    int getCCV() const;
    int getExpDate() const;
    int getAmount() const;
	string getAddress();
    double PaymentProcess(ShoppingList& list);

};

class receipt 
{
private:
    string paymentMethod;
    string date;
    string time;
    string email;
    string name;
    string address;
    string totaAmountPaid;
    string VAT;

public:
	void setPaymentMethod(string paymentMethod);
	void setDate(string date);
	void setTime(string time);
	void setEmail(string email);
	void setName(string name);
	void setAddress(string address);
	void setBookType(string bookType);
	void setTotalAmountPaid(string totalAmountPaid);
	void setVAT(string VAT);
	string getPaymentMethod();
	string getDate();
	string getTime();
	string getEmail();
	string getName();
	string getAddress();
	string getBookType();
	string getTotalAmountPaid();
	string getVAT();

};