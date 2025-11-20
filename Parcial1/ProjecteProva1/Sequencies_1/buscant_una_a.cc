//  P75149

#include <iostream>
using namespace std;

int main() 
{
    char c;
    bool acabat = false;

    cin >> c;
    while(c != '.' && !acabat)
    {
        if (c == 'a') acabat = true;
        cin >> c;
    }

    if(acabat)
    {
        cout << "si" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}