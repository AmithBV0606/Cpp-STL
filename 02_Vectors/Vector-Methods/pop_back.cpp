#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> v4 = {'a', 'c', 'f', 'd', 'z'};

    // Deleting last element 'z'
    v4.pop_back();
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;

    // Output : a c f d

    return 0;
}