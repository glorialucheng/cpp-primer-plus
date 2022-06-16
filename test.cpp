#include <iostream>
// #include "student.h"
// #include "stock.h"
// #include "person.h"
// #include "mytime.h"
// #include "stonewt.h"
// #include "mystring.h"
#include "string.h"

using namespace std;

// extern const int count = 3;
// void callme1(Mystring &s) {
// 	cout << "reference function: " << s << endl;
// }
// void callme2(Mystring s) {
// 	cout << "value function: " << s << endl;
// }
int main()
{
	String s1;
	cout << "enter your string: ";
	cin >> s1;
	cout << "your string is " << s1 << endl;

	String ss[10];
	cout << "used " << String::HowMany() << " strings" << endl;

	char temp[20];
	int i;
	for (i = 0; i < 10; ++i) {
		cout << i+1 << ": ";
		cin.get(temp, 20);
		while(cin && cin.get() != '\n') continue;
		if(!cin || temp[0]=='\0') 
			break;
		else
			ss[i] = temp;
	}
	int total = i;
	if (total > 0) {
		for (i = 0; i < total; ++i) 
			cout << ss[i][0] << ": " << ss[i] << endl;
		int shortest = 0;
		int first = 0;
		for (i = 0; i < total; ++i) {
			if(ss[i].length() < ss[shortest].length())
				shortest = i;
			if(ss[i] < ss[first])
				first = i;
		}

		cout << "shortest = " << ss[shortest] << endl;
		cout << "first = " << ss[first] << endl;
		cout << "used " << String::HowMany() << " strings" << endl;

		/* code */
	} else
		cout << "No input! \n";
	

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