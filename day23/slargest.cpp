#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> v = {15,6,8,9,3,4,9,20};

    int largest = v[0];
    int slargest = INT_MIN;

    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] > largest){
            slargest = largest;
            largest = v[i];
        }
        else if(v[i] < largest && v[i] > slargest)
        {

            slargest = v[i];
        }
    }
    cout<< " Largest element in array : " << largest <<endl ;
    cout<< " second largest element of an array : "<< slargest ;
    

    return 0;
}