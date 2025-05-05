#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector <int> arr,int tar){
   
 int n = arr.size(); //sizeof(arr) / sizeof(arr[0]);
    int st=0 , end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;    // int mid=(st+end)/2;-> this formula make the value overflow for max vallue
        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            
            return mid; 
        }
    }
    return -1;
}

int recBinarySearch(vector<int> arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;

        if(tar>arr[mid]){ // 2nd half 
            return recBinarySearch(arr,tar,mid+1,end);
        }
        else if(tar<arr[mid]){
            return recBinarySearch(arr,tar,st,mid-1);
        }
        else{
            return mid;
        }

    }
    return -1;
}

int main (){


    // int arr[]={-1,0,3,4,5,9,12};
    //Without Function 
   // int n = sizeof(arr) / sizeof(arr[0]);
    // int st=0 , end=n-1,target=12,mid;
    // while(st<=end){
    //     int mid=(st+end)/2;
    //     if(target>arr[mid]){
    //         st=mid+1;
    //     }
    //     else if(target<arr[mid]){
    //         end=mid-1;
    //     }
    //     else{
    //         cout << "Element found at index: " << mid << endl;
    //         return 0;  // Successful exit
    //     }
    // }

    // cout << "Element not found" << endl;

//-> with function 

    // vector<int> arr1={-1,0,3,4,5,9,12};
    // int tar1=12;
    // cout<<binarySearch(arr1,tar1)<<endl;

    // vector<int> arr2={-1,0,3,5,9,12};
    // int tar2=9;
    // cout<<binarySearch(arr2,tar2)<<endl;
    vector<int> arr3={-1,0,3,5,9,12};
    int tar2=9;
    int st=0 , end=arr3.size(); // defining the size
    cout<<recBinarySearch(arr3,tar2,st,end)<<endl;



    return 0;



}