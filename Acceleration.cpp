#include<iostream>
using namespace std;
int main()
{
	int force,time,mass,a;
	cout<<"Enter force(newton): ";
	cin>>force;
	cout<<"Enter time(minutes): ";
	cin>>time;
	cout<<"Enter mass(kg): ";
	cin>>mass;
	a=force/mass;
	cout<<"Acceleration= "<<a;
	}