#include<iostream>
using namespace std;


int decitobinaryconverter(int num){

    int pow=1;
    int ans =0;
    int rem=0;
    
    while (num>0){
        rem =num%2;
        num=num/2;
        ans+=rem*pow;
        pow=pow*10;
    }
    cout<<"The Given Number is Converted in binary here:"<<ans<<endl;


}

int binarytoDeci(int num)
{
    int pow=1;
    int ans=0;
    while (num>0)

    {
       int  rem=num%10;        /* code */
       ans+=pow*rem;
       num/=10;
       pow=pow*2;

    }
    cout<<"The Given Number is binary to deci Converted is here:"<<ans<<endl;
    
}

int main (){

    decitobinaryconverter(36);
    binarytoDeci(100100);





    
 return 0;


}