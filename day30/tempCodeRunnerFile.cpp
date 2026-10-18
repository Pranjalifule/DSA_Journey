include <iostream>
// #include <vector>
// using namespace std;

// void sortColors(vector<int> &nums)
// {
//     int n = nums.size();
//     int cnt0 = 0, cnt1 = 0, cnt2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] == 0)
//         {
//             cnt0++;
//         }
//         else if (nums[i] == 1)
//         {
//             cnt1++;
//         }
//         else
//         {
//             cnt2++;
//         }
//     }

//     // filling 0
//     for (int i = 0; i < cnt0; i++)
//     {
//         nums[i] = 0;
//     }

//     // filling 1
//     for (int i = cnt0; i < cnt0 + cnt1; i++)
//     {
//         nums[i] = 1;
//     }

//     // filling 2
//     for (int i = cnt0 + cnt1; i < n; i++)
//     {
//         nums[i] = 2;
//     }
// }

// int main()
// {
//     vector<int> v = {2,2, 0, 0, 2, 1, 1, 0, 1};
//     sortColors(v);

//     for (auto it : v)
//     {
//         cout << it << " ";
//     }

//     return 0;
// }

