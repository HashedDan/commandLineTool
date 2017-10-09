// Simple C++ Program Test

#include <iostream>
using namespace std;

int main (int argc, char * argv[])
{
	for (int i = 0; i < argc; ++i) {
		cout << argv[i] << endl;
	}

	cout << stoi(argv[1]) + stoi(argv[2]) << endl;

	return 0;
}