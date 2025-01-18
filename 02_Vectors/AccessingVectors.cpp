#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Basic Vector Operations :

    // 1. Accessing Elements
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Accessing and printing values using indexes
    cout << v[3] << endl; // d
    cout << v.at(2);      // f

    // ________________________________________________________________________

    // 2. Updating Elements

    // Updating values using indexes 3 and 2
    v[3] = 'D';
    v.at(2) = 'F';

    cout << v[3] << endl;
    cout << v.at(2);

    // ________________________________________________________________________

    // 3. Traversing Vector :

    vector<int> v2 = {1, 4, 2, 3, 5};

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    // ________________________________________________________________________

    // 4. Inserting Elements

    vector<char> v3 = {'a', 'f', 'd'};

    // Inserting 'z' at the back
    v3.push_back('z');

    // Inserting 'c' at index 1
    v3.insert(v3.begin() + 1, 'c');

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    // Output : a c f d z

    // ________________________________________________________________________

    // 5. Deleting Elements

    vector<char> v4 = {'a', 'c', 'f', 'd', 'z'};

    // Deleting last element 'z'
    v4.pop_back();
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;

    // ________________________________________________________________________

    // 6. Accessing elements through iterators

    vector<int> v5 = {1, 2, 3, 4, 5, 6, 7, 8};

    for (vector<int>::iterator it = v5.begin(); it != v5.end(); it++)
    {
        cout << *(it) << " ";
    }

    // Using for-each loop :
    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}