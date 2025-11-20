#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z')
    {
        c = c - 'a' + 'A';
    }
    else
    {
        c = c - 'A' + 'a';
    }

    cout << c << endl;
}