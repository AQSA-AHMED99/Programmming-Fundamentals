#include<iostream>
using namespace std;
int main()
{
	long total,salary,elebill,gasbill,waterbill,hr,loan,sav;
	cout<<"Enter your total salary: ";
	cin>>salary;
	cout<<"Enter your electricity bill: ";
	cin>>elebill;
	cout<<"Enter your gas bill: ";
	cin>>gasbill;
	cout<<"Enter your water bill: ";
	cin>>waterbill;
	cout<<"Enter your house rent: ";
	cin>>hr;
 total=elebill+gasbill+waterbill+hr;
	if(total>salary)
	{
		loan=total-salary;
		cout<<"Your expenses are more than salary!\n you must need "<<loan<<" loan to fulfil bills.";
	}
	else
	{
		sav=salary-total;
		cout<<"Your saving is "<<sav<<" rupees.";
	}
}
