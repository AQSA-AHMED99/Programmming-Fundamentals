#include<iostream>
using namespace std;
int main()
{
	int n,f=1;
	cout<<"Enter the number: ";
	cin>>n;
	do
	{
		f=f*n;
		
		n--;
		}
		while(n>=1);
		cout<<"Factorial= "<<f<<endl;
		
}