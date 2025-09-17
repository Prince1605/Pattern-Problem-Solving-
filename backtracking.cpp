#include<iostream>
#include<vector>
using namespace std;

void printSubsets(vector<int>&arr,vector<int>&ans,int i){
    if(i==arr.size()){
        for(int val : ans){
            cout<< val<<"";
        }
        cout<<endl;
        return; 
    }
    //include print karwana hy
    ans.push_back(arr[i]);
    printSubsets(arr,ans,i+1);

    //backtrack krega jab basecase par pahcuh jayega tab jo add kra hy use nikalna pdega
    ans.pop_back();
    //exclude wala part add krna pdega 
    printSubsets(arr,ans,i+1);
}

int main(){
    vector<int> arr={1,2,3};
    vector<int>ans;

    printSubsets(arr,ans,0);
}