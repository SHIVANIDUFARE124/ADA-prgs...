#include<iostream>
using namespace std;
int main()
{
	int n,i,a,low,high,mid;
	cout<<"enter the number of elements:";
	cin>>n;
	int array[n];
	cout<<"enter the number of element in sorted manner\n";
	for(i=0;i<n;i++)
	cin>>array[i];
	cout<<"enter the value to find";
	cin>>a;
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(array[mid]<a)
		low=mid+1;
		else if(array[mid]==a)
		{
			cout<<"found at the location"<<a<<mid+1;
			break;
		}
		else
		high=mid-1;
		mid=(low+high)/2;
		
	}
	if(low>high)
	cout<<"not present in the array"<<a;
	return 0;
}
