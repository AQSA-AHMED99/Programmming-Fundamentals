#include<iostream>
using namespace std;
int main()
{
	double newbal,balance,amount,charges;
	char services;
	cout<<"Enter the Balance: ";
	cin>>balance;
	cout<<"Enter the amount: ";
	cin>>amount;
	cout<<"Enter Services:";
	cin>>services;
	switch(services)
	{
		case 'd':
		case 'D':
		charges=0.05*amount;
		newbal=balance+amount-charges;
		cout<<"Total balance: "<<newbal<<endl;
		cout<<"charges=0.5%";
		break;
		case 'w':
		case'W':
		charges=0.015*amount;
		newbal=balance-amount-charges;
		cout<<"Remaining balance: "<<newbal<<endl;
		cout<<"charges=1.5%";
		break;
		case 't':
		case'T':
		charges=0.025*amount;
		newbal=balance+amount-charges;
		cout<<"Remaining balance: "<<newbal<<endl;
		cout<<"charges=2.5%";
		break;
		default:
		cout<<"Invalid Entry!";	
	}
	return 0;
}
