// X58169

#include <iostream>
using namespace std;

void infoSequencia(int& max, int& lpos)
{
    int n;
    
    cin >> n;

    for(int i = 1; n != 0; ++i)
    {
        if (n >= max)
        {
            max = n;
            lpos = i;
        }
        cin >> n;
    }
}

int main()
{
    int n, max = 0, lpos, fpos;
    bool trobat = false;
    
    infoSequencia(max, lpos);

    cin >> n;

    for (int i = 1; n != 0 and !trobat; ++i)
    {
        if (n == max)
        {
            trobat = true;
            fpos = i;
        }
        cin >> n;
    }

    cout << max << " " << lpos << " ";

    if (trobat)
        cout << fpos << endl;
    else
        cout << "-" << endl;
}