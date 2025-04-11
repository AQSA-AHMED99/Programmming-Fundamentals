#include<iostream>
using namespace std;
int main()
{
 int i,size=4,odd=0,even=0;
	int n[size];
	for(i=0;i<4;i++)
	{
		cout<<"Enter the number: "<<endl;
		cin>>n[i];	
	}
	for(i=0;i<4;i++)
	{
		if(n[i]%2==0)
		{
		even++;	
		}
		else
		{
			odd++;	
		}
			}
			cout<<"Even= "<<even<<endl;
	cout<<"Odd= "<<odd;
return 0;
}
	