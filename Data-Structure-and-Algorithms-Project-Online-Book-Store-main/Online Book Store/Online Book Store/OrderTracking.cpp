#include "OrderTracking.h"
#include "BinaryTree.h"
#include "Catalog.h"
#include "User.h"
#include <iostream>

Order::Order() {
    orderID = "";
    orderDate = "";
    orderStatus = "";
    orderType = "";
    orderAddress = "";
    orderPayment = "";
}

Order::Order(string orderID, string orderDate, string orderStatus, string orderType, string orderAddress, string orderPayment) {
    this->orderID = orderID;
    this->orderDate = orderDate;
    this->orderStatus = orderStatus;
    this->orderType = orderType;
    this->orderAddress = orderAddress;
    this->orderPayment = orderPayment;
}

string Order::getOrderID() {
    return orderID;
}

string Order::getOrderDate() {
    return orderDate;
}

string Order::getOrderStatus() {
    return orderStatus;
}

string Order::getOrderType() {
    return orderType;
}

string Order::getOrderAddress() {
    return orderAddress;
}

string Order::getOrderPayment() {
    return orderPayment;
}

BinaryTree<Order> Order::getAllOrders() {
    return allOrders;
}

string Order::generateOrderID() {

    return "";
}
void Order::setOrderID(string orderID) {
    this->orderID = orderID;
}

void Order::setOrderDate(string orderDate) {
    this->orderDate = orderDate;
}

void Order::setOrderStatus(string orderStatus) {
    this->orderStatus = orderStatus;
}

void Order::setOrderType(string orderType) {
    this->orderType = orderType;
}

void Order::setOrderAddress(string orderAddress) {
    this->orderAddress = orderAddress;
}

void Order::setOrderPayment(string orderPayment) {
    this->orderPayment = orderPayment;
}

void Order::print() {
    cout << "Order ID: " << orderID << endl;
    cout << "Order Date: " << orderDate << endl;
    cout << "Order Status: " << orderStatus << endl;
    cout << "Order Type: " << orderType << endl;
    cout << "Order Address: " << orderAddress << endl;
    cout << "Order Payment: " << orderPayment << endl;


}
