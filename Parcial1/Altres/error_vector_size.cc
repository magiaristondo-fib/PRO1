#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(3);
	vector<int> u(4);

    cout << v.size() << " " << u.size() << " " << v.size() - u.size() << endl;
}