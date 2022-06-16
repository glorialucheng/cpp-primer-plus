#ifndef STONEWT
#define STONEWT

class Stonewt {
private:
	enum {N = 14};
	int stone;
	double left;
	double pounds;
public:
	Stonewt();
	explicit Stonewt(double lbs);
	Stonewt(int stone, double lbs);
	~Stonewt();
	void show_lbs() const;
	void show_stn() const;
	operator int() const;
	explicit operator double() const;
};

#endif