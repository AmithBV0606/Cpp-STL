#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    // Normal way : 
    cout << v[1] << v[2];

    // Using iterators : 
    vector<int>::iterator it = v.begin();
    // v.begin() gives the starting memory location of the Vector "v".
    cout << *(it) << " ";
    it++;
    vector<int>::iterator it = v.end();
    return 0;
}