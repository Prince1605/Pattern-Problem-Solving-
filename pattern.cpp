#include<iostream>
using namespace std;
int main(){
    // int n=4;
    // int num=1;
    // for(int i=0;i<n;i++){
       
    //     for (int j=0; j<n;j++)
    //     {
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // int n=4;
   
    // for(int i=0;i<n;i++){
    //     char ch='A';
    //     for (int j=1; j<=n;j++)
    //     {
    //         cout<<ch<<" ";
    //         ch=ch+1;
    //     }
    //     cout<<endl;
    // }
    // int n=4; // for ulta star pattern
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<n-i;j++)
    //     {
    //         cout<<'*';

    //     }
    //     cout<<endl;
    // }
    // int n=4; // for seedha star pattern
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<i+1;j++)
    //     {
    //         cout<<'*';

    //     }
    //     cout<<endl;
    // }

    // int n=4;
    // int num=1;
    // char ch = 'A';
    // for (int i=0;i<n;i++){
        
    //     for (int j=0;j<i+1;j++)
    //     {
    //         cout<<ch;
            
    //     }
    //     ch=ch+1;
    //     // num++;
    //     cout<<endl;
    // }


    // int n=4;
    // for (int i=0;i<n;i++){
    //     for (int j=1;j<i+1;j++)
    //     {
    //         cout<<j;

    //     }
    //     cout<<endl;
    // }


    // int n=4;
    // for (int i=0;i<n;i++){
    //     for (int j=i+1;j>0;j--)
    //     {
    //         cout<<j;

    //     }
    //     cout<<endl;
    // }


    // int n=4;
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<i;j++)
    //     { //spaces
    //         cout<<' ';
        
    //     }
    //     //nums rpint
    //     for(int k=0;k<n-i;k++){
    //         cout<<(i+1);
    //     }
        
    //     cout<<endl;
    // }

// Printing Pyramid 

    // int n=4;
    // for (int i=0 ; i<n;i++)
    // {
    //     // Spaces
    //     for (int j=0;j<n-i-1;j++)
    //     {
    //         cout<< ' ';
    //     }
    //     for (int k=1;k<=i+1;k++){
    //         cout<< k;
    //     }
    //     for (int l=i; l>0;l--)
    //     {
    //         cout<<i;
    //     }
    //     cout <<endl;
    // }

    // Printing start include Hollow Daimond pattern
    int n=4;
    // top
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            cout<<' ';
            
        }
        cout<<'*';
        if(i!=0){
            //spaces
          for (int k = 0; k < 2*i-1; k++)
        {
            cout<<' ';
        }  
        cout<<'*';

        }   
        cout<<endl;
    }
    // bottom loop
    for (int i=0;i<n-1;i++)// 0 to n-2
    {
        for (int j=0;j<i+1;j++)
        {
            cout<<' ';   
        }
        cout<<'*';
        if(i!=n-2){
            //spaces
          for (int k = 0; k < 2*(n-i)-5; k++)
            {
            cout<<' ';
            }  
            cout<<'*';

        }   
        cout<<endl;
    }
        
    


    return 0;


}