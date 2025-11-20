#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int numInicial = n;
	int ndigits = 0;

	while (n > 0) {
		n /= 10;
		++ndigits;
	}

	cout << "El nombre de dígits de " << numInicial << " és: " << ndigits << endl;
}