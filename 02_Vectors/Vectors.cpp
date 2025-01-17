#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> vec2(5, 100);

    vector<int> vec3(5);

    vector<int> vec4(5, 20);

    vector<int> vec5(vec4);
    return 0;
}