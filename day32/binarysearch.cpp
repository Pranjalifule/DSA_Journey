#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target)
{

    int n = nums.size();
    int low = 0, high = n - 1;

    while (low <= high)
    {

        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return mid;
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
    return -1;
}

int main()
{
    vector<int> v = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    cout << search(v, target);

    return 0;
}