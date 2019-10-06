#include<iostream.h>
#include<math.h>

long func(long x)
{
    long sum=0,rem;
    while(x>0)
    {
        rem=x%10;
        sum=sum+pow(rem,2);
        x=x/10;
    }
    if(sum>10)
    func(sum);
    else
    return sum;
}

int main()
{
    long a;
    cout<<"\tEnter a number\n";
    cin>>a;
    long y=func(a);
    if(y==1)
        cout<<"Happy Number";
    else
        cout<<"Unhappy Number\n";
}

