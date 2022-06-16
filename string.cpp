#include "string.h"
#include <cstring>

int String::num_strings = 0;

String::String() {
	this->len = 1;
	this->str = new char[1];
	(this->str)[0] = 0;
	num_strings++;
}

String::String(const char *s) {
	this->len = strlen(s);
	this->str = new char[this->len + 1];
	strcpy(this->str, s);
	num_strings++;
}

String::String(const String &s) {
	this->len = s.len;
	this->str = new char[this->len + 1];
	strcpy(this->str, s.str);
	num_strings++;
}

String::~String() {
	num_strings--;
	delete [] this->str;
}

String & String::operator=(const String &s) {
	if(this == &s) 
		return *this;
	delete [] this->str;
	this->len = s.len;
	this->str = new char[this->len + 1];
	strcpy(this->str, s.str);
	return *this;
}

String & String::operator=(const char *s) {
	delete [] this->str;
	this->len = strlen(s);
	this->str = new char[this->len + 1];
	strcpy(this->str, s);
	return *this;
}

char & String::operator[](int i) {
	return (this->str)[i];
}

const char & String::operator[](int i) const {
	return (this->str)[i];
}
	
bool operator<(const String &s1, const String &s2) {
	return strcmp(s1.str, s2.str) < 0;
}

bool operator>(const String &s1, const String &s2) {
	return s2 < s1;
}

bool operator==(const String &s1, const String &s2) {
	return strcmp(s1.str, s2.str) == 0;
}

ostream & operator<<(ostream &os, const String &s) {
	os << s.str;
	return os;
}

istream & operator>>(istream &is, String &s) {
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if(is) 
		s = temp;  // use overload =
	
	while(is && is.get() != '\n') 
		continue;
	return is;
}

int String::HowMany() {
	return num_strings;
}