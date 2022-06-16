#include "mytime.h"

MyTime::MyTime(){}
MyTime::MyTime(int h, int m) {
	this->h = h;
	this->m = m;
}
void MyTime::addHours(int n) {
	this->h += n;
}

void MyTime::addMinutes(int n) {
	int temp = this->m + n;
	this->h = this->h + (temp / 60);
	this->m = this->m + (temp % 60);
}

void MyTime::reset(int h, int m) {
	this->h = h;
	this->m = m;
}

MyTime MyTime::operator+(const MyTime &t) const {
	int h = this->h + t.h;
	int m = this->m + t.m;
	MyTime time;
	time.reset(h+(m/60), m%60);
	return time;
}
MyTime MyTime::operator-(const MyTime &t) const {
	int n1 = this->getAbs();
	int n2 = t.getAbs();
	int n = n1 - n2;
	MyTime time;
	time.reset(n/60, n%60);
	return time;
}
MyTime MyTime::operator*(double n) const {
	int t = this->getAbs();
	t *= n;
	MyTime time;
	time.reset(t/60, t%60);
	return time;
}
MyTime::~MyTime(){}
std::ostream & operator<<(std::ostream &os, const MyTime &t) {
	std::cout << "Time: " << t.h << " hours " << t.m << " minutes.\n";
	return os;
}