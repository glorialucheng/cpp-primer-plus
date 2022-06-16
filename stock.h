#ifndef STOCK
#define STOCK
#include <string>
class Stock {
	private:
		std::string company;
		long shares;
		double share_value;
		double total_value;
		double set_total(){
			total_value = share_value*shares;
		}
	public:
		void acquire(const std::string &company, long n, double price);
		void buy(long n, double price);
		void sell(long n, double price);
		void update(double price);
		void show();
};

#endif