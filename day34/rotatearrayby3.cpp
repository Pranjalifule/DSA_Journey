#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {

        int n = nums.size();
        int high = n - 1;
        int low = 0;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[low] <= nums[mid])
            {

                if (target >= nums[low] && target <= nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {

                if (target <= nums[high] && target >= nums[mid])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main()
{

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    Solution s1;

    cout <<"index of target "<< s1.search(nums, target);
    return 0;
}