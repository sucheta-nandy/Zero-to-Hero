#include<iostream>
using namespace std;
int main()
{
	int size,temp,i,j;
	cout<<"Enter the number of elements in the array :";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of the array : ";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nThe unsorted array is : ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(i=1;i<size;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\nThe sorted array is : ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
