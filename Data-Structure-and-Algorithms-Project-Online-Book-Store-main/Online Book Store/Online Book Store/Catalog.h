#pragma once

using namespace std;
#include <string>
#include "Book.h"
#include "BinaryTree.h"

class Catalog {
private:
	static BinaryTree<Book> catalog;
	int size = 0;
	BinNode<Book>* rootNode;

public:
	Catalog();
	Catalog(BinNode<Book>* rootNode);
	void addBook(Book book);
	void removeBook(Book book);
	void print();
};
