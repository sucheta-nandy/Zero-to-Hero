#include<iostream>
#include<cstdlib>
using namespace std;
class Queue
{
	int front = -1, rear = -1;
	int q[10];
	public:
		void Enqueue(int item)
		{
			if(rear==9)
				{
					cout<<"Queue is full\n";
					return;
				}
			else if(front == -1)
				{
					rear = 0;
					front = 0;
				}
			else
					rear = rear + 1;
			q[rear] = item;
		}
		
		int Dequeue()
		{
			int temp;
			if(front == -1)
				{
					cout<<"Empty Queue\n";
					return -1;
				}
			else if(front == rear)
			{
				temp = q[front];
				front = -1;
				rear = -1;
				return temp;
			}
			else
				{
					temp = q[front];
					front  = front + 1;
					return temp;
				}
		}
		
		void Traverse()
		{
			if(front == -1)
				cout<<"Emptu Queue\n";
			cout<<"Queue content is : ";
			for(int i=front;i<=rear&&front!=-1;i++)
				cout<<q[i]<<"   ";
			cout<<endl;
		}
};


int main()
{
	Queue q;
	int choice, inp, deq;
	do
	{
		cout<<"1 - Enqueue\n2 - Dequeue\n3 - Traverse\n4 - Exit\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
					cout<<"Enter the item you want to insert\n";
					cin>>inp;
					q.Enqueue(inp);
					q.Traverse();
					break;
			case 2:
					deq = q.Dequeue();
					if(deq!=-1)
					cout<<"Item removed is "<<deq<<endl;
					q.Traverse();
					break;
			case 3:
					q.Traverse();
					break;
			default:
					exit(0);
		}
	}while(1);
	return 0;
}
