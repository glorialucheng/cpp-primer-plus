#include <string>

class Brass {
private:
	std::string name;
	int balance;
public:
	Brass(std::string name = "None", int balance = 0);
	virtual ~Brass();
	std::string get_name() {return this->name;}
	int get_balance() {return this->balance;}
	virtual void show();
};

class Brassplus : public Brass {
private:
	double rate;
public:
	Brassplus(std::string name = "None", int balance = 0, double rate = 0.15);
	Brassplus(Brass &brass, double rate = 0.15);
	~Brassplus();
	void show();
};