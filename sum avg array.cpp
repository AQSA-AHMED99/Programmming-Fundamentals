#include<iostream>
using namespace std;
int main()
{
	int size=2;
	int num[2];
	float sum,average;
	cout<<"Enter 1st number: ";
	cin>>num[0];
	cout<<"Enter 2nd number: ";
	cin>>num[1];
	sum= num[0]+num[1];
	average=sum/2;
	cout<<"The sum of two numbers is: "<<sum<<endl;
	cout<<"The average of two numbers is: "<<average<<endl;
	return 0;
}