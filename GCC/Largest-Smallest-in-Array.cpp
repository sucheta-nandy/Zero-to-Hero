# include <iostream>
using namespace std;
int main()
{
    int n,larg,small;
    int *p;
    cout<<"Enter size of array:";
    cin>>n;
    p=new int[n];
    cin>>p[0];
    small=larg=p[0];
    for(int i=1;i<n;i++)
    {
        cin>>p[i];
        if(small>p[i])
            small=p[i];
        if(larg < p[i])
            larg=p[i];
    }
    
    cout<<"The largest :"<<larg<<endl;
    cout<<"The smallest :"<<small<<endl;
}
