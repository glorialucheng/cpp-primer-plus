#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char const *argv[]) {
	using namespace std;
	if (argc == 1) {
		cerr << "Usage: " << argv[0] << " filenames! " << endl;
		exit(EXIT_FAILURE);
	}

	ifstream fin;
	long count;
	long total = 0;
	char ch;
	for (int i = 1; i < argc; ++i) {
		fin.open(argv[i]);
		if (!fin.is_open()) {
			cerr << "Could not open " << argv[i] << endl;
			fin.clear();
			continue;
		}
		count = 0;
		while(fin.get(ch))
			count++;
		cout << count << " chars in " << argv[i] << endl;
		total += count;
		fin.clear();
		fin.close();
	}

	cout << total << " chars in all files. \n";

	return 0;
}