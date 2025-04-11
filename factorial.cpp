#include<iostream>
using namespace std;
int main()
{
	int n,f;
	cout<<"Enter the number: ";
	cin>>n;
	f=1;
	while(n>=1)
	{
		f=f*n;
	    n--;
	}
	cout<<"Factorial= "<<f;
}
