#include <iostream>
using namespace std;

int main()
{
    const int PIC = 3143;

    bool pic = false;
    int a, b, c;

    cin >> a >> b >> c;
    while(c != 0 and !pic)
    {
        if(b > PIC and b > a and b > c) pic = true;

        a = b;
        b = c;
        cin >> c;
    }

    cout << ((pic) ? "SI" : "NO") << endl;
}