#include <iostream>
using namespace std;


int nombre_digits(int n)
{
    if(n > 9) return nombre_digits(n / 10) + 1;
    else return 1;
}


int main () {
  int n;
  while (cin >> n) cout << nombre_digits(n) << endl;
  return 0;
}