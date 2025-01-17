#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";
    vector<int>::iterator it = v.end();
    return 0;
}