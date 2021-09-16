#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void reverse(vector<int> &v)
{
    int l = 0;
    int r = v.size() - 1;
    while (l < r)
        swap(v[l++], v[r--]);
}
int main()
{
    vector<int> v{10, 43, 6, 23, 65, 12};
    reverse(v);
    for (auto i : v)
        cout << i << " ";
}