//Write program to find unique elements of an array...

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter the elements of array : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i+1<<" =  ";
		cin>>arr[i];
	}
	cout<<"Elements of array are : "<<endl;
	for(int i=0;i<5;i++)
	{
	cout<<arr[i]<<"\t";	
	}
	cout<<"\nUnique elements in array are : "<<endl;
	int count;
	for(int i=0;i<5;i++)
	{
		count=0;
		for(int j=0;j<5;j++)
		{
			if(arr[i]==arr[j])
			{
				if(i!=j)
				{
					count++;
				}
			}
		}
		if(count==0)
		{
			cout<<arr[i]<<"\t";
		}
	}
	return 0;	
}