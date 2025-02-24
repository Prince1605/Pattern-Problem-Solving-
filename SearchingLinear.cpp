#include<iostream>
#include <climits>
using namespace std;


//Linear Search Algorithm
// int linearSearch(int arr[],int sz,int target){

//     for (int i=0; i<sz;i++)
//     {
//         if (arr[i]==target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int reverseArray(int arr[],int sz){
//     int start=0;
//     int end=sz-1;

//     while (start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
    
// }


// finding the sum and product of an array 
// int sumProduct(int arr[],int sz){
//     int sum=0;
//     int product=1;
//     for (int i=0; i<sz;i++)
//     {
//         sum+=arr[i];
//         product*=arr[i];

//     }
//     cout<<"The sum is :"<<sum <<" The product is :" << product <<endl;
// }

// Swapping the maximum and minimun of an array 
// int swapMaxMin(int arr[],int sz){
    
// int MinIndices= 0; // Taking arr[o] as maximum and comparison 
// int MaxIndices= 0; //nums[0] we give here any value of an array for comparison
// for (int i=1;i<sz;i++)
// {
//     if(arr[i]<arr[MinIndices]){
//         MinIndices=i;
//     }
//     if(arr[i]>arr[MaxIndices]){
//         MaxIndices=i;
//     }
// }
// cout << "Smallest: " << arr[MinIndices] << endl;
// cout << "Largest: " << arr[MaxIndices] << endl;

// cout << "Array Before swapping: ";
// for (int i = 0; i < sz; i++) {
//     cout << arr[i] << " ";
// }
// cout << endl;

// swap(arr[MinIndices],arr[MaxIndices]);

// cout << "Array after swapping: ";
// for (int i = 0; i < sz; i++) {
//     cout << arr[i] << " ";
// }
// cout << endl;

// }

// FOr Unique  value in an array 
void uniqueVal(int arr[], int sz) {
    int arr2[sz];  // Array to store unique elements
    int uniqueCount = 0;

    for (int i = 0; i < sz; i++) {
        bool isUnique = true;

        // Check if arr[i] already exists in arr2
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr2[j]) {
                isUnique = false;
                break;
            }
        }

        // If it's unique, add to arr2
        if (isUnique) {
            arr2[uniqueCount++] = arr[i];
        }
    }

    // Print unique elements
    cout << "Unique elements: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}


int main (){

    int arr[]= {4,2,7,8,1,2,5};
    
    
    int sz=7;
    int target=5;
    

    //    cout<< linearSearch(arr,sz,target)<<endl;
    // reverseArray(arr, sz); // yaha pr value swap ho gya 
    // for (int  i = 0; i < sz; i++) // yaha value print kara rha tha 
    // {
    //     cout<< arr[i] ;
    // }

    // sumProduct(arr,sz);

    // Swaaping the maximum and minimum array 
    // swapMaxMin(arr,sz);// Here i am calling the function which swapped the array

    uniqueVal(arr,sz);

    return 0;
}