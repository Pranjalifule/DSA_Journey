#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {12, 45, 67, 89, 9, 4};

    for (int i = 0; i < arr.size(); i++)
    {
        int mini = i;
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;

    }
    for (auto it : arr)
    {

        cout << it << " ";
    }

    return 0;
}