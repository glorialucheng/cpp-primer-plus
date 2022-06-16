#include<iostream>
#include<new>

void showArr(int *p, int n);

int main() {
	int buffer[256];
	std::cout << "buffer address = " << buffer << std::endl;
	int *p1, *p2;
	p1 = new int[5];
	p2 = new (buffer) int[5];
	for (int i = 0; i < 5; ++i)
		p1[i] = p2[i] = 2*i;
	showArr(p1, 5);
	showArr(p2, 5);

	int *p3, *p4;
	p3 = new (buffer) int[5];
	p4 = new (buffer + 5*sizeof(int)) int[5];
	for (int i = 0; i < 5; ++i)
		p3[i] = p4[i] = 2*i;
	showArr(p3, 5);
	showArr(p4, 5);
	std::cout << "p4 = " << p4 << ", p3 = " << p3 << ", p4 - p3 = " << p4 - p3 << std::endl;
	return 0;
}

void showArr(int *p, int n){
	for (int i = 0; i < n; ++i)
		std::cout << "value: " << p[i] << " at " << &p[i] << std::endl;
	std::cout << "end of arr" << std::endl;
}