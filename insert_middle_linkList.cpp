#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
    // Firstly we are creating a linked list node with data variable and next pointer. Then we initialize the value through the constructor. we initialize next pointer as NULL value for reusability 
};
class list{
    Node* head;
    Node* tail;
     // now defining head and tail pointer for idetify first and last node of my linked list;
    public: 
    list()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node*newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = newNode;

        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
     // create a function to add value at the front of the linked list. we creating newNode for which vlaue we want to insert at the fornt. And check if the head value is Null we can say that there is no value at the linked list. 

    void insert_middle(int value, int position)
    {
        if(position < 0)
        {
            cout << "You are typing invalid position";
            return;
        }
        if(position == 0)
        {
            push_front(value);
            return;
        }

        Node* temp = head;
        for(int i=0;i<position -1; i++)
        {
            temp = temp->next;
        }
       
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;

        // creating a function insertMiddle for inserting value at any position of the link list. Then we check if position is less then zero we can say that it is invalid beacuse our linked list smaller position is zero. Then we travel to the position through for loop. after travaling we insert our value at the right position. 
    }
    void print()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp-> data << " ";
            temp = temp->next;
        }
    }
     // now creating a function for printing the linked list
};
int main()
{
 list ll;
 ll.push_front(3);
 ll.push_front(1);
 ll.push_front(2);
 ll.push_front(4);
 ll.push_front(5);
 ll.push_front(6);
 ll.print();

 cout << "After inserting element at the middle we get__\n";

 ll.insert_middle(10,3);
 ll.print();
}
