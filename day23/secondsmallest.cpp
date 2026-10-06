#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> v = {15,6,8,9,3,4,9,20};

    int smallest = v[0];
    int seconds = INT_MAX;

    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] > smallest){
            seconds = smallest;
            smallest = v[i];
        }
        else if(v[i] >smallest && v[i] < seconds)
        {
             seconds = v[i];
        }
    }
    cout<< " Smallest element in array : " << smallest <<endl ;
    cout<< " second smallest element of an array : "<< seconds ;
    return 0;
}