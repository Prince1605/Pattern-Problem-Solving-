#include<iostream>
#include <cmath>      // for using log
using namespace std;

// void printDigits(int n){
//     while(n !=0){
//         int digits= n%10;
//         cout << digits <<endl;
//         n=n/10;
//     }
// }

bool isArmstrong(int n)
{
    int copyN=n;
    int sumOfCubes=0;
    
    
    while(n !=0){
        int digits= n%10;
        sumOfCubes +=(digits*digits*digits);
        
        n=n/10;
        
    }
    return sumOfCubes==copyN;

    // if(sumOfCubes==copyN){ //isko chota karke likhna 
    //     return true;
    // }else{
    //     return false;
    // }
}
int main(){

    int n=153;
    if(isArmstrong(n)){
        cout<< "is an armstrong" <<endl;
    }else{
        cout<<"is not an armstrong number \n"<<endl;
    }

    //sortcut to  count digits
    // cout<< (int)(log10(n)+1)<< endl;

    // printDigits(n);
}