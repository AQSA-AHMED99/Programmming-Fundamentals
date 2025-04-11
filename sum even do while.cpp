#include<iostream>
using namespace std;
int main()
{
	int n,i=0,sum=0;
	cout<<"Enter a number: ";
	cin>>n;
	do
	{
		sum=sum+i;
		i=i+2;
	}
	while(n>=i);
	cout<<"Sum of odd numbers(1-n): "<<sum;
}