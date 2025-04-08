#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){ //On^2
    for (int i=0; i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){ // array is already Sorted
            return ;
        }
    }
}
void printArray(int arr[],int n){
    for (int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout << endl;
}

// Selection sorting 
void selectionSort(int arr[] ,int n){
    for (int i=0;i<n-1;i++){
        int smallestIdx=i; //unsorted part starting 
        for(int j=i+1; j<n;j++){
            if(arr[j] <arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}


int main(){
    int n=5;
    int arr[]={4,1,5,2,3};

    // BubbleSort(arr,n);
    // selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}