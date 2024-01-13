#pragma once
#include <iostream>
#include "Book.h"
#include "DynamicArray.h"
#include "Catalog.h"
#include "BinaryTree.h"
using namespace std;

template <typename T>
class Search {
private:
	static List<Book> foundBooks;
public:
	static List<Book> searchByTitle(Catalog catalog, string title);
	static List<Book> searchByAuthor(Catalog catalog, string author);
	static List<Book> searchByPublisher(Catalog catalog, string publisher);
	static List<Book> searchByISBN(Catalog catalog, int isbn);
	static List<Book> searchByCategory(Catalog catalog, string category);
	static List<Book> searchByAvailability(Catalog catalog, bool available);
	static List<Book> searchByQuantity(Catalog catalog, int quantity);
	void clearSearch();
	void print();
};

template<typename T>
inline List<Book> Search<T>::searchByTitle(Catalog catalog, string title)
{

	return foundBooks;
}
