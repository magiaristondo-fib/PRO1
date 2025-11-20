#include <iostream>
#include <typeinfo>
using namespace std;

struct Rellotge {
	int h;	// hores (0<=h<24)
	int m;	// minuts (0<=m<60)
	int s;	// segons (0<=s<60)
};

Rellotge mitja_nit() {
	Rellotge rellotge;
	rellotge.h = 0;
	rellotge.m = 0;
	rellotge.s = 0;

	return rellotge;
}

void incrementa(Rellotge& r) {
	++r.s;

	r.m += r.s / 60;
	r.s %= 60;

	r.h += r.m / 60;
	r.m %= 60;

	r.h %= 24;
}

void escriu(const Rellotge& r) {
	if (r.h < 10) {
		cout << '0';
	}
	cout << r.h << ':';

	if (r.m < 10) {
		cout << '0';
	}
	cout << r.m << ':';

	if (r.s < 10) {
		cout << '0';
	}
	cout << r.s;

	cout << endl;
}

int main() {
	Rellotge r = mitja_nit();
	for (int i = 0; i <= 25 * 60 * 60; ++i) {
		escriu(r);
		incrementa(r);
	}
	return 0;
}
