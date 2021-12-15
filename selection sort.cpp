#include<iostream>
using namespace std;
int main()
{
	int arr[20],temp,i,j;
	cout<<"enter the elements"<<endl;
	for(i=1;i<20;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<10;i++)
	{
		for(j=1;j<20;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"the sorted elements are";
	for(i=1;i<10;i++)
	{
		cout<<arr[i]<<",";
	}
	return 0;
}
