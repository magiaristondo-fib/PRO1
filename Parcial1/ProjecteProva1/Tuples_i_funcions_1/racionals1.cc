#include <typeinfo>
#include <iostream>
using namespace std;

struct Racional
{
    int num, den;
};

int mcd(int a, int b)
{
    while (b != 0)
    {
        int aux = a;
        a = b;
        b = aux % b;
    }
    return a;
}

int v_abs(int a)
{
    if (a < 0)
        a = -a;
    return a;
}

Racional racional(int n, int d)
{
    Racional r;
    r.num = n;
    r.den = d;
    if (r.den < 0)
    {
        r.den = -r.den;
        r.num = -r.num;
    }
    if (r.num == 0)
    {
        r.den = 1;
    }
    int factor_comun = mcd(v_abs(r.num), v_abs(r.den));
    r.num = r.num / factor_comun;
    r.den = r.den / factor_comun;
    return r;
}

int main()
{
    int num, den;
    while (cin >> num >> den)
    {
        Racional r = racional(num, den);
        cout << r.num << " " << r.den << endl;
    }
    return 0;
}
