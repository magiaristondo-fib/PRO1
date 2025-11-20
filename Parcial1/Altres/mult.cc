#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int j = 0;

	while (j <= 10) {
		cout << n << '*' << j << " = " << n * j << endl;
		j++;
	}
}