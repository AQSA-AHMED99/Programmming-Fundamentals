#include<iostream>
using namespace std;
int main()
{
	int n,c,sum;
	sum=0;
	cout<<"Enter a +ve integer: ";
	cin>>n;
	for(c=0;c<=n;c=c+2)
	sum=sum+c;
	cout<<sum<<endl;
	
}
