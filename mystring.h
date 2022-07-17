#ifndef MYSTRING
#define MYSTRING
#include <iostream>

class Mystring {
private:
	char* str;
	int length;
	static int strings;

public:
	Mystring();
	Mystring(const char* str);
	~Mystring();
	Mystring(const Mystring &s);
	Mystring & operator=(const Mystring &s);

friend std::ostream & operator<<(std::ostream &os, const Mystring &str);
	
};
#endif