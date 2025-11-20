// X41120

#include <iostream>
#include <vector>
using namespace std;

// PRE: |v|≥ 3
// POST: retorna un vector amb l’alçada de tots els cims de v (en el mateix ordre)
vector<int> calcula_cims(const vector<int>& v)
{
    int mida_v = v.size();
    vector<int> w;
    
    for (int i = 1; i < mida_v-1; ++i)
    {
        if(v[i] > v[i-1] and v[i] > v[i+1]) w.push_back(v[i]);
    }

    return w;
}

void print_vector(const vector<int>& w)
{
    int mida_w = w.size();
    
    cout << mida_w << ":";

    for (int i = 0; i < mida_w; ++i) cout << " " << w[i];
    
    cout << endl;

    bool espai = false;
    for (int i = 0; i < mida_w-1; ++i)
    {
        if (w[i] > w[mida_w-1]) 
        {
            cout << ((espai) ? " " : "") << w[i];
            espai = true;
        }
    }

    if(!espai) cout << "-";

    cout << endl;
}

int main()
{
    int n, a;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> a;
        v[i] = a;
    }

    print_vector(calcula_cims(v));
}