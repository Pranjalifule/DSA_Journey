#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    //int unorderedhash map

    vector<int> v = {1,2,4,5,7,6,8,7,98,6,5,5,5,4,4,3,3,32,8};
    unordered_map<int,int> mpp;

    for(int i=0;i<v.size();i++)
    {
        mpp[v[i]]++;
    }

     for (auto it : mpp)
    {
      cout<< it.first << " ->" <<it.second <<endl;
    }
   
    //charunorderedhashmap
    
    // string str = "ABHouityerewJHFFRUIM";
    //  unordered_map<char,int> hashmap;

    // for(int i=0;i<str.size();i++)
    // {
    //     hashmap[str[i]]++;
    // }

    //  for (auto it : hashmap)
    // {
    //   cout<< it.first << " ->" <<it.second <<endl;
    // }
    return 0;
}