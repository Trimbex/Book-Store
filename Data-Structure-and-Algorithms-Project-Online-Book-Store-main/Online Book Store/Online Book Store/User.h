#pragma once

#include <iostream>
#include "DynamicArray.h"
#include "OrderTracking.h"
using namespace std;

class User {
private:
	string username;
	string name;
	string email;
	string password;
	string address;
	string phoneNumber;
	bool isAdmin;
	List<Order> orders;
public:

	User();
	User(string username, string name, string email, string password, string address, string phoneNumber);
	string getUsername();
	string getName();
	string getEmail();
	string getPassword();
	string getAddress();
	string getPhoneNumber();
	bool getIsAdmin();
	void setUsername(string username);
	void setName(string name);
	void setEmail(string email);
	void setPassword(string password);
	void setAddress(string address);
	void setPhoneNumber(string phoneNumber);
	void addOrder(Order order);
	void setAdmin(bool check);
	string print();
	bool operator==(const User& user) const;


};