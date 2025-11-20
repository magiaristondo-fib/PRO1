// X06314

#include <iostream>
using namespace std;

void info_sequencia(int& suma, int& ultim)
{
    int s;

    cin >> s;

    while(s != 0)
    {
        suma += s;
        ultim = s;
        cin >> s;
    }
}

int main()
{
    int c, suma1 = 0, ultim1 = 0, comptador = 1;

    info_sequencia(suma1, ultim1);

    cin >> c;
    while (c != 0)
    {
        int suma2, ultim2;
        suma2 = ultim2 = c;

        info_sequencia(suma2, ultim2);

        if(suma1 == suma2 and ultim1 == ultim2) ++comptador;

        cin >> c;
    }

    cout << comptador << endl;
}

