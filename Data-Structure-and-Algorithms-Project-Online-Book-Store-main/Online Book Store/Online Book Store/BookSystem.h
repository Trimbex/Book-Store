#pragma once
#include <iostream>
#include "Book.h"
#include "DynamicArray.h"
#include "BinaryTree.h"
#include "User.h"


class BookSystem
{
private:
	List<Book> inventory;
	BinaryTree<Book> inventorytree;
	static List<User> systemUsers;
	int size;
	bool bookadding;
	bool bookremoving;
	int removingindex;
public:
	BookSystem();
	BookSystem(int inventorysize);
	void addBook(Book newbook);
	void removeBook(Book booktoremove);
	void search(const string& factor, const string& factorName);
	void clear();
	void viewInventory();
	void AvailabilityUpdate();
	static void addUser(const User& user); // Make it static
	static User* getUser(const string username, string password); // Make it static

	static bool authentication(string username, string password);

};