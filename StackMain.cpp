#include<iostream>
#include<stack>
using namespace std;

int main (){
    stack<int> s; // thsi is using stl function it gives us function for using directly
    
    s.push(5);
    s.push(15);
    s.push(25);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
        
    }
    cout<<endl; 
    
    return 0;
}
