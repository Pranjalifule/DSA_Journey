#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{

    int n = nums.size();
    int element;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            element = nums[i];
            cnt = 1;
        }
        else if (nums[i] == element)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == element)
        {
            cnt1++;
        }
    }

    if (cnt1 > n / 2)
    {
        return element;
    }
    return -1;
}

int main()
{

    vector<int> v = {2, 2, 1, 1, 1, 2, 2};

    cout << majorityElement(v);

    return 0;
}