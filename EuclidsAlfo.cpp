#include<iostream>
using namespace std;

int greatestCommonDivisor(int a , int b){
    while (a>0 && b>0)
    {
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0) return b;
    if(b==0) return a;
    
}
// using recursion
int gcdRec(int a , int b){ // ham recurison ko start hi aise karte hy assume krke ki a bada hy b se
    if(b==0) return a;

    return gcdRec(b,a%b); // kyuki ham assume kiye h a > b
}

int LCM(int a ,int b){
    int lcm=a*b/gcdRec(a,b);
    cout<<lcm<<endl;
}

int main (){
    cout<<greatestCommonDivisor(6,0)<<endl;
    cout<<gcdRec(20,24)<< endl;
    LCM(20,28);

    return 0;
}