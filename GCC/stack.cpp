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


class Stack
{
	Node* top=NULL;
	public:
		void push(int data){
			Node* node = new Node();
			node->setData(data);
			if (top==NULL)
				node->setNext(NULL);
			else
				node->setNext(top);
			top = node;
		};
		int pop(){
			Node *ptr;
			ptr=top;
			if (top==NULL){
				cout<<"stack underflow\n";
				return 0;
			}
			else if (top->getNext()==NULL)
				top=NULL;
			else
				top=ptr->getNext();				
			int temp=ptr->getData();
			free(ptr);
			return temp;			
		};
		int peek(){
			return top->getData();
		};
		void print(){
			Node* top = this->top;
			while(top){
				cout << top->getData() <<endl;
				top = top->getNext();
			}
		};
};


int main()
{
	int choice, inp;
	Stack* stack = new Stack();
	do
	{
		cout<<"1 - Insert \n2 - Delete \n3 - Peek \n4 - View\n5 - Exit\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
					cout<<"Enter the item you want to insert\n";
					cin>>inp;
					stack->push(inp);
					stack->print();
					break;
			case 2:
					stack->pop();
					stack->print();
					break;
			case 3:
					cout<<stack->peek()<<endl;
					break;
			case 4:
					stack->print();
					break;
			default:
					exit(0);
		}
	}while(1);
	return 0;
}
