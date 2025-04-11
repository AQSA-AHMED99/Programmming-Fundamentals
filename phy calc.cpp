#include<iostream>
using namespace std;
int main()
{
	double weight,pressure,distance,acc,mass,force,area,speed,time;
	int choice;
	cout<<"What do you want to calculate?(1=weight,2=pressure,3=distance): ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter the mass(kg): ";
			cin>>mass;
			cout<<"Enter the acceleration due to gravity(m/s*s): ";
			cin>>acc;
			weight=mass*acc;
			cout<<"Weight= "<<weight<<" newton";
			break;
		case 2:
			cout<<"Enter the force(n): ";
			cin>>force;
			cout<<"Enter the area(m*m): ";
			cin>>area;
			pressure=force/area;
			cout<<"Pressure= "<<pressure<<" pascal";
			break;
		case 3:
			cout<<"Enter the speed(m/s): ";
			cin>>speed;
			cout<<"Enter the time(t): ";
			cin>>time;
			distance=speed*time;
			cout<<"Distance= "<<distance<<" kilometer";
			break;
			default:
				cout<<"Invalid entry!\nI am unable to find this!";
				
	}
}