#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Simple pair :
    pair<int, int> p = {1, 3};
    cout << p.first << " and " << p.second;
    cout << endl;

    // Pair inside a pair :
    pair<int, pair<int, int>> newPair = {1, {2, 3}};
    cout << newPair.first << " " << newPair.second.first << " " << newPair.second.second;
    cout << endl;

    // Array of pairs : Just like Array of objects in Js/Ts
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second;
    return 0;
}