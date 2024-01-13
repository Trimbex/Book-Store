#pragma once
#include "BinaryTree.h"
#include <string>
using namespace std;

class Order {
private:
	BinaryTree<Order> allOrders;
	string orderID;
	string orderDate;
	string orderStatus;
	string orderType;
	string orderAddress;
	string orderPayment;
public:
	Order();
	Order(string orderID, string orderDate, string orderStatus, string orderType, string orderAddress, string orderPayment);
	string getOrderID();
	string getOrderDate();
	string getOrderStatus();
	string getOrderType();
	string getOrderAddress();
	string getOrderPayment();
	string generateOrderID();
	BinaryTree<Order> getAllOrders();
	void setOrderID(string orderID);
	void setOrderDate(string orderDate);
	void setOrderStatus(string orderStatus);
	void setOrderType(string orderType);
	void setOrderAddress(string orderAddress);
	void setOrderPayment(string orderPayment);
	void print();
};