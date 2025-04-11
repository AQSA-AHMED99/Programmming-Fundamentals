#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	while(true)
	{
	cout<<"Enter the number: ";
	cin>>n;
	if(n==100)
	{
		cout<<"Invalid Entry!";
		break;
		
	}
	sum=n+n;;
	cout<<"The sum = "<<sum<<endl;
	}
	return 0;}