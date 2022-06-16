#include "mystring.h"
#include <iostream>
#include "string.h"

int Mystring::strings = 0;

Mystring::Mystring() {
	this->str = new char[10];
	strcpy(this->str, "<default>");
	strings++;
	std::cout << "default string created, " << strings << "strings exit." << std::endl;
}

Mystring::Mystring(const char* c) {
	length = strlen(c);
	this->str =  new char[length+1];
	strcpy(this->str, c);
	strings++;
	std::cout << "string \""<< this->str << "\" created by constructor, " << strings << "strings exit." << std::endl;
}

Mystring::~Mystring() {
	std::cout << this->str << " --> delete. ";
	strings--;
	std::cout << strings << " strings left. " << std::endl;
	delete [] str;
}

Mystring::Mystring(const Mystring &s) {
	strings++;
	this->length = s.length;
	this->str = new char[this->length + 1];
	strcpy(this->str, s.str);
	std::cout << "string \""<< this->str << "\" created by copy, " << strings << "strings exit." << std::endl;
}

Mystring & Mystring::operator=(const Mystring &s) {
	if (&s == this) return *this;
	delete [] this->str;
	this->length = s.length;
	this->str = new char[this->length + 1];
	strcpy(this->str, s.str);
	return *this;
}

std::ostream & operator<<(std::ostream &os, const Mystring &str) {
	os << str.str << std::endl;
	return os;
}