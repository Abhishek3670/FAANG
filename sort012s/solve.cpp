#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void solve(vector<int> &v)
{
    int l = 0, r = v.size() - 1;
    for (int i = 0; i <= r; i++)
    {
        if (v[i] == 0)
            swap(v[i], v[l++]);
        else if (v[i] == 2)
            swap(v[i], v[r--]);
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
}
int main()
{
    vector<int> nums{2, 0, 2, 1, 1, 0};
    solve(nums);
    for (auto i : nums)
        cout << i << " ";
}