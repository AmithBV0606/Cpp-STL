#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v3 = {'a', 'f', 'd'};

    // Inserting 'c' at index 1
    v3.insert(v3.begin() + 1, 'c');

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    // Output : a c f d
}