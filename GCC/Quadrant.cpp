#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter x coordinate:";
    cin>>x;
    cout<<"Enter y coordinate:";
    cin>>y;
    if(x>0)
    {
        if(y>0)
         cout<<"It is 1st quadrant";
     else
     cout<<"It is 4th quadrant";    
    }
    else if(x<0)
     {
            
        if(y>0)
         cout<<"It is 2nd quadrant";
     else
     cout<<"It is 3rd quadrant";   
}
else
cout<<"origin"; 
}
