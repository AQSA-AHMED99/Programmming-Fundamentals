#include<iostream>
using namespace std;
int main()
{
	string password="Filinta",input;
	int count=0;
	do
	{
	cout<<"Enter the Password: ";
	cin>>input;
	count++;
	{
	
	if(input==password)
	{
		cout<<"File is successfully opened."<<endl;
	}
		else 
		{
			cout<<"Password denied! Try again."<<endl;;
		}
	}
}
	while(input!=password && count<3);
	

	
 }