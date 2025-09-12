#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val){// this is an constructor 
        data=val;
        next=NULL;
    }

};

class List{ // it is using to define the head and tail ptr
    Node* head;
    Node* tail;
public: 
    List() { // this is constructor
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode= new Node(val); //Dynamic obj ye value fnction k baad bhi rhega 
        // Node newNode(val);//static -> jab function se bahar ayenge to delete ho jata hy val
        if(head==NULL){
            head=tail=newNode;
            return;

        }
        else{
            newNode->next = head; 
            head= newNode;

        }
    }
    // adding puushbac in ll
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;

        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    // pop front deleting the front value
    void pop_front(){
        if(head==NULL){
            cout<<"LL is Empty \n";
            return ;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        
        delete temp;
    }

    void pop_back(){
        if(head==NULL){
            cout<<"LL is empty\n";
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next; // isse tmp me wo value rakh le rhe
            
        }
        temp->next=NULL;
        delete tail; // internal heap storage me jo value hy wo delt horha

        tail=temp;

    }


    void printLL(){
        Node* temp=head;

        while (temp !=NULL)
        {
            cout << temp->data << "->";// isse arrow lagega
            temp=temp->next;
        }
        cout<<"NULL"<<endl; 
    }


};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.pop_front();
    ll.printLL();
    ll.pop_back();
    ll.printLL();
    return 0;

}

