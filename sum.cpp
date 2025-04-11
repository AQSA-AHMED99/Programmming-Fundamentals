#include<iostream>
using namespace std;
int main()
{
	int n=0,sum=0;
	while(n!=100)
	{
	cout<<"Enter the integer to sum and 100 to exist: ";
   cin>>n;
  sum=sum+n;
cout<<"Sum= "<<sum<<endl;	
}
}