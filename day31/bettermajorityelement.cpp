#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int> &nums)
{

    int n = nums.size();
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > n / 2)
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{

    vector<int> v = {1, 2, 1, 1, 1, 2, 2, 2};

    cout << majorityElement(v);

    return 0;
}