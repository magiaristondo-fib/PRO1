#include <iostream>
using namespace std;

int main() {
	char ch;
	cin >> ch;
	int ncaracters = 0;

	while (ch != '.') {
		if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z')) {
			++ncaracters;
		}
		cin >> ch;
	}

	cout << ncaracters << endl;
}