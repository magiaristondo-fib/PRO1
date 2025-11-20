#include <iostream>
using namespace std;

int main() {
	int numInici, n, total = 0;
	cin >> n;

	numInici = n;

	while (n > 0) {
		total += n % 10;
		n /= 100;
	}

	cout << numInici << ((total % 2 == 0) ? " ES TXATXI" : " NO ES TXATXI") << endl;
}