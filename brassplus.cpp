#include "brass.h"
#include <string>
#include <iostream>

Brassplus::Brassplus(std::string name, int balance, double rate) : Brass::Brass(name, balance) {
	std::cout << "create a brassplus! \n";
	this->rate = rate;
}
Brassplus::Brassplus(Brass &brass, double rate) : Brass::Brass(brass) {
	std::cout << "create a brassplus! \n";
	this->rate = rate;
}
Brassplus::~Brassplus() {
	std::cout << "delete a brassplus! \n";
}

void Brassplus::show() {
	std::cout << "My name is " << this->get_name() << ", balance = " << this->get_balance() << ", and rate = " << this->rate << "\n";
}
