#include<iostream>
#include<vector>
using namespace std;
//finding the fibnocci series
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
//checking the array is sorted or not
bool isSorted(vector<int>arr,int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && isSorted(arr,n-1);
}

int main(){
    vector<int>arr={1,2,3,4,5,6};
    int n=6;
    cout<<isSorted(arr,n)<<endl;

    cout<<fib(6)<<" ";


}