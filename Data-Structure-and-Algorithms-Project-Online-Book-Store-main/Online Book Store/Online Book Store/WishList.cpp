#include "WishList.h"

WishList::WishList() {
};
WishList::WishList(int initialCapacity) : books(initialCapacity), size(0) {
}

void WishList::addBookToWishList(Book newbook)
{
	books.insert(newbook, size);
	size++;

};

void WishList::removeBookFromWishList(Book booktoremove)
{

	if (size == 0)
	{
		cerr << "*** Wishlist is empty ***\n";
		return;
	}
	else for (int i = 0; i < size; i++)
	{
		if (booktoremove == books.get(i))
		{
			books.erase(i);
			size--;

		}
	}
}

void WishList::print()
{
	if (size != 0)
		cout << books;
	else
		cout << "*** Wishlist is empty ***\n";
}