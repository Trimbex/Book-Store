#pragma once

#include <iostream>
#include <cassert>
#include <new>
#include <string>
using namespace std;

template <typename T>
class List {
public:
    List(int maxSize = 1024);

    ~List();

    List(const List& origList);

    const List& operator=(const List& rightHandSide);

    bool empty() const;

    void insert(T item, int pos);

    void erase(int pos);
    void erase(T item);

    void display(ostream& out) const;

    void push_back(T item);

    T get(int pos) const;
    T* begin() const;
    T* end() const;

private:
    int mySize;
    int myCapacity;
    T* myArray;
};

template <typename T>
ostream& operator<<(ostream& out, const List<T>& aList);


template <typename T>
List<T>::List(int maxSize) {
    mySize = 0;
    myCapacity = maxSize;
    myArray = new(nothrow) T[myCapacity];
    assert(myArray != nullptr);
}

template <typename T>
List<T>::~List() {
    delete[] myArray;
}

template <typename T>
List<T>::List(const List& origList) {
    mySize = origList.mySize;
    myCapacity = origList.myCapacity;
    myArray = new(nothrow) T[myCapacity];

    if (myArray != nullptr) {
        for (int i = 0; i < mySize; i++)
            myArray[i] = origList.myArray[i];
    }
    else {
        cerr << "Not enough memory to allocate for the list\n";
        exit(1);
    }
}

template <typename T>
const List<T>& List<T>::operator=(const List& rightHandSide) {

    if (this != &rightHandSide) {
        if (myCapacity != rightHandSide.myCapacity) {
            delete[] myArray;
            myCapacity = rightHandSide.myCapacity;
            myArray = new(nothrow) T[myCapacity];

            if (myArray == nullptr) {
                cerr << "Not enough memory to allocate for the list\n";
                exit(1);
            }
        }
        mySize = rightHandSide.mySize;
        for (int i = 0; i < mySize; i++)
            myArray[i] = rightHandSide.myArray[i];
    }
    return *this;
}

template <typename T>
bool List<T>::empty() const {
    return mySize == 0;
}

template <typename T>
void List<T>::display(std::ostream& out) const {
    for (int i = 0; i < mySize; i++)
        out << myArray[i] << "  ";
}

template <typename T>
ostream& operator<< (ostream& out, const List<T>& aList) {
    aList.display(out);
    return out;
}

template <typename T>
void List<T>::insert(T item, int pos) {
    if (mySize == myCapacity) {
        cerr << "*** No space for list element -- terminating "
            "execution ***\n";
        exit(1);
    }
    if (pos < 0 || pos > mySize) {
        cerr << "*** Illegal location to insert -- " << pos
            << ".  List unchanged. ***\n";
        return;
    }

    for (int i = mySize; i > pos; i--) {
        myArray[i] = myArray[i - 1];
    }

    myArray[pos] = item;
    mySize++;
}


template <typename T>
void List<T>::erase(int pos) {
    if (mySize == 0) {
        cerr << "*** List is empty ***\n";
        return;
    }
    if (pos < 0 || pos >= mySize) {
        cerr << "Illegal location to delete -- " << pos
            << ".  List unchanged. ***\n";
        return;
    }

    for (int i = pos; i < mySize; i++) {
        myArray[i] = myArray[i + 1];
    }

    mySize--;
}

template <typename T>
void List<T>::erase(T item) {
    if (mySize == 0) {
        cerr << "*** List is empty ***\n";
        return;
    }

    for (int i = 0; i < mySize; i++) {
        if (myArray[i] == item;)
        {
            erase(i);
            mySize--;
            return;
        }
    }
    cerr << "*** Item doesn't exist in the lis ***\n";

}


template <typename T>
void List<T>::push_back(T item) {
    insert(item, mySize);
}

template <typename T>
T List<T>::get(int pos) const {
    if (pos < 0 || pos >= mySize) {
        cerr << "*** Illegal location to get -- " << pos
            << ".  List unchanged. ***\n";
        exit(1);
    }
    return myArray[pos];
}

template <typename T>
T* List<T>::begin() const {
    return myArray;
}
template <typename T>
T* List<T>::end() const {
    return myArray + mySize;
}