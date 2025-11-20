// P31111

#include <iostream>
using namespace std;

int main() 
{
    char c;
    int parentesis = 0;

    while(cin >> c && parentesis >= 0)
    {
        if (c == '(') ++parentesis;
        else if(c == ')') --parentesis;
    }

    if (parentesis == 0) cout << "si" << endl;
    else cout << "no" << endl;
}