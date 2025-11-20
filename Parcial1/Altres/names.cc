#include <iostream>
using namespace std;

int main() {
    int count = 0;
    string name;

    while(cin >> name)
    {
        if (name == "marta") ++count;
    }

    cout << count << endl;
}