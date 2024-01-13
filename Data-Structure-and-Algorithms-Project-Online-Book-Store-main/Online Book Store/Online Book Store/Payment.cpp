#include <iostream>
#include "Payment.h"
#include <ctime>

CreditCard::CreditCard() : cardname(""), cardnumber(0), CCV(0), expdate(0), amount(0) {}

CreditCard::CreditCard(string cardname, int cardnumber, int CCV, int expdate, int amount)
    : cardname(cardname), cardnumber(cardnumber), CCV(CCV), expdate(expdate), amount(amount) {}


void CreditCard::setCardName(const string& name) {
    cardname = name;
}

void CreditCard::setCardNumber(int number) {
    cardnumber = number;
}

void CreditCard::setCCV(int ccv) {
    CCV = ccv;
}

void CreditCard::setExpDate(int date) {
    expdate = date;
}

void CreditCard::setAmount(int amount) {
    this->amount = amount;
}

void CreditCard::setAddress(string address)
{
    this->address = address;
}

string CreditCard::getCardName() const {
    return cardname;
}

int CreditCard::getCardNumber() const {
    return cardnumber;
}

int CreditCard::getCCV() const {
    return CCV;
}

int CreditCard::getExpDate() const {
    return expdate;
}

int CreditCard::getAmount() const {
    return amount;
}

string CreditCard::getAddress()
{
    return address;
}

double CreditCard::PaymentProcess(ShoppingList &list)
{
    if (amount <= list.totalamount())
    {
      return (amount = amount - list.totalamount());
    }
    else
    {
        cout << "Your balance is not enough" << endl;
        return 0;
    }
    
}

void receipt::setPaymentMethod(string paymentMethod) {
    this->paymentMethod = paymentMethod;
}

void receipt::setDate(string date) {
    this->date = date;
}

void receipt::setTime(string time) {
    this->time = time;
}

void receipt::setEmail(string email) {
    this->email = email;
}

void receipt::setName(string name) {
    this->name = name;
}

void receipt::setAddress(string address) {
    this->address = address;
}


void receipt::setVAT(string VAT) {
    this->VAT = VAT;
}

string receipt::getPaymentMethod() {
    return paymentMethod;
}

string receipt::getDate() {
    return date;
}

string receipt::getTime() {
    return time;
}

string receipt::getEmail() {
    return email;
}

string receipt::getName() {
    return name;
}

string receipt::getAddress() {
    return address;
}


string receipt::getVAT() {
    return VAT;
}

