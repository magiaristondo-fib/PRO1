#include <iostream>
using namespace std;

int main() 
{
    char c;

    cin >> c;
    while(c != '.')
    {
        if (c == 'a')
        {
            cout << "si" << endl;
            return 0;
        } 
        cin >> c;
    }

    cout << "no" << endl;
}