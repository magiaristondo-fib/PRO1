#include <iostream>
using namespace std;

/**
 * @pre  n >= 0
 * @post retorna cert si n és bicolor, fals en cas contrari
 */
bool is_bicolor(int n) {
	int	 a;
	bool fi1 = false, fi2 = false;

	a = n % 10;
	n /= 10;

	while (n > 0 && !fi2) {
		if (!fi1) {
			if (n % 10 != a) {
				fi1 = true;
				a = n % 10;
			}
			n /= 10;
		} else if (!fi2) {
			if (n % 10 != a) {
				fi2 = true;
			} else {
				n /= 10;
			}
		}
	}

	return (n > 0 || fi2 == true);
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