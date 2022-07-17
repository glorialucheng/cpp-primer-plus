#include <iostream>
// #include "student.h"
// #include "stock.h"
// #include "person.h"
// #include "mytime.h"
// #include "stonewt.h"
// #include "mystring.h"
// #include "string.h"
// #include "brass.h"
// #include "acctabc.h"
// #include "workermi.h"
// #include <cstring>
// #include <string>

using namespace std;

// extern const int count = 3;
// void callme1(Mystring &s) {
// 	cout << "reference function: " << s << endl;
// }
// void callme2(Mystring s) {
// 	cout << "value function: " << s << endl;
// }

// class Base
// {
// public:
// 	Base() {}
// 	~Base() {}
// 	virtual void say() {
// 		cout << "hello, at Base" << endl;
// 	}
	
// };

// class Extend : private Base
// {
// public:
// 	Extend() {}
// 	~Extend() {}
// 	virtual void say() {
// 		cout << "hello, at Extend" << endl;
// 	}
	
// };

// class INT {
// friend ostream& operator<< (ostream &os, INT i) {
// 	os << "[" << i.value << "]" << endl;
// 	return os; 
// }
// private:
// 	int value;
// public:
// 	INT(int i = 0) : value(i) {}
// 	INT& operator++() {  // ++INT
// 		cout << "++INT" << endl;
// 		this->value++;
// 		return *this;
// 	}

// 	const INT operator++(int) {  // INT++
// 		cout << "INT++" << endl;
// 		INT temp = this->value;
// 		this->value++;
// 		return temp;
// 	}
// };

// class Age {
// private:
// 	int age;
// public:
// 	Age(int a = 0) : age(a) {}
// 	void operator() (int n) {
// 		for (int i = 0; i < n; ++i)
// 			cout << "my age = " << this->age << endl;
// 	}
// };

