#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    { // this is an constructor
        data = val;
        next = NULL;
    }
};

class List
{ // it is using to define the head and tail ptr
    Node *head;
    Node *tail;

public:
    List()
    { // this is constructor
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val); // Dynamic obj ye value fnction k baad bhi rhega
        // Node newNode(val);//static -> jab function se bahar ayenge to delete ho jata hy val
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    // Insertion btw the Linked list
    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }

        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position You are Inserting" << endl;
                return;
            }
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    //searching 
    void search(int key)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (key == temp->data)
            {
                cout << "Present Sir";
                return;
            }
            temp = temp->next; // next node pe jao
        }
        cout << "Absent Sir" << endl;
    }
    //searching and returning index
    int searchIdx(int key)
    {
        Node* temp = head;
        int idx=0;
        while (temp != NULL)
        {
            if (key == temp->data)
            {
                return idx;
            }
            temp = temp->next; // next node pe jao
            idx++;
        }
        return -1;
    }
   void reverseLL(){
     Node* temp= tail;
     for (i=)
   }

    void printLL()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->"; // isse arrow lagega
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
    int main()
    {
        List ll;
        ll.push_front(3);
        ll.push_front(2);
        ll.push_front(1);
        ll.insert(4, 1);
        ll.printLL();
        ll.search(6);
        cout<<ll.searchIdx(2)<<endl;
        return 0;
}
