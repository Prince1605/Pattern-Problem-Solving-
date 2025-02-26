#include<iostream>
#include <vector>
using namespace std;



int main(){

    vector<int> vec={'a','b','c','d','e','f','g','h'};

    cout<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    vec.pop_back();// we dont give to value because it know the last value 
    vec.pop_back();// pop or delete last value 
    // cout<<vec.size()<<endl;
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    cout<<vec.at(8)<<endl; // return the value at index

    // for(int val:vec)
    // {
    //     cout<<val<<endl;
    // }


    return 0;
}