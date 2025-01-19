#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Accessing and printing values using indexes
    cout << v[3] << endl; // d
    cout << v.at(2);      // f

    // Updating values using indexes 3 and 2
    v[3] = 'D';
    v.at(2) = 'F';

    cout << v[3] << endl; // D
    cout << v.at(2); // F

    return 0;
}