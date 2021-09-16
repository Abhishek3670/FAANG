#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<pair<int, int>> kthsmallestLarget(vector<int> v, int smallest, int largest)
{
    vector<pair<int, int>> temp;
    sort(v.begin(), v.end());
    temp.push_back(make_pair(v[smallest - 1], v[v.size() - largest]));
    return temp;
}
int main()
{
    vector<int> v{2, 13, 3, 1, 8, 33, 6, 5};
    int n = v.size();
    vector<pair<int, int>> ans;
    ans = kthsmallestLarget(v, 2, 3);
    for (auto i : ans)
        cout << i.first << " " << i.second;
}