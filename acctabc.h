#ifndef ACCTABC
#define ACCTABC
#include <iostream>
#include <string>

class AcctABC {
private:
	std::string fullName;
	long acctNum;
	double balance;

protected:
	struct Formatting
	{
		std::ios_base::fmtflags flag;
		std::streamsize pr;
	};
	const std::string & getFullName() const {return this->fullName;}
	long getAcctNum() const {return this->acctNum;}
	Formatting setFormat() const;
	void restore(Formatting &f) const;

public:
	AcctABC(const std::string &s = "NullName", long an = -1, double bal = 0.0);
	void deposit(double amt);
	virtual void withdraw(double amt) = 0;
	double getBalance() const {return this->balance;}
	virtual void viewAcct() const = 0;
	virtual ~AcctABC(){}
};

class Brass : public AcctABC {
private:

public:
	Brass(const std::string &s = "NullName", long an = -1, double bal = 0.0) : AcctABC::AcctABC(s, an, bal) {}
	virtual void withdraw(double amt);
	virtual void viewAcct() const;
	virtual ~Brass() {}
};

class Brassplus : public AcctABC {
private:
	double maxLoan;
	double rate;
	double ownsBank;

public:
	Brassplus(const std::string &s = "NullName", long an = -1, double bal = 0.0, double ml = 500, double r = 0.15);
	Brassplus(const Brass & brass, double ml = 500, double r = 0.15);
	virtual void withdraw(double amt);
	virtual void viewAcct() const;
	void resetMaxLoan(double m) {this->maxLoan = m;}
	void resetRate(double r) {this->rate = r;}
	void resetOwns() {this->ownsBank = 0;}
	virtual ~Brassplus() {}
};

#endif