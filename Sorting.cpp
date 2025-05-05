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
// Insertion sorting 
// Insertion Sorting
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];      // current element uthaya
        int prev = i - 1;       // uske pehle wale element se compare karna hai

        // Jab tak prev index valid hai aur prev element bada hai current se
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];  // bade element ko ek step aage shift karo
            prev--;                     // ab pichhle element pe jao
        }

        // Jab correct position mil jaaye, wahan current element daal do
        arr[prev + 1] = curr;
    }
}

int main(){
    int n=5;
    int arr[]={4,1,5,2,3};

    // BubbleSort(arr,n);
    // selectionSort(arr,n);
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}