#include<iostream>
using namespace std;
int main()
{
	int arr[]={22,88,99,55,33};
	int i,n=5;
	int j=n,k=2,item=77;
	cout<<"Before Insertion\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	n=n+1;
	while(j>=k)
	{
		arr[j+1]=arr[j];
		j=j-1;
	}
	arr[k]=item;
	cout<<"After Insertion\n";
		for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
}