#include<iostream>
#include<vector>
using namespace std;
//finding the fibnocci series
// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }
//checking the array is sorted or not
// bool isSorted(vector<int>arr,int n){
//     if(n==0 || n==1){
//         return true;
//     }
//     return arr[n-1]>=arr[n-2] && isSorted(arr,n-1);
// }
// recursive binary search problem 
//finding target through recursive serace
int binarySearch(vector<int>arr,int st,int end,int target){
    if(st<=end){

        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        if (arr[mid]<=target){
            return binarySearch(arr,mid+1,end,target);
        }
        else{
            return binarySearch(arr,st,mid-1,target);
        }
    }
    return -1;

}

int main(){
    vector<int>arr={1,2,3,4,5,6};
    int st=0,end=5;
    int n=6;
    int target=15;
    // cout<<isSorted(arr,n)<<endl;
    cout<<binarySearch(arr,st,end,target)<<endl;

    // cout<<fib(6)<<" ";


}