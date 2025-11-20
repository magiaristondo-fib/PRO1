#include <iostream>
using namespace std;

string poker_hand(char c1, char c2, char c3) {
	if (c1 == 'A' and c2 == 'A' and c3 == 'A') {
		return "Trio d'Asos!";
	} else if (c1 == c2 and c2 == c3 and c3 == c1) {
		return "Trio";
	} else if (c1 == c2 or c2 == c3 or c3 == c1) {
		return "Parella";
	} else {
		return "Totes les cartes diferents";
	}
}

int main() {
	char c1, c2, c3;
	while (cin >> c1 >> c2 >> c3) {
		cout << poker_hand(c1, c2, c3) << endl;
	}
	return 0;
}