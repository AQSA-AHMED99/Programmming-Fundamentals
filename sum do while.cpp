#include<iostream>
using namespace std;
int main()
{ 
int i,n,sum=0;
do
{
	cout<<"Enter a positive integer: ";
cin>>n;
}
while(n>0);
{
for(i=1;i<=n;i++)
sum=sum+i;
cout<<"Sum= "<<sum;
}
return 0;
}



