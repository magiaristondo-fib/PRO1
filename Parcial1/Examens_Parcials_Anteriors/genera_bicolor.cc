#include <iostream>
using namespace std;

bool is_bicolor(int n)
{
	int a, b, difs = 0;

	b = n % 10;
	n /= 10;
	a = n % 10;

	while (n > 0 && difs < 2)
	{
		n /= 10;

		if (a != b)
		{
			++difs;
		}

		b = a;
		a = n % 10;
	}

	return difs == 1;
}

int main()
{
	int n, max = 1;
	cin >> n;

    for(int i = 0; i < n; ++i)
    {
        max *= 10;
    }

    for (int i = max/10; i < max; ++i)
	{
		if (is_bicolor(i) ) cout << i << endl;
	}
	return 0;
}