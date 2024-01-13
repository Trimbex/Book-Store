#include "BookSystem.h"
#include <thread>

List<User> BookSystem::systemUsers;

void BookSystem::AvailabilityUpdate() {
	while (true)
	{
		for (int i = 0; i < size; i++)
		{

		}

		/*for (int i = 0; i < size; i++)
		{
			if(inventory.get(i).available)
				cout << "The Book: " << inventory.get(size).getTitle() << "is availibile";
			else
				cout << "The Book: " << inventory.get(size).getTitle() << "is not availibile";
		}
		std::this_thread::sleep_for(std::chrono::seconds(5));


	/*	if (bookadding)
		{
			bookadding = false;
			if (inventory.get(size).available)

				cout << "The Book: " << inventory.get(size).getTitle() << "is availibile";

			else {
				cout << "The Book: " << inventory.get(size).getTitle() << "is not availibile";

			}
		} */


	}
}
BookSystem::BookSystem() { size = 0; };

BookSystem::BookSystem(int inventorysize) : inventory(inventorysize), size(0), bookadding(false) {};

void BookSystem::addBook(Book newbook)
{
	//if(newbook.available)

	inventory.insert(newbook, size);
	size++;
	bookadding = true;
}

void BookSystem::removeBook(Book booktoremove)
{
	if (size == 0)
	{
		cerr << "*** Inventory is empty ***\n";
		return;
	}
	else for (int i = 0; i < size; i++)
	{
		if (booktoremove == inventory.get(i))
		{
			removingindex = i;
			inventory.erase(i);
			size--;

		}
	}
}

void BookSystem::search(const string& factor, const string& factorName)
{

}

void BookSystem::clear()
{
	if (size == 0)
	{
		cerr << "*** Inventory is empty ***\n";
		return;
	}
	else
	{
		for (int i = size - 1; i >= 0; i--)
			inventory.erase(i);
		size = 0;
		cout << "*** Inventory cleared ***\n";
	}
}

void BookSystem::viewInventory()
{
	cout << inventory;
}

void BookSystem::addUser(const User& user) {
	for each (User u in systemUsers)
	{
		if (user == u) {
			return;
		}
	}
	systemUsers.push_back(user);
}


User* BookSystem::getUser(string username, string password) {
	for (User user : systemUsers) {
		if (user.getName() == username && user.getPassword() == password) {
			return &user;
		}
	}
	return nullptr; 
}

bool BookSystem::authentication(string username, string password)
{
	for each (User u in systemUsers){
		if(u.getUsername() == username) {
			if (u.getPassword() == password) {
				return true;
			}
		}
	}
	return false;
}




