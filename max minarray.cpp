#include<iostream>
using namespace std;
int main()
{
 const int size=4;
	int n[size];
	for(int i=0;i<4;i++)
	{
		cout<<"Enter the number: ";
		cin>>n[i];	
	}
	int min=n[0];
	int max=n[0];
		for(int i=0;i<4;i++)
	{
			if(n[i]>max)
		{
		max=n[i];
		}
		if(n[i]<min)
		{
		min=n[i];
		}
			
	}
	
	cout<<"Maximum number of array is "<<max<<endl;
	cout<<"Minimum number of array is "<<min;
	return 0;
}
	