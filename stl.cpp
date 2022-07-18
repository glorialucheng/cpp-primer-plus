#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// void show(string s) {  // 将函数指针传入for each，注意不带括号
// 	cout << s << "\t";
// }

// class show {  // 将类名传入for each，注意要带上括号
// public:
// 	void operator() (string s) {
// 		cout << s << "\t";
// 	}
	
// };

int main() {

	std::map<int, string> map;
	map[1] = string("111");
	map[2] = string("222");
	map.insert(pair<int, string>(3, "333"));
	auto a = map.find(3);
	cout << a->second << endl;

	// vector<int> vi = {1,2,3,4,5,6};
	// for (int e : vi)
	// 	cout << e << endl;
	
	// for (std::vector<int>::iterator e = vi.begin(); e != vi.end(); e++)
	// 	cout << *e << endl;
	
	// vector<string> vs;
	// string temp;
	// while (cin >> temp && temp != "quit") {
	// 	vs.push_back(temp);
	// }

	// vector<string>::iterator want = find(vs.begin(), vs.end(), string("luch"));
	// // auto
	// // cout << *want;
	// auto show = [](string s) {cout << s << "\t";};
	// for_each(vs.begin(), vs.end(), show);

	// *want = "lucheng";
	// cout << endl;
	// for_each(vs.begin(), vs.end(), show);
	return 0;
}
