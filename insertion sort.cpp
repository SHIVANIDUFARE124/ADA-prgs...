#include<iostream>
using namespace std;
 int main()
 {
 	int a[50],n,i,j,temp;
 	cout<<"enter the size of array";
 	cin>>n;
 	cout<<"enter the array elements:";
 	for(i=0;i<n;i++)
 	cin>>a[i];
 	for(i=1;i<n;i++)
 	{
 		temp=a[i];
 		j=i-1;
 		while(j>=0&&a[j]>temp)
 		{
 			a[j+1]=a[j];
 			j--;
		 }
		 a[j+1]=temp;
	 }
	 cout<<"\narray after insertion sort";
	 for(i=0;i<n;i++)
	 cout<<"\t "<<a[i];
	 return 0;
 }
