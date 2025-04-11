#include<iostream>
using namespace std;
int main()
{
	double speed,distance,time,s;
	cout<<"Enter the distance(km): ";
	cin>>distance;
	cout<<"Enter the speed(km/h): ";
	cin>>speed;
	time=distance/speed;
	cout<<"The time taken to cover distance of "<<distance<<"km"<<" with speed of "<<speed<<"km/h is "<<time<<"hours";
}
	