#include <iostream>

using namespace std;


class Node
{
	int data;
    Node* next;
    public:
		void setData(int data){
			this->data=data;
		};
		void setNext(Node *ptr){
				next=ptr;
		};
		int getData(){
			return data;
		};
		Node *getNext(){
			return next;
		};
		
};


class Queue
{
	Node* front=NULL;
	Node* rear=NULL;
	public:
		void enqueue(int data){
			Node* node = new Node();
			node->setData(data);
			node->setNext(NULL);
			if (front==NULL){
				front=node;
				rear=node;
			}
			else
			{
				rear->setNext(node);
				rear=node;
			}
		};
		int dequeue(){
			Node *ptr;
			ptr=front;
			if (front==NULL){
				cout<<"empty queue\n";
				return 0;
			}
			else if (front==rear)
			{
				front=NULL;
				rear=NULL;
			}
			else
			{
				front=ptr->getNext();
			}
			int temp=ptr->getData();
			free(ptr);
			return temp;			
		};
		
		void print(){
			Node* front = this->front;
			while(front){
				cout << front->getData() <<endl;
				front = front->getNext();
			}
		};
};


int main()
{
	int choice, inp;
	Queue* queue = new Queue();
	do
	{
		cout<<"1 - Insert \n2 - Delete \n3 - View\n4 - Exit\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
					cout<<"Enter the item you want to insert\n";
					cin>>inp;
					queue->enqueue(inp);
					queue->print();
					break;
			case 2:
					queue->dequeue();
					queue->print();
					break;
			
			case 3:
					queue->print();
					break;
			default:
					exit(0);
		}
	}while(1);
	return 0;
}
