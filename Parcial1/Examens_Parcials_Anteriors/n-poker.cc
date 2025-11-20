#include <iostream>
using namespace std;

int main()
{
	int n, count = 1;

	cin >> n;

	char a, b;

	cin >> a;

    while (count < n && cin >> b)
    {
        if (a == b)
        {
            ++count;
        }
        else
        {
            count = 1;
        }
        
        a = b;
    }

    if (count == n)
    {
        cout << n << "-Poker de " << a << "!" << endl;
    }
    else
    {
        cout << "No hi ha " << n << "-Poker" << endl;
    }
}