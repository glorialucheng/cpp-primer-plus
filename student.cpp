#include <iostream>
#include "student.h"

int p = 123;
int q = 456;
extern const int count = 4;
void say_hello(int n) {
	for (int i = 0; i < n; ++i)
		std::cout << "hello!" << std::endl;
}

void say() {
	std::cout << "say p = " << &p << std::endl;
	std::cout << "say q = " << &q << std::endl;
	static int sa = 7;
	std::cout << "sa = " << sa << std::endl;
	sa++;
	std::cout << "after ++ sa = " << sa << std::endl;
	std::cout << "say &mypi = " << &mypi << std::endl;
	std::cout << "say &count = " << &count << std::endl;
}
