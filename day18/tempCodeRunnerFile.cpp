#include <iostream>
#include <vector>
using namespace std;

void mergeArray(vector<int> &arr,int low,int mid,int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){

        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
             temp.push_back(arr[right]);
             right++;

        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while( right <= high){

        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i<= high; i++){
        arr[i]  = temp[i -low];
    }

}
void mergesort(vector<int> &arr, int low, int high)
{
    if(low == high){
        return;
    }
    int mid = (low + high)/2;
    mergesort(arr,low,mid);
    mergesort(arr, mid +1 , high);
    mergeArray(arr,low, mid, high);
}

int main()
 {
    vector<int> v = {10,7,9,4,6,3,2,4,5,6,7,8,9,0,7,7,6,5,5,4,4,3,3,3,3,2,2,3,4};

    mergesort(v,0,v.size()-1);
    for(auto it: v ){

    cout<< it<< " ";
    }
    
    return 0;
}