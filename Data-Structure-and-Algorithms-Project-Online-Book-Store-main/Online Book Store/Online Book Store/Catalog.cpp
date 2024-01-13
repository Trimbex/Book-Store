

#include <string>
#include "Book.h"
#include "BinaryTree.h"
#include "Catalog.h"



using namespace std;

BinaryTree<Book> Catalog::catalog;

Catalog::Catalog()
{
}

Catalog::Catalog(BinNode<Book>* rootNode) {
	this->rootNode = rootNode;
}



void Catalog::addBook(Book book)
{
	catalog.insert(book.getISBN(), book);
}

void Catalog::removeBook(Book book)
{
	catalog.deleteNode(book.getISBN());
}



void Catalog::print() {
	//catalog.inOrderTraversal(std::ostream & out, catalog.root);
	std::ostream& out = std::cout;
	catalog.printNode(out, catalog.root);

}


