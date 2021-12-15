#include<iostream>
using namespace std;
//merge sort sorting algorithm
//merge funcation
void merge(int arr[],int l,int m,int r)
{
	int i=l;//starting index for leftsubarray
	int j=m+1;//starting index for rightsubarray
	int k=l;//starting index for trmporary
	int temp[5];
	while(i<=m && j<=r)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];//arr[i] smaller than arr[j]
			i++;
			k++;
		}
		else
		{
			temp[k]=arr[j];//arr[j] smaller than arr[i]
			j++;
			k++;
		}
	}
	while(i<=m)
	{
		temp[k]=arr[i];//copying all element from left subarray to temp as it is
		i++;
		k++;
	}
	
	while(j<=r)
	{
		temp[k]=arr[j];//copying all element from left subarray to temp as it is
		j++;
		k++;
	}
	for(int s=l;s<=r;s++)
	{
		arr[s]=temp[s];
	}
	
}
//merge sort funcation
void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main()
{
	//int arr[5]
	cout<<"enter 5 element in the array:"<<endl;
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Before Merge sort:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	//merge funcation
	mergesort(arr,0,4);
	cout<<endl<<"after merge sort:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
