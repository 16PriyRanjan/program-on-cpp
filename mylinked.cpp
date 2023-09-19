#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
}
class Linkedlist
{
    private:
    Node* head;
    public:
    Linkedlist()
    {
        head=NULL;
    }
    void insert(int value)
    {
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL)
        head=newNode;
        else{
            Node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
    void display()
    {
       Node* temp=head;
       while(temp!=NULL)
       {
        cout<<temp->data<<" ";
        temp=temp->next;
       } 
       cout<<endl;
    }

};
