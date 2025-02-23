#include<iostream>
using namespace std;

// double sum(double a, double b)
// {
//     double sum=a+b;
//     return sum;

// }
// int minofTwo(int a ,int b){
//     if(a>b){
//         cout<<"The smaller number is :"<< b<< endl; 

//     }
//     else{
//         cout<<"The smaller number is :"<< a<< endl;
//     }
// }

// int sumOfN (int a, int n){
//     int sum=0;
    
//     for (int i=0; i<=n;i++){
//         sum+=i;
//     }
//     cout<<"The Sum Of :"<< a <<" To "<< n << "is: "<< sum<<endl;

// }
// int factorial(int n){
//     int factorial =1;
//     for (int i=1;i<=n;i++){
//         factorial*=i;
//     }
//     cout<<"Factorial Of Numebr  :"<< n <<" is :"<< factorial<<endl;
// }


// int sumOfDigit(int num){
//     int digitSum=0;
//     while (num>0)
//     {
//         int lastdigit=num%10;
//         num=num/10;
//         digitSum+=lastdigit;
//     }
//     cout<<"Sum of individual Digit are :"<< digitSum<<endl;
    
// }

// optimising these code 
// int binomial(int n, int r){
//     int nFact=1;
//     int rFact=1;
//     int diff=1; int binomialSoln=0;
//     for (int i=1;i<=n;i++)
//     {
//         nFact*=i;
//     }
//     for (int i=1;i<=r;i++)
//     {
//         rFact*=i;
//     }
//     //for n-r factorial
//     for(int j=1;j<=(n-r);j++){
//         diff*=j;
//     }
//     binomialSoln=(nFact/(rFact*diff));

//     cout<<"The binomial solution is:"<<binomialSoln<<endl;
//     // cout<<nFact<<endl;
//     // cout<<rFact<<endl;
//     // cout<<diff<<endl;
    
// }


// int factorial(int n){
//     int fact =1;
//     for (int i=1;i<=n;i++){
//         fact*=i;
//     }

//     return fact;
//     // cout<<"Factorial Of Numebr  :"<< n <<" is :"<< factorial<<endl;
// }
// int nCr(int  n,int r)
// {
//     int fact_n=factorial(n);
//     int faact_r=factorial(r);
//     int fact_nMr=factorial(n-r);
//     return fact_n/(faact_r*fact_nMr);
// }

//Writing the code for prime number

int primeNum(int n){
    int count=1; // Giving it as true value 

    if (n<=1){
        count =0;
    }
    else{
        for (int i=2; i<=n/2;i++){
            if(n%i==0){
                count=0;
                break;
            }
        }
        if(count==0){
            cout<<"This is Not Prime :"<< n<< endl;
        }
        else{
            cout<<"This is Prime :"<< n<< endl;
        }
    }

  

}



int main() {
    // cout<<sum(10,5)<<endl;
    // minofTwo(10,5);
    // sumOfN(1,5);
    // factorial(5);
    // sumOfDigit(145);
    // binomial(4,2);
    // cout<<nCr(4,2)<<endl;
    // primeNum(7);


    return 0;
}
