#pragma once
#include <iostream>
#include "Book.h"
#include "DynamicArray.h"
#include "RegularExpression.h"
#include <regex>


template <typename T>
class BinNode {
public:
	T data;
	string key;
	BinNode<T>* left;
	BinNode<T>* right;
	BinNode();
	BinNode(string key);
	BinNode(string key, T item);


	friend ostream& operator<<(ostream& out, const BinNode<T>& node);
	BinNode<T>* operator=(const BinNode<T>* other);
	BinNode<T>& operator=(const BinNode<T>& other);
	bool operator!() const;


};

template <typename T>
ostream& operator<<(ostream& out, BinNode<T>* node);

template <typename T>
class BinaryTree {
public:
	BinNode<T>* root;
	BinaryTree();


	void insert(string key, T& data);
	void deleteNode(string key);
	BinNode<T>* findMin(BinNode<T>* node) const;
	BinNode<T>* findMax(BinNode<T>* node) const;


	void print(std::ostream& out);

	BinNode<T>* search(const string key) const;
	List<Book> searchBy(const string& factor, const string& factorName, BinNode<T>* startnode) const;
	List<Book> searchByAuthor(BinNode<T>* node, const string& factorName) const;
	List<Book> searchByTitle(BinNode<T>* node, const string& factorName) const;
	List<Book> searchByPublisher(BinNode<T>* node, const string& factorName) const;
	List<Book> searchByCategory(BinNode<T>* node, const string& factorName) const;
	List<Book> searchByAvailability(BinNode<T>* node, const bool& factorName) const;
	List<Book> searchByBookType(BinNode<T>* node, const string& factorName) const;


	//private:

	void printNode(std::ostream& out, BinNode<T>* node);
};



/*
BinNode<Book>* searchBy(std::string factor, std::string factorName) const;
	BinNode<T>* searchByAuthor(const std::string& author, BinNode<T>* node) const;
		// BinNode<T> searchByPrice(BinNode<T>* node, const string& factorName) const;
	// BinNode<T> searchByQuantity(BinNode<T>* node, const string& factorName) const;
*/

using namespace std;


template <typename T>
BinNode<T>::BinNode() :
	data(0),
	key(0),
	left(nullptr),
	right(nullptr)
{}


template <typename T>
BinNode<T>::BinNode(string key, T item) :
	data(item),
	key(key),
	left(nullptr),
	right(nullptr)
{}

template <typename T>BinNode<T>::BinNode(string key) :
	data(0),
	key(key),
	left(nullptr),
	right(nullptr)
{}



template <typename T>
BinaryTree<T>::BinaryTree() :
	root(nullptr)
{}



template <typename T>
BinNode<T>* BinaryTree<T>::findMin(BinNode<T>* node) const {
	while (node->left)
	{
		node = node->left;
	}
	return node;
}



template <typename T>
BinNode<T>* BinaryTree<T>::findMax(BinNode<T>* node) const {
	while (node->right)
	{
		node = node->right;
	}
	return node;
}

template <typename T>
BinNode<T>* BinaryTree<T>::search(const string key) const
{

	BinNode<T>* current = root;
	while (current)
	{
		if (key < current->key)
		{
			current = current->left;
		}
		else if (key > current->key)
		{
			current = current->right;
		}
		else
		{

			return current;
		}

	}

	return nullptr;
}


template <typename T>
void BinaryTree<T>::insert(string key, T& data) {

	BinNode<T>* newNode = new BinNode<T>(key, data);
	//std::cout << "Inserting node with key: " << key << std::endl;
	if (!root)
	{
		root = newNode;
		return;
	}

	BinNode<T>* current = root;
	while (true)
	{
		if (key < current->key)
		{
			if (current->left == nullptr)
			{
				current->left = newNode;
				break;
			}
			current = current->left;
		}
		else
		{
			if (current->right == nullptr)
			{
				current->right = newNode;
				break;
			}
			current = current->right;
		}

	}
}
template <typename T>
void BinaryTree<T>::deleteNode(string key)
{
	BinNode<T>* current = root;
	BinNode<T>* parent = nullptr;
	while (current && current->key != key)
	{
		parent = current;
		if (key < current->key)
		{
			current = current->left;
		}
		else if (key > current->key)
		{
			current = current->right;
		}
	}

	if (!current)
	{
		return;
	}

	//CASE: Parent Node has no children
	if (!current->left && !current->right)
	{
		if (!parent)
		{
			root = nullptr;

		}
		else if (parent->left == current)
		{
			parent->left = nullptr;
		}
		else
		{
			parent->right = nullptr;
		}
		delete current;
		return;
	}
	//CASE: Parent Node has one child.
	//SUBCASE: RIGHT CHILD
	if (!current->left)
	{
		BinNode<T>* child = current->right;
		if (!parent)
		{
			root = child;
		}
		else if (parent->left == current)
		{
			parent->left = child;
		}
		else
		{
			parent->right = child;
		}
		delete current;
		return;
	}
	//SUBCASE: LEFT CHILD
	else
	{
		BinNode<T>* child = current->left;
		if (!parent)
		{
			root = child;
		}
		else if (parent->left == current)
		{
			parent->left = child;
		}
		else
		{
			parent->right = child;
		}

	}
	delete current;
	return;


	//CASE: PARENT NODE HAS TWO CHILDREN

	if (current->right && current->left)
	{
		BinNode<T>* successor = findMin(current->right);
		deleteNode(successor->key);
		current->key = successor->key;
	}

}



template <typename T>
void BinaryTree<T>::print(std::ostream& out) {
	printNode(out, root);
}

template <typename T> //Inorder traversel of the tree
void BinaryTree<T>::printNode(std::ostream& out, BinNode<T>* node) {
	if (node) {
		printNode(out, node->left);
		out << "Key: " << node->key << endl << "data: " << node->data << endl;
		printNode(out, node->right);
	}
}

