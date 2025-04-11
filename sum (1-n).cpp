#include<iostream>
using namespace std;
int main()
{
	int n,c=1,sum=0;
	cout<<"Enter the number: ";
	cin>>n;
	while(c<=n)
	{
		sum+=c;
		c++;
		}
		cout<<"Sum= "<<sum;
		
}