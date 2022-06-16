#include "stonewt.h"
#include <iostream>

Stonewt::Stonewt(){
	this->pounds = this->stone = this->left = 0;
}

Stonewt::Stonewt(double lbs) {
	this->pounds = lbs;
	this->stone = int(lbs) / N;
	this->left = lbs - this->stone*N;
}

Stonewt::Stonewt(int stone, double lbs) {
	this->pounds = stone*N + lbs;
	this->stone = stone;
	this->left = lbs;
}

Stonewt::~Stonewt(){}

void Stonewt::show_lbs() const {
	std::cout << this->pounds << " pounds." << std::endl;
}

void Stonewt::show_stn() const {
	std::cout << this->stone << " stones and " << this->left << " pounds." << std::endl;
}

Stonewt::operator int() const {
	return int(this->pounds + 0.5);
}

Stonewt::operator double() const {
	return this->pounds;
}