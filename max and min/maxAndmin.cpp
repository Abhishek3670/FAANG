#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> maxandmin(vector<int> v)
{
    vector<pair<int, int>> ans;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        maxi = max(maxi, v[i]);
        mini = min(maxi, v[i]);
    }
    ans.push_back(make_pair(maxi, mini));
    return ans;
}
int main()
{
    vector<int> v{1, 334, 2, 32, 5, 0};
    vector<pair<int, int>> ans;
    ans = maxandmin(v);
    cout << ans[0].first << " " << ans[0].second << endl;
}