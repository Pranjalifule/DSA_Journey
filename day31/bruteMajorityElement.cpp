#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int> &nums)
{

    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                cnt++;
            }
        }

        if (cnt > n / 2)
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{

    vector<int> v = {2, 2, 1, 1, 1, 2, 2};

    cout << majorityElement(v);

    return 0;
}