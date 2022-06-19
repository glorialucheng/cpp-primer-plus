#include <iostream>
#include "acctabc.h"
using std::cout;
using std::ios_base;
using std::endl;
using std::string;

//AcctABC
AcctABC::AcctABC(const std::string &s, long an, double bal) {
	this->fullName = s;
	this->acctNum = an;
	this->balance = bal;
}

void AcctABC::deposit(double amt) {
	if (amt < 0) 
		cout << "error: negative deposit! \n";
	else
		this->balance += amt;
}

void AcctABC::withdraw(double amt) {
	this->balance -= amt;
}

AcctABC::Formatting AcctABC::setFormat() const {
	Formatting f;
	f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
	f.pr = cout.precision(2);
	return f;
}
void AcctABC::restore(Formatting &f) const {
	cout.setf(f.flag, ios_base::floatfield);
	cout.precision(f.pr);
}

//Brass
void Brass::withdraw(double amt) {
	if (amt < 0)
		cout << "error: negative withdraw! \n";
	else if (amt <= AcctABC::getBalance())
		AcctABC::withdraw(amt);
	else
		cout << "error: withdraw exceeds your balance! \n";
}
void Brass::viewAcct() const {
	Formatting f = AcctABC::setFormat();
	cout << "name: " << AcctABC::getFullName() << endl;
	cout << "acctNum: " << AcctABC::getAcctNum() << endl;
	cout << "balance: " << AcctABC::getBalance() << endl;
	AcctABC::restore(f);
}

//Brassplus
Brassplus::Brassplus(const std::string &s, long an, double bal, double ml, double r) : AcctABC::AcctABC(s, an, bal) {
	this->maxLoan = ml;
	this->ownsBank = 0.0;
	this->rate = r;
}

Brassplus::Brassplus(const Brass & brass, double ml, double r) : AcctABC::AcctABC(brass) {
	this->maxLoan = ml;
	this->ownsBank = 0.0;
	this->rate = r;
}

void Brassplus::withdraw(double amt) {
	Formatting f = setFormat();

	double bal = AcctABC::getBalance();
	if (amt <= bal)
		AcctABC::withdraw(amt);
	else if (amt <= bal + this->maxLoan - this->ownsBank) {
		double advance = amt - bal;
		this->ownsBank += advance*(1.0 + this->rate);
		cout << "bank advance: " << advance << endl;
		cout << "chargeL " << advance * this->rate << endl;
		AcctABC::deposit(advance);
		AcctABC::withdraw(amt);
	}
	else
		cout << "error: credit limit exceeded! " << endl;
	restore(f);
}
void Brassplus::viewAcct() const {
	Formatting f = AcctABC::setFormat();
	cout << "name: " << AcctABC::getFullName() << endl;
	cout << "acctNum: " << AcctABC::getAcctNum() << endl;
	cout << "balance: " << AcctABC::getBalance() << endl;
	cout << "maxLoan: " << this->maxLoan << endl;
	cout << "ownsBank: " << this->ownsBank << endl;
	cout.precision(3);
	cout << "loan rate: " << 100 * this->rate << "%\n";
	AcctABC::restore(f);
}