#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {

    vector<int> v = { 20,20,20,20,30,60,70,40,80,40,67};
    set<int> s;
    for (auto it : v)
    {
        s.insert(it);
    }
    int idx = 0;

    for(auto it : s){
        
        v[idx] = it;
        idx++;
    }
    for(int i = 0;i < idx ; i++){

        cout<< v[i] << " ";
    }
        return 0;
    }