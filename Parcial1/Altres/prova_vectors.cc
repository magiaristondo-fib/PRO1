#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);

    int vSize = v.size(); //perquè pot donar errors ja que és realment de tipus unsigned long.

    for (int i = 0; i < vSize; ++i)
    {
        v[i] = i*i;
    }

    for(int i = 0; i < vSize; ++i)
    {
        cout << "El valor de la posició " << i << " del vector és: " << v[i] << endl;
    }
    cout << endl << endl << endl;
}