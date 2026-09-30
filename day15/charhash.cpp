#include <iostream>
#include <vector>
using namespace std;

int main()
 {
    //lowercase
//     string str = "aabbcdefffi";
//     vector<int> hash(26,0);
    
//     //hash creation
//     for(int i= 0;i< str.size();i++){
//         hash[str[i] -'a']++;
//     }
//     //retrive

//     for(int i= 0;i< str.size();i++){

//         cout << hash[str[i] -'a'] << " ";
//     }
//  {
    //UPPERCASE
    // string str = "ABCDEFGHIJJKKH";
    // vector<int> hash(26,0);
    
    // //hash creation
    // for(int i= 0;i< str.size();i++){
    //     hash[str[i] -'A']++;
    // }
    // //retrive

    // for(int i= 0;i< str.size();i++){

    //     cout << hash[str[i] -'A'] << " ";
    // }

    //lower+upper
    //usimg ascii value

     string str = "ABSHYUIWGcfstybdhaaaaa";
    vector<int> hash(123,0);
    //highest aski value(122)+1 =123
    
    
    for(int i= 0;i< str.size();i++){
        hash[str[i]]++;
    }
    //retrive

    for(int i= 0;i< str.size();i++){

        cout << hash[str[i]] << " ";
    }
 

    return 0;
}