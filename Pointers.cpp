#include<iostream>

using namespace std;


void changeA(int* ptr){
    *ptr=20;
}


int main (){

    int a = 10;
    int *ptr = &a;
    int **parPtr =&ptr;


    cout<< *(&ptr)<<endl;
    // cout<< *(&a)<<endl;
    cout<< (parPtr)<<endl;
    cout<< **(parPtr)<<endl;
    
    int a =10;
    changeA(&a);
    cout<<"Inside main function  "<<a<<endl;
    return 0;



}