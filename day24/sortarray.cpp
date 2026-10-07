#include <iostream>
#include<vector>
using namespace std;

bool issorted(vector<int> &v)
{
    for(int i = 1;i< v.size();i++){
//for decending 
        // if (v[i] <= v[i-1]){

        
       // for accending
        if(v[i] > v[i- 1] ){

        }

        else{

            return false;
        }
    }
    return true;

}

int main() {
    // vector<int> v = {100,30,40,44,50};
    vector<int> v = {3,4,5,6,7,8,9,10};
    // vector<int> v = {100,50,8,4,3,2,1};

    cout<< issorted(v);
    return 0;
}