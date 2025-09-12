#include<iostream>
#include<list>
using namespace std;


class Stack{
    list <int>ll;
// -------------------------------------------------------//
    //creation of stack using Linked List
    

    public:
        void push(int val){
            ll.push_front(val);
        }
        void pop(){
            ll.pop_front();
        }
        int top(){
            return ll.front();
        }
        bool empty(){
            return ll.size()==0;
        }
};

int main (){

    Stack s;
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