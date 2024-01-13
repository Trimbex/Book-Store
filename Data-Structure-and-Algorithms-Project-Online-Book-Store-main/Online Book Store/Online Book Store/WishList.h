#pragma once



#include <iostream>
#include "Book.h"
#include "DynamicArray.h"



class WishList {
private:
    List<Book> books;
    int size;

public:
    WishList();
    WishList(int initialCapacity);
    void addBookToWishList(Book newbook);
    void removeBookFromWishList(Book booktoremove);
    void print();
    // List<Book> getWishList();
};
