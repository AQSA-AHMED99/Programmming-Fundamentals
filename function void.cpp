#include<iostream>
using namespace std;
void CalculateAreaCircle(double radius)
{
	double area,pi=3.14;
	area=pi*radius*radius;
	cout<<"Area of circle= "<<area;
}

int main()
{
	double radius;
cout<<"Enter the value of radius to calculate area of a circle: "<<endl;
cin>>radius;

CalculateAreaCircle(radius);

}
