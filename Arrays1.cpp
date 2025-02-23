#include<iostream>
#include <climits>
using namespace std;


int main(){

   
    int nums[]={5,15,22,1,-15,24};
    int size=6;
    int count=0;
    // int smallest = INT_MAX;
    // for (int i=0;i<size;i++)
    // {
    //     if (nums[i]<smallest){
    //         smallest=nums[i];
    //     }
    // }
    // cout<<"The smallest Number In Array :"<< smallest<<endl;


    // For finding the largest number we have to 
    // int largest= INT_MIN; //nums[0] we give here any value of an array for comparison
    // for (int i=0;i<size;i++)
    // {
    //     if (nums[i]>largest)
    //     {
    //         largest=nums[i];
    //     }
    // }cout<<"The Largest Number In Array :"<< largest<<endl;

    int smallest= INT_MAX;
    int largest= INT_MIN; //nums[0] we give here any value of an array for comparison
    for (int i=0;i<size;i++)
    {
        smallest=min(nums[i],smallest);
        
        // largest= max(nums[i],largest);// nums of i aur laargest me se jo chota ho
    }
    // cout<<"The Largest Number In Array :"<< largest<<endl;
    


    cout<<"The smallest Number In Array :"<< smallest<<endl;




    return 0;

}
