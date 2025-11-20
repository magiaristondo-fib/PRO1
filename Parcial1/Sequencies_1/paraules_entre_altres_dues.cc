#include <iostream>
using namespace std;

int main()
{
    string s;
    int comptador = 0;
    bool principi = false, final = false;

    while(cin >> s and !final)
    {
        if(s == "principi") principi = true;
        else if(s == "final") final = true;
        else if(principi and !final) ++comptador;
    }

    if(principi and final) cout << comptador << endl;
    else cout << "sequencia incorrecta" << endl;
}