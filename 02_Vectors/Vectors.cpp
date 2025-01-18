#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v; // Creates an empty container
    v.push_back(1); // v = {1}
    v.emplace_back(2); // v = {1, 2}

    // Vectors of pair data types : 
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // Creates a vector of size 5 and fills it with the number 100.
    vector<int> vec2(5, 100);

    // Creates a vector of size 5.
    vector<int> vec3(5);

    // Creates a vector of size 5 and fills it with the number 20.
    vector<int> vec4(5, 20);

    vector<int> vec5(vec4);
    return 0;
}