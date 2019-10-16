#include<iostream>
#include<cstdlib>
using namespace std;
class Node
{
	int data;
	Node *next, *prev;
	public:
		void setData(int item)
		{
			data = item;
		}
		int getData()
		{
			return data;
		}
		void setNext(Node *p)
		{
			next = p;
		}
		Node* getNext()
		{
			return next;
		}
		void setPrev(Node *p)
		{
			prev = p;
		}
		Node* getPrev()
		{
			return prev;
		}
};

class DoublyLinkedList
{
	Node *first, *last;
	public:
		DoublyLinkedList():first(NULL), last(NULL){}
		void insertBegin(int item)
		{
			Node *n = new Node();
			n->setData(item);
			n->setPrev(NULL);
			n->setNext(first);
			first = n;
			if(last == NULL)
				last = n;
		}

		void insertEnd(int item)
		{
			Node *n = new Node();
			n->setData(item);
			n->setNext(NULL);
			n->setPrev(last);
			if(last!=NULL)
			last->setNext(n);
			last = n;
			if(first == NULL)
				first = n;


		}

		int delBeg()
		{
			if(first == NULL)
			{
				cout<<"Empty Linked List\n";
				return -1;
			}
			int temp;
			Node *ptr = first;
			if(first == last)
			{
				temp = ptr->getData();
				first = last = NULL;
				delete ptr;
				return temp;
			}
			first = ptr->getNext();
			temp = ptr->getData();
			first->setPrev(NULL);
			delete ptr;
			return temp;
		}

		int delEnd()
		{
			if(first == NULL)
			{
				cout<<"Empty Linked list\n";
				return -1;
			}
			Node *ptr = last;
			int temp;
			if(first == last)
			{
				temp = ptr->getData();
				first = last = NULL;
				delete ptr;
				return temp;
			}
			last = ptr->getPrev();
			last->setNext(NULL);
			temp = ptr->getData();
			delete ptr;
			return temp;
		}

		void search(int item)
		{
			Node *ptr = first;
			while(ptr/*!=NULL*/)
			{
				if(ptr->getData() == item)
				{
					cout<<"Item present\n";
					return;
				}
				ptr = ptr->getNext();
			}
			cout<<"Not found\n";
		}

		void traverse()
		{
			Node *ptr = first;
			while(ptr!=NULL)
			{
				cout<<ptr->getData()<<"       ";
				ptr = ptr->getNext();
			}
			cout<<endl;
		}
};

int main()
{
	int choice, item;
	DoublyLinkedList ll;
	do
	{
		cout << "1) Insert at beginning of a LL\n2) Insert at end of LL\n3) Delete from beginning\n4) Delete from the End\n5) Search an element\n6) Traverse through all the elements\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the item to input\n";
			cin >> item;
			ll.insertBegin(item);
			ll.traverse();
			break;
		case 2:
			cout << "Enter the item to input\n";
			cin >> item;
			ll.insertEnd(item);
			ll.traverse();
			break;
		case 3:
			ll.delBeg();
			ll.traverse();
			break;
		case 4:
			ll.delEnd();
			ll.traverse();
			break;

		case 5:
				cout<<"Enter item to search\n";
				cin>>item;
				ll.search(item);
				break;
		case 6:
				ll.traverse();
				break;

		default:
			exit(0);
		}
	} while (1);
	return 0;
}
