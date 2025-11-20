//  P79784

#include <iostream>
using namespace std;

int main() 
{
    char c;
    int x = 0, y = 0;

    while(cin >> c)
    {
        if (c == 'n') --y;
        else if (c == 's') ++y;
        else if (c == 'e') ++x;
        else if (c == 'o') --x;
    }

    cout << "(" << x << ", " << y << ")" << endl;
}