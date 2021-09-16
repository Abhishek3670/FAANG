#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
vector<int> maxandmin(vector<int> v)
{
    sort(v.begin(), v.end());
    return v;
}
int main()
{
    vector<int> v{1, 334, 2, 32, 5, 0};
    vector<int> ans;
    ans = maxandmin(v);
    cout << "Maximum and Minimum in the array : " << ans[v.size() - 1] << " and " << ans[0] << endl;
}