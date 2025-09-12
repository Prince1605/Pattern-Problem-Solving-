#include<iostream>
using namespace std;


class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;
    public:
        CircularList(){
            head=tail=NULL;

        }
        //Insertion at head
    // void insertHead(int val){
    //     Node* newNode = new Node(val);
    //     if(head==NULL){
    //         head=tail=newNode;
    //         tail->next=head;
    //     }
    //     else{
    //         newNode->next=head;
    //         head=newNode;
    //         tail->next=head;
    //     }

    // }

    // inserting at tail
    void insertTail(int val){
        Node* newNode = new Node(val);
        if(head==NULL) {
            head=tail=newNode;
            tail->next=head;
        }
        else{
            // tail->next=newNode;
            // tail=newNode;
            // tail->next=head;
            // both are right you can use upr or neeche case
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;

        }
    }

        // deletion at head
    void deltHead(){
        if(head==NULL){
            cout<<"Deletion Not Possible Yet";
            return;
            
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        
        Node* temp=head;
        head=head->next;
        tail->next=head;
        delete temp;

    }

    // Deletion at tail
    void deltTail(){
        if(head==NULL){
            cout<<"Deletion Not Possible Yet";
        return;   }
        if(head==tail){
            delete tail;
            head=tail=NULL;
            return;
        }
        Node* temp=tail;
        Node* prev=head;
        while (prev->next != tail)
        {
            prev=prev->next   ;
        }

        tail=prev;
        tail->next=head;
        temp->next=NULL;
        delete temp;
        
            
 
    }

    void print(){
        if(head==NULL){
            cout<<"This Circular List is Empty";
            return;
        }
        cout<<head->data<<"->";
        Node* temp=head->next;
        while (temp != head)
        {
            cout << temp->data << "->";
            temp=temp->next;
        }
        cout <<temp->data<<endl;
    }
     
};


int main(){
    CircularList ll;
    // ll.insertHead(5);
    // ll.insertHead(6);
    // ll.insertHead(7);
    // ll.insertHead(8);
    ll.insertTail(5);
    ll.insertTail(6);
    ll.insertTail(7);
    ll.insertTail(8);
    // ll.deltHead();
    ll.deltTail();
    ll.print();
};