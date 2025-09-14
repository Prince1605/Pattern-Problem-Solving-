#include<iostream>
using namespace std;

void printNums(int n){
    if(n==1){
        cout << 1<<" " ;
        return;
    }
    cout<< n <<" ";// ye pehle hi print hota hy  

    printNums(n-1);
    cout<< n <<" "; // ye jab backtrack hone lagta hy tab print hota hy 
    
}

int  nFact(int n){

    if (n==1){
        return 1;
    }
    return n* nFact(n-1);
}
int sumNnumber(int n){
    if (n==1){
        return 1;
    }
    return n + sumNnumber(n-1);
}
int main(){
    int fact=1;
    // printNums(6);
    cout<<nFact(5) << endl;
    cout<<sumNnumber(5
    ) << endl;
    return 0;
}