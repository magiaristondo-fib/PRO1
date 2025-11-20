#include <iostream>
using namespace std;

// troba la intersecció dels intervals [a,b] i [c,d]
// a<b i c<d

int main() {
    int a, b, c, d, inici, fi;
    cin >> a >> b >> c >> d;

    // definir inici interval
    if (a < c) inici = c;
    else inici = a;

    // definir fi interval
    if (b < d) fi = b;
    else fi = d;

    // determinar si té intersecció
    if (inici > fi) cout << "[]" << endl;
    else cout << "[" << inici << "," << fi << "]" << endl;
}