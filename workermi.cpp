#include <iostream>
#include "workermi.h"
using std::cout;
using std::cin;
using std::endl;

// worker
Worker::~Worker() {}

void Worker::data() const {  // protected
	cout << "Name: " << this->name << endl;
	cout << "ID: " << this->id << endl;
}

void Worker::get() {  // protected
	getline(cin, this->name);
	cout << "enter id: ";
	cin >> this->id;
	while (cin.get() != '\n') 
		continue;
}

// waiter
void Waiter::data() const {  // protected
	cout << "panache: " << this->panache << endl;
}

void Waiter::get() {  // protected
	cout << "enter the waiter's panache: ";
	cin >> this->panache;
	while (cin.get() != '\n') 
		continue;
}

void Waiter::set() {  // public
	cout << "enter the waiter's name: ";
	Worker::get();
	Waiter::get();
}
void Waiter::show() const {  // public
	cout << "Category: waiter\n";
	Worker::data();
	Waiter::data();
}

// singer
const char * Singer::pv[Singer::Vtypes] = {"other", "alto", "con", "sop", "bass", "bar", "ten"};

void Singer::data() const {  // protected
	cout << "voice: " << pv[this->voice] << endl;
}

void Singer::get() {  // protected
	cout << "enter the voice of the singer: ";
	int i;
	for (i = 0; i < Singer::Vtypes; ++i) {
		cout << i << ": " << Singer::pv[i] << "\t";
		if (i%4 == 3)
			cout << endl;
	}
	if (i%4 != 0) 
		cout << endl;
	cin >> this->voice;
	while (cin.get() != '\n') 
		continue;
}

void Singer::set() {  // public
	cout << "enter the singer's name: ";
	Worker::get();
	Singer::get();
}

void Singer::show() const {  // public
	cout << "Category: singer\n";
	Worker::data();
	Singer::data();
}

// SW
void SW::data() const {  // protected
	Waiter::data();
	Singer::data();
}
void SW::get(){  // protected
	Waiter::get();
	Singer::get();
}
void SW::set() {  // public
	cout << "enter the SW's name: ";
	Worker::get();
	SW::get();
}
void SW::show() const {  // public
	cout << "Category: SW\n";
	Worker::data();
	SW::data();
}
