// P14130

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, a;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> a;
        v[i] = a;
    }

    a = 0; // reutilitza la variable com a comptador, ja que no tornarà a fer servir-la

    for (int i = 0; i < n-1; ++i)
    {
        if (v[i] == v[n-1]) ++a;
    }

    cout << a << endl;
}