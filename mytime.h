#ifndef MYTIME
#define MYTIME
#include <iostream>

class MyTime {
private:
	int h;
	int m;
public:
	MyTime();
	MyTime(int h, int m = 0);
	void addHours(int n);
	void addMinutes(int n);
	void reset(int h, int m);
	int getAbs() const {
		return h*60 + m;
	}
	MyTime operator+(const MyTime &t) const;
	MyTime operator-(const MyTime &t) const;
	MyTime operator*(double n) const;
	~MyTime();

	friend MyTime operator*(double n, const MyTime &t) {
		return t * n;
	}
	friend std::ostream & operator<<(std::ostream &os, const MyTime &t);
};

#endif