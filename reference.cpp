#include <iostream>

const int& bigger(const int &a, const int &b) {
	return a > b ? a : b;
}

int main() {
	int a = 3, b = 4;
	const int &t = bigger(a, b);

	std::cout << "address of t = " << &t << ", address of b = " << &b << std::endl;

	for (int i = 0; i < 3; ++i)
		std::cout << t << std::endl;

	return 0;
}

