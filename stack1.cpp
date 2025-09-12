#include<iostream>
#include<vector>
using namespace std;


class Stack{
    //creation of stack using vector
    vector<int> v;

    public:
        void push(int val){ //0(1)
            v.push_back(val);
        }
        void pop(){//o(1)
            v.pop_back();
        }
        int top(){
            return v[v.size()-1];
        }
        bool empty(){
            return v.size()==0;
        }

};

int main (){

    Stack s;
    s.push(5);
    s.push(15);
    s.push(25);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
        
    }
    cout<<endl; 
    
    return 0;
}