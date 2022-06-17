#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

const int min_per_hour = 60;

bool newcustomer(double x) {  // 用于判断此刻是否有顾客
	return (std::rand() * x / RAND_MAX < 1);
}

int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	std::srand(std::time(0));

	cout << "Welcome to the Bank! " << endl;
	cout << "the maximum size of queue: ";
	int size;
	cin >> size;  // the max length of the line
	Queue line(size);

	cout << "the number of the hours: ";
	int hours;
	cin >> hours;
	int cyclelimit = min_per_hour * hours;

	cout << "the average of customers per hour: ";
	int perhour;
	cin >> perhour;
	double min_per_cust = min_per_hour / perhour;  // 平均每位顾客需要的时间

	Item temp;
	int turnaways = 0;
	int customers = 0;
	int served = 0;
	int sum_line = 0;
	int wait_time = 0;
	int line_wait = 0;

	for(int cycle = 0; cycle < cyclelimit; cycle++) {
		if(newcustomer(min_per_cust)) {  // have new customer
			if(line.full())
				turnaways++;  // 因为队伍满了而离开的顾客
			else {
				customers++;
				temp.set(cycle);
				line.enqueue(temp);
			}
		}

		if(wait_time <= 0 && !line.empty()) {  // 如果没人在办业务且队伍不为空
			line.dequeue(temp);  // set temp points the front of the line
			wait_time = temp.get_ptime();  // 获得队首所需时间
			line_wait += cycle - temp.get_arrive();  // 将每个人办理业务的时间累加，用于计算平均所需时间
			served++;  // 统计成功办理业务的人数
		}

		if(wait_time > 0)  // 如果有人办业务，则循环一次减一次时间
			wait_time--;
		sum_line += line.get_count();  // 将每一时刻的排队人数累加，用于计算队伍的平均人数
	}

	if(customers > 0) {  // 模拟结束，显示参数
		cout << "accepeted: " << customers << endl;
		cout << "   served: " << served << endl;
		cout << "turnaways: " << turnaways << endl;
		cout << "average of line length: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double) sum_line / cyclelimit << endl;

		cout << "average of wait time: " << (double) line_wait / served << " minutes. " << endl;
	}else{
		cout << "No customers! " << endl;
	}
	cout << "Done! ";

	return 0;
}