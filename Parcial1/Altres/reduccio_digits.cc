#include <iostream>
using namespace std;

int reduccio_digits(int n)
{
	if (n > 9)
	{
		int i = reduccio_digits(n / 10) + n % 10;
		if (i > 9)
		{
			return reduccio_digits(i);
		}
		else
		{
			return i;
		}
	}
	else
	{
		return n;
	}
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << reduccio_digits(n) << endl;
	}
	return 0;
}