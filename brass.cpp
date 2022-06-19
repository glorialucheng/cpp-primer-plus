#include "brass.h"
#include <string>
#include <iostream>

Brass::Brass(std::string name, int balance) {
	std::cout << "create a brass! \n";
	this->name = name;
	this->balance = balance;
}
Brass::~Brass() {
	std::cout << "delete a brass! \n";
}
void Brass::show() {
	std::cout << "My name is " << this->name << ", balance = " << this->balance << "\n";
}
