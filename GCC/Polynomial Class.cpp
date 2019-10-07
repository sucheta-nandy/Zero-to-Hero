#include<stdlib.h>
#include<iostream>

using namespace std;

class poly
{
    int expo;
    int *coeff;
    
    public:
        poly():expo(1){coeff = (int*) malloc(1*sizeof(int));}
        poly(int x):expo(x){coeff = (int*) malloc(x*sizeof(int));}
        void read()
        {
            cout<<"enter values"<<endl;
            int i;
            for (i=0;i<expo+1;i++)
                cin>>coeff[i];
        }
        void add()
        {
            int i;
            poly obj1(expo),obj2(expo);
            obj1.read();
            obj1.display();
            for (i=0;i<expo+1;i++)
                obj2.coeff[i]=coeff[i]+obj1.coeff[i];
            cout<<"resultant ";
            obj2.display();
        }
        void display()
        {
            cout<<"polynomial: ";
            int i,e=expo;
            for (i=0;i<expo;i++)
            {
                cout<<coeff[i]<<"x^"<<e<<"+";
                e--;
            }
            cout<<coeff[i]<<endl;
        }
};


int main()
{
    int x;
    cout<<"enter degree of polynomial: ";
    cin>>x;
    poly obj(x);
    obj.read();
    obj.display();
    cout<<"enter 2nd polynomial to add"<<endl;
    obj.add();
}
