#include <iostream>
#include "stock.h"

void Stock::acquire(const std::string &company, long n, double price) {
	this->company = company;
	shares = n;
	share_value = price;
	set_total();
}

void Stock::buy(long n, double price) {
	shares+=n;
	share_value = price;
	set_total();
}

void Stock::sell(long n, double price) {
	shares-=n;
	share_value = price;
	set_total();
}

void Stock::update(double price) {
	share_value = price;
}

void Stock::show() {
	std::cout << "company name: " << company 
	          << ", shares: " << shares
	          << ", share value: " << share_value
	          << ", total value: " << total_value << std::endl;
}