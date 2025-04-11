#include<iostream>
using namespace std;
int main()
{
	int n,c,sum;
	sum=0;
	c=1;
	cout<<"Enter a number: ";
	cin>>n;
	while(c<=n)
	{
		
		sum=sum+c;
		c=c+2;
		}
	cout<<"sum = "<<sum;
}
