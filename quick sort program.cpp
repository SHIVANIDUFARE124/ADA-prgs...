#include<iostream>
using namespace std;
void swap(int* x,int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int partition(int array[],int low,int high)
{
	int pivot=array[high];
	int swapIndex=(low-1);
	for(int j=low;j<=high-1;j++)
	{
		if (array[j]<pivot)
		{
			swapIndex ++;
			swap(&array[swapIndex],&array[j]);
		}
	}
	swap(&array[swapIndex+1],&array[high]);
	return(swapIndex+1);
}
void quicksort(int array[],int low,int high)
{
	if(low<high)
	{
		int indexPI=partition(array,low,high);
		quicksort(array,low,indexPI-1);
		quicksort(array,indexPI+1,high);
	}
}
void display(int array[],int size)
{
	int i;
	for(i=0;i<size;i++)
	cout<<array[i]<<"\t";
	
}
int main()
{
	int array[]={10,16,8,12,15,6,3,9,5};
	int size=sizeof(array)/sizeof(array[0]);
	cout<<"Before sorting:\n";
	display(array,size);
	quicksort(array,0,size-1);
	cout<<"After sorting:\n";
	display(array,size);
	return 0;
}
