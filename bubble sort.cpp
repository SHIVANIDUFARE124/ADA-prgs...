#include<iostream>
using namespace std;
int main()
{
	int a[5],n,i,j,temp;
	cout<<"enter the size of array:";
	cin>>n;
	cout<<"enter the array element:";
	for(i=0;i<n;++i)
	cin>>a[i];
	for(i=1;i<n;++i)
	{
	for(j=0;j<(n-1);++j)
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
}
cout<<"Array after bubble sort:";
for(i=0;i<n;++i)
cout<<""<<a[i];
return 0;
}
