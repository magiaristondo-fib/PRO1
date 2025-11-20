#include <iostream>
using namespace std;

/**
 * @pre  n >= 0
 * @post retorna cert si n és bicolor, fals en cas contrari
 */
bool is_bicolor(int n) {
	int a, b, difs = 0;

	b = n % 10;
	n /= 10;
	a = n % 10;

	while (n > 0 && difs < 2) {
		n /= 10;

		if (a != b) {
			++difs;
		}

		b = a;
		a = n % 10;
	}

	return difs == 1;
}

int main() {
	int n;
	while (cin >> n) {
		if (is_bicolor(n)) {
			cout << n << endl;
		}
	}
	return 0;
}