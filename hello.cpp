#include <iostream>
using namespace std;
template<typename T> void myswap(T& t1, T& t2);  // template
template<> void myswap(char& t1, char& t2);  // char specialization
int func(int n);
template void myswap(int& t1, int& t2);  // implicit instantiate, non <>
int main() {

	
	long a = 71, b = 73;
	myswap<long>(a, b);
	cout << "a, b = " << a << ", " << b << endl;

	// int a = 'A', b = 'B';
	// myswap(a, b);
	// myswap('a', 'b');  // error
	// cout << "a, b = " << a << ", " << b << endl;

	// pointer of an array of function pointer
	// int (*func_arr[3])(int) = {func, func, func};
	// int (*(*func_arr_p)[3])(int) = &func_arr;
	// (*func_arr_p)[1](2);

	// array of function pointer
	// int (*func_arr[3])(int) = {func, func, func};
	// func_arr[1](4);

	// function pointer
	// int (*pf)(int) = func;
	// (*pf)(4);
	// pf(3);
}

template<typename T> void myswap(T& t1, T& t2) {
	cout << "template of T" << endl;
	T temp = t1;
	t1 = t2;
	t2 = temp;
}

template<> void myswap(char& t1, char& t2) {
	cout << "char specialization" << endl;
	char temp = t1;
	t1 = t2;
	t2 = temp;
}

int func(int n){
	while(n > 0) {
		cout << "function!" << endl;
		n--;
	}
}