//P32046
#include <iostream>
using namespace std;

int main() {
    int num, numActual, total = 0;
    cin >> num;

    cout << "nombres que acaben igual que " << num << ":" << endl;

    num %= 1000;

    while(cin >> numActual)
    {
        if (numActual % 1000 == num)
        {
            ++total;
            cout << numActual << endl;
        }
    }

    cout << "total: " << total << endl;
}