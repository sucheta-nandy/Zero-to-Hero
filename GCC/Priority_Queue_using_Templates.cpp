#include<iostream>
using namespace std;
template <class T>
class PriorityQueue
{
	T *data;
	int *prio;
	int size;
	static int i;
	public:
		PriorityQueue(int sz):size(sz){data = new T[sz];prio = new int[sz];}
		void insert(T item, int pr)
		{
			//static int i = -1;
			i++;
			data[i] = item;
			prio[i] = pr;
			//cur_pos = i;
			for(int x = 0;x<=i;x++)
			{
				for(int y = 0;y<=i-x-1;y++)
					if(prio[y]>prio[y+1])
					{
						T temp1;
						int temp2;
						temp1 = data[y];
						data[y] = data[y+1];
						data[y+1] = temp1;
						temp2 = prio[y];
						prio[y] = prio[y+1];
						prio[y+1] = temp2;
					}
			}
		}
		
		void pop()
		{
			T temp1;int temp2;
			temp1 = data[i];
			temp2 = prio[i--];
			cout<<"The popped element is\t"<<temp1<<endl;
			cout<<"The Priority of the popped element is\t"<<temp2<<endl;
		}
		void display()
		{
			int j;
			for(j=0;j<=i;j++)
				cout<<data[j]<<"\t"<<prio[j]<<endl;
		}
};
template<typename T>
int PriorityQueue<T>::i = -1;

int main()
{
	PriorityQueue<int> p(3);
	p.insert(10, 4);
	p.insert(20, 7);
	p.insert(30, 3);
	p.display();
	p.pop();
	p.display();
}
