#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v5 = {1, 2, 3, 4, 5, 6, 7, 8};

    for (vector<int>::iterator it = v5.begin(); it != v5.end(); it++)
    {
        cout << *(it) << " ";
    }

    // Instead of this log format we can use "auto" : 
    for (auto it = v5.begin(); it != v5.end(); it++)
    {
        cout << *(it) << " ";
    }

    // Note : "auto" in C++ is somewhat like "any" in TypeScript but not exactly.

    int a = 5;
    auto b = 'Amith';

    // Here variable "b" is automatically considered as integer.

    return 0;
}