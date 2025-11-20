// P60816

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if(num == 0) {
        cout << '0' << endl;
        return 0;
    }

    while(num > 0)
    {
        cout << ((num%16 < 10) ? char('0' + num%16) : char(num%16 - 10 + 'A'));
        num /= 16;
    }

    cout << endl;
}