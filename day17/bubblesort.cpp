#include <iostream>
#include <vector>
using namespace std;

int main() {
    
   vector<int> arr = {12,45,67,89,76,54};

   int n = arr.size();

   for(int i = 0;i<n-1; i++){

    for(int j=0;j< n-i-1;j++){

        if(arr[j] > arr[j+1]){

            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
   }
   for(auto it :arr){
    cout<< it<< " ";
   }
    return 0;
}