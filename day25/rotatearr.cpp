#include <iostream>
#include <vector>
using namespace std;

int main() {
    // left rotate array by one
   vector<int> v = {12,3,4,5,6,7,9};

   int temp = v[0];

   for(int i = 1 ;i<v.size(); i++)
   {

    v[i-1] = v[i];

   }

   v[v.size()-1] = temp;

   for(auto it : v)
   {
    cout << it<< " ";
   }


    return 0;
}