#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{

    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
        {
            swap(arr[j - 1], arr[j]);
            cout << "Code run..\n";
        }
    }
}

int main()
{

    vector<int> v = {1,2,3,4,5,6,7,8,9};
    insertionSort(v);

    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}