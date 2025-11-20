#include <iostream>
using namespace std;

int main() {
    string paraula;
    int comptador = 0;

    while(cin >> paraula) // fer Ctrl + D per fer end of buffer i sortir del bucle
    {
        if(paraula == "hola") ++comptador;
    }

    cout << comptador << endl; 
}