template <typename T>
List<Book> BinaryTree<T>::searchBy(const string& factor, const string& factorName, BinNode<T>* startnode) const {
	string theSearchISBN = 0;
	cout << "searchby called" << endl;
	int switchcase = 0;
	if (factor == "author") {
		switchcase = 1;
	}
	else if (factor == "title") {
		switchcase = 2;
	}
	else if (factor == "publisher") {
		switchcase = 3;
	}
	else if (factor == "category") {
		switchcase = 4;
	}
	else if (factor == "availability") {
		switchcase = 5;
	}
	else if (factor == "booktype") {
		switchcase = 6;
	}
	else if (factor == "isbn") {
		switchcase = 7;
	}
	else {
		switchcase = 0;
	}

	switch (switchcase) {
	case 1:
		cout << "searching by " << factorName << endl;
		return searchByAuthor(startnode, factorName);
	case 2:
		cout << "searching by " << factorName << endl;
		return searchByTitle(startnode, factorName);
	case 3:
		cout << "searching by " << factorName << endl;
		return searchByPublisher(startnode, factorName);
	case 4:
		cout << "searching by " << factorName << endl;
		return searchByCategory(startnode, factorName);
	case 5:
		cout << "searching by " << factorName << endl;
		return searchByAvailability(startnode, true);
	case 6:
		cout << "searching by " << factorName << endl;
		return searchByBookType(startnode, factorName);
	case 7:
		cout << "searching by " << factorName << endl;

		for (char c : factorName) {
			if (isdigit(c)) {
				int digit = c - '0';
				//theSearchISBN = theSearchISBN * 10 + digit;
			}
		}
		return search(theSearchISBN);
	default:
		cout << "invalid search" << endl;
		return nullptr;
	}
}

template <typename T>
List<Book> BinaryTree<T>::searchByAuthor(BinNode<T>* node, const string& factorName) const {
	RegularExpression regularexpression;
	List<Book> books;
	if (!node) {
		return books;
	}

	BinNode<T>* result = searchByAuthor(node->left, factorName);

	if (regularexpression.matchFound(node->data.getAuthor(), factorName)) {
		books.push_back(node->data);
	}

	if (!result) {
		result = searchByAuthor(node->right, factorName);
	}

	return nullptr;
}

template <typename T>
List<Book> BinaryTree<T>::searchByTitle(BinNode<T>* node, const string& factorName) const {
	RegularExpression regularexpression;
	List<Book> books;
	if (!node) {
		return books;
	}

	BinNode<T>* result = searchByTitle(node->left, factorName);

	if (regularexpression.matchFound(node->data.getTitle(),factorName)) {
		books.push_back(node->data);
	}

	if (!result) {
		result = searchByTitle(node->right, factorName);
	}

	return nullptr;
}

template <typename T>
List<Book> BinaryTree<T>::searchByPublisher(BinNode<T>* node, const string& factorName) const {
	RegularExpression regularexpression;
	List<Book> books;
	if (!node) {
		return books;
	}

	BinNode<T>* result = searchByPublisher(node->left, factorName);

	if (regularexpression.matchFound(node->data.getPublisher(), factorName)) {
		books.push_back(node->data);
	}

	if (!result) {
		result = searchByPublisher(node->right, factorName);
	}

	return nullptr;
}

template <typename T>
List<Book> BinaryTree<T>::searchByCategory(BinNode<T>* node, const string& factorName) const {
	RegularExpression regularexpression;
	List<Book> books;
	if (!node) {
		return books;
	}

	BinNode<T>* result = searchByCategory(node->left, factorName);
	if (regularexpression.matchFound(node->data.getCategory() ,factorName)) {
		books.push_back(node->data);
	}

	if (!result) {
		result = searchByCategory(node->right, factorName);
	}

	return nullptr;
}

template <typename T>
List<Book> BinaryTree<T>::searchByAvailability(BinNode<T>* node, const bool& factorName) const {
	RegularExpression regularexpression;
	List<Book> books;
	if (!node) {
		return books;
	}

	BinNode<T>* result = searchByAvailability(node->left, factorName);

	if (regularexpression.matchFound(node->data.getAvailable(), factorName)) {
		books.push_back(node->data);
	}

	if (!result) {
		result = searchByAvailability(node->right, factorName);
	}

	return nullptr;
}

template <typename T>
List<Book> BinaryTree<T>::searchByBookType(BinNode<T>* node, const string& factorName) const {
	RegularExpression regularexpression;
	List<Book> books;
	if (!node) {
		return books;
	}

	BinNode<T>* result = searchByBookType(node->left, factorName);

	if (regularexpression.matchFound(node->data.getBookType(), factorName)) {
		books.push_back(node->data);
	}

	if (!result) {
		result = searchByBookType(node->right, factorName);
	}

	return nullptr;
}

template <typename T>
ostream& operator<<(ostream& out, const BinNode<T>& node) {
	out << "Key: " << node.key << endl << "Data: " << node.data << endl;
	return out;
}

template <typename T>
BinNode<T>* BinNode<T>::operator=(const BinNode<T>* other) {
	if (this != &other) {
		key = other.key;
		data = other.data;
		left = new BinNode<T>(*other.left);
		right = new BinNode<T>(*other.right);
	}
	return *this;
}
template <typename T>
BinNode<T>& BinNode<T>::operator=(const BinNode<T>& other) {
	if (this != &other) {
		key = other.key;
		data = other.data;
		left = new BinNode<T>(*other.left);
		right = new BinNode<T>(*other.right);
	}
	return *this;
}

template <typename T>
bool BinNode<T>::operator!() const {
	return (this == nullptr);
}
