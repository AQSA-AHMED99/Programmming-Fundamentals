#include<iostream>
using namespace std;
void addition(int a, int b)
{ int c;
	c=a+b;
	cout<<"Addition= "<<c;
}
void subtract(int a, int b)
{ 
	cout<<"Subtraction= "<<a-b;
}
void division(int a, int b)
{ 
	cout<<"Division= "<<a/b;
}
void muiltiply(int a,int b)
{ 
	cout<<"Muiltiplication= "<<a*b;
}
int main()
{
	string choice;
int a,b;
cout<<"Enter the two values for the calculator: "<<endl;
cin>>a>>b;
cout<<"What do you want?(add/minus/multiply/divide)"<<endl;
cin>>choice;
if(choice=="add")
{
addition(a,b);
}
if(choice=="minus")
{
 subtract(a,b);
}
if(choice=="divide")
{
division(a,b);
}
if(choice=="multiply")
{
muiltiply(a,b);
}
return 0;
}


