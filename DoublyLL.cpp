#include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* prev;
	Node* next;
	Node(int d)
	{
		this->data=d;
		this->prev=NULL;
		this->next=NULL;
	}
	~Node()
	{
		int val=this->data;
		if(next!=NULL)
		{
			delete next;
			next=NULL;
		}
		cout<<"Memeory Free for node with data"<<val<<endl;
	}
	
}
void insertAtposition(Node* &tail,Node* &head,int position,int d)
{
	if(position==1)
	{
		insertAtHead(tail,head,d);
		return;
	}
	Node* temp=head;
	int cnt=1;
	while(cnt<position-1)
	{
		temp=temp->next;
		cnt++;
	}
	if(temp->==NULL)
	{
		insertAtTail(tail,head,d);
		return;
	}
	Node* nodeToInsert=new Node(d);
	nodeToInsert->next=temp->next;
	temp->next->prev=nodeToInsert;
	temp->next=nodeToInsert;
	nodeToInsert->prev=temp;
}
void deleteNode(int position,Node* & head)
{
	if(position==1){
		Node* temp=head;
		temp->next->prev=NULL;
		head=temp->next;
		temp->next=NULL;
		delete temp;
	}
	else
	{
		Node* curr=head;
		Node* prev=NULL;
		
		int cnt=1;
		while(cnt<position){
			prev=curr;
			curr=curr->next;
			cnt++;
		}
		curr->prev=NULL;
		prev->next=curr->next;
		curr->next=NULL;
		delete curr;
	}
}
int main()
{
	Node* head=NULL;
	Node* tail=NULL;
	return 0;
}














