#include<iostream>
using namespace std;
int main()
{
 int i,size=4,positive=0,negative=0;
	int n[size];
	for(i=0;i<4;i++)
	{
		cout<<"Enter the number: "<<endl;
		cin>>n[i];	
	}
	for(i=0;i<4;i++)
	{
		if(n[i]>=0)
		{
		positive++;	
		}
		else
		{
			negative++;	
		}
	}
	cout<<"Total positive numbers= "<<positive<<endl;
	cout<<"Total negative numbers= "<<negative;
}