int main() {

	// Age(20)(4);

	// INT a = 4;
	// cout << a;
	// a++;  // C++规定，后缀版本的自增运算符调用函数符为operator++(int)的函数，而前缀版本则调用函数符为operator++()的函数
	// cout << a;
	// ++a;
	// cout << a;

	// double a = 1.37;
	// cout.precision(2);
	// cout << a;

	// cerr << "cerr" << endl;
	// clog << "clog" << endl;

	// string s = "asdf";
	// cout << "s = " + s + "\n";
	// string ss;
	// cin >> s >> ss;
	// cout << "s = " + s + "\n" + "ss = " + ss + "\n";
	// cin.get();
	// getline(cin, ss);
	// cout << ss;


	// Worker *ws[3];
	// int ct;
	// for (ct = 0; ct < 3; ct++) {
	// 	char choice;
	// 	cout << "enter type: \n" << "w: waiter  s: singer  t: sw  q: quit\n";
	// 	cin >> choice;
	// 	if (choice == 'q')
	// 		break;
	// 	switch(choice) {
	// 		case 'w': ws[ct] = new Waiter(); break;
	// 		case 's': ws[ct] = new Singer(); break;
	// 		case 't': ws[ct] = new SW(); break;
	// 	}
	// 	cin.get();
	// 	ws[ct]->set();
	// }

	// cout << "\n your workers: \n";
	// for (int i = 0; i < ct; ++i) {
	// 	cout << endl;
	// 	ws[i]->show();
	// }
	// for (int i = 0; i < ct; ++i)
	// 	delete ws[i];

	// Extend *e = new Extend();
	// e->say();
	// Base *b = (Base *) (new Extend());
	// b->say();

	// delete e;

	// AcctABC *list[3];
	// list[0] = new Brass("Jack", 31724434, 2300.0);
	// list[1] = new Brassplus("Tony", 23858734, 4520.5, 1000, 0.14);
	// list[2] = new Brass("Rose", 24563513, 1200.0);

	// for (int i = 0; i < 3; ++i) {
	// 	list[i]->viewAcct();
	// 	cout << endl;
	// }

	// list[1]->withdraw(4800);
	// list[1]->viewAcct();
	// cout << endl;

	// list[0]->deposit(200);
	// list[0]->viewAcct();
	// cout << endl;

	// list[2]->withdraw(2100);




	// for (int i = 0; i < 3; ++i)
	// 	delete list[i];



	// Brass *b = new Brass("Jack", 2300);
	// Brass *bp = new Brassplus("Tony", 3400);
	// b->show();
	// bp->show();

	// Brass *point = bp;
	// point->show();

	// delete b;
	// delete bp;

	// String s1;
	// cout << "enter your string: ";
	// cin >> s1;
	// cout << "your string is " << s1 << endl;

	// String ss[10];
	// cout << "used " << String::HowMany() << " strings" << endl;

	// char temp[20];
	// int i;
	// for (i = 0; i < 10; ++i) {
	// 	cout << i+1 << ": ";
	// 	cin.get(temp, 20);
	// 	while(cin && cin.get() != '\n') continue;
	// 	if(!cin || temp[0]=='\0') 
	// 		break;
	// 	else
	// 		ss[i] = temp;
	// }
	// int total = i;
	// if (total > 0) {
	// 	for (i = 0; i < total; ++i) 
	// 		cout << ss[i][0] << ": " << ss[i] << endl;
	// 	int shortest = 0;
	// 	int first = 0;
	// 	for (i = 0; i < total; ++i) {
	// 		if(ss[i].length() < ss[shortest].length())
	// 			shortest = i;
	// 		if(ss[i] < ss[first])
	// 			first = i;
	// 	}

	// 	cout << "shortest = " << ss[shortest] << endl;
	// 	cout << "first = " << ss[first] << endl;
	// 	cout << "used " << String::HowMany() << " strings" << endl;

	// 	/* code */
	// } else
	// 	cout << "No input! \n";
	

	// {
	// 	Mystring s1("s1s1s1s1");
	// 	Mystring s2("s2s2s2s2");
	// 	Mystring s3("s3s3s3s3");
	// 	callme1(s1);
	// 	cout << s1;
	// 	callme2(s2);
	// 	cout << "after callme2 s2 = " << s2;

	// 	cout << "copy func: \n";
	// 	Mystring cpys = s3;
	// 	cout << "cpys = " << cpys;
	// 	cout << "assignment func: \n";
	// 	Mystring asgs;
	// 	asgs = s1;
	// 	cout << "asgs = " << asgs;
	// 	cout << "main scop\n";
	// }
	// cout << "end of main()" << endl;

	// Stonewt s1 = Stonewt(182.6);
	// s1.show_stn();
	// s1.show_lbs();

	// Stonewt s2 = {12, 4.2}; // only c++11
	// s2.show_stn();
	// s2.show_lbs();

	// Stonewt s3 = Stonewt(29.7);
	// // Stonewt s3 = 29.1; error
	// s3.show_stn();

	// int arr[50];
	// for (int i = 0; i < 50; ++i)
	// 	arr[i] = 2*i;

	// cout << arr[s3];



	// MyTime t1(11, 56);
	// MyTime t2(16, 14);

	// std::cout << t1 << t2 << "t1 + t2 = " << t1 + t2;
	// std::cout << "t2 - t1 = " << t2 - t1;
	// std::cout << "t1 * 1.5 = " << t1 * 1.5;
	// std::cout << "1.5 * t1 = " << 1.5 * t1;


	// Person ps[4] = {
	// 	Person("Ming"), Person("Ying", 1999, 0)
	// };

	// const Person p = Person{"Lu", 2000, 1};
	// p.say();

	// Person p1 = Person("Ming", 2001, 1);
	// p1.say();
	// Person p2("Hong", 1999, 0);
	// p2.say();
	// Person *p3 = new Person("Ying", 1998, 0);
	// (*p3).say();
	// delete p3;

	// p2 = Person("Zhao", 1999, 0);
	// p2.say();

	// p1 = p2;
	// p1.say();

	// cout << "main &mypi = " << &mypi << endl;
	// cout << "main &count = " << &count << endl;
	// say_hello(3);
	// say();
	// say();

	// Stock my;
	// my.acquire("Alibaba", 3200, 78.4);
	// my.show();

	return 0;
}
