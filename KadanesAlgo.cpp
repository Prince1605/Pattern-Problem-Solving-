#include<iostream>
#include<vector>
using namespace std;

int main (){
    // int n=5;
    // int arr[5]={1,2,3,4,5};
    // this is the brute force approach for printing all the subarray
    // for (int st=0; st<n; st++)
    // {
    //     for(int end=st;  end<n; end++)
    //     {
    //         for (int i=st; i<=end; i++)
    //         {
    //             cout<<arr[i];

    //         }
    //         cout<<" ";
    //     }
    //     cout<< endl;
    // } 

    // sum of Maximum  subarray approach 

    // int maxSum=0;
    // int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};

    // for (int st=0; st<n; st++)
    // {       int currSum=0;
    //     for(int end=st;  end<n; end++)
    //     {
    //         currSum+=arr[end];
    //         maxSum=max(currSum,maxSum);
    //     }
    // }
    // cout<<"Max Sum Of Subarray :"<<maxSum<<endl;

    // 
    int target =9;
    int n=7;
    int curSum=0;
    for (int st=0;st<n;st++){
        for(int end=st; end<n;end++){
            curSum+=arr[end];
            if(curSum==target){
                cout<<arr[end];
            }
        }
    }

    return 0;
}