#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
// A peak element is an element that is strictly greater than its neighbors.
// return its index
//  nums = [1,2,3,1] output: 2
int findPeakElement(vector<int> &nums)
{
    int l = 0, h = nums.size() - 1, mid;
    while (l < h)
    {
        mid = l + (h - l) / 2;
        if (nums[mid] < nums[mid + 1])
            l = mid + 1;
        else
            h = mid;
    }
    return l;
}
int main()
{
    vector<int> v{1, 13, 11, 10, 9, 8, 7, 6, 3, 2};
    cout << findPeakElement(v);
}