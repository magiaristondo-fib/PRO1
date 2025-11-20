#include <cmath>
#include <iostream>
#include <typeinfo>
using namespace std;

struct Punt {
	double x, y;
};

double distancia(const Punt& a, const Punt& b) {
	double x = b.x - a.x, y = b.y - a.y;

	return sqrt(x * x + y * y);
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);

	double x1, y1, x2, y2;
	while (cin >> x1 >> y1 >> x2 >> y2) {
		Punt a, b;
		a.x = x1;
		a.y = y1;
		b.x = x2;
		b.y = y2;
		cout << distancia(a, b) << endl;
	}
	return 0;
}