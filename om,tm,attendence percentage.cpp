#include<iostream>
using namespace std;
int main()
{
	double om,tm;
	float ap,per;
	cout<<"Enter the obtained marks: ";
	cin>>om;
	cout<<"Enter the total marks: ";
	cin>>tm;
	cout<<"Enter the attendence percentage: ";
	cin>>ap;
	if(ap>85 && om>40)
	{
		per=(om/tm)*100;
		cout<<"Percentage= "<<per;
	}
	else if(om<40)
	{
	cout<<"Failed";	
	}
	else if(ap<85)
	{
		cout<<"Not Eligible";
	}
	else
	cout<<"Invalid!";
}
	