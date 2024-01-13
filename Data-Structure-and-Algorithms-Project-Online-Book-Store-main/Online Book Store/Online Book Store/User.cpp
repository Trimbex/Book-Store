#include "User.h"
#include <iostream>

User::User() {
    name = "";
    email = "";
    password = "";
    address = "";
    phoneNumber = "";
}

User::User(string username, string name, string email, string password, string address, string phoneNumber) {
    this->username = username;
    this->name = name;
    this->email = email;
    this->password = password;
    this->address = address;
    this->phoneNumber = phoneNumber;
}

string User::getUsername() {
    return username;
}
string User::getName() {
    return name;
}

string User::getEmail() {
    return email;
}

string User::getPassword() {
    return password;
}

string User::getAddress() {
    return address;
}

string User::getPhoneNumber() {
    return phoneNumber;
}

bool User::getIsAdmin() {
    if (isAdmin) {
        return true;
    }
    else {
        return false;
    }
}

void User::setUsername(string username)
{
    this->username = username;
}

void User::setName(string name) {
    this->name = name;
}

void User::setEmail(string email) {
    this->email = email;
}

void User::setPassword(string password) {
    this->password = password;
}

void User::setAddress(string address) {
    this->address = address;
}

void User::setPhoneNumber(string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void User::setAdmin(bool check) {
    this->isAdmin = check;
}


void User::addOrder(Order order) {
    orders.push_back(order);
}

bool User::operator==(const User& user) const {
    return(name == user.name && email == user.email && password == user.password && address == user.address
        && phoneNumber == user.phoneNumber && isAdmin == user.isAdmin);
}




string User::print() {
    return   "\nUsername: " + username + "\nName: " + name + "\nEmail: " + email + "\nPassword: " + password +
        "\nAddress: " + address + "\nPhone Number: " + phoneNumber;
    /*cout << "Order History:" << endl;
    std::ostream& out = std::cout;

    cout << orders; */
    // orders.display(cout);  

    /*
        cout << "User Details:" << endl;
    cout << "Username: " << username << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Password: " << password << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    */

}
