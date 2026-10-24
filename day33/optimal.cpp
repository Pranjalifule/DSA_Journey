#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int first = firstOccurrence(nums, target); // logn
    int last = lastOccurrence(nums, target);   // logn

    return {first, last};
}

int main()
{
    // vector<int> v = {5, 7, 7, 8, 8, 10};
    vector<int> v = {0, 2, 2, 2, 2, 2};
    int target = 2;
    vector<int> result = searchRange(v, target);

    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}