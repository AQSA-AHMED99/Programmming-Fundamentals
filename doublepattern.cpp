#include<iostream>
using namespace std;
int main()
{
	int i,n=5,j,k;
	for(i=1;i<=n;i++)
	{
	for(k=n-i;k>0;k--)
	cout<<" ";	
		for(j=1;j<=i;j++)
		{
		cout<<j;
	}
	cout<<endl;
	}
	for(int m=1;m<=5;m++)
	{
		for(int o=1;o<=5;o++)
		{
				cout<<" ";
		}
	for(int g=m;g>=1;g--)
	{
	cout<<g;	
	}
		cout<<endl;
	}
	
	
}

		
