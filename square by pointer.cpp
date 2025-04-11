#include<iostream>
using namespace std;
int square(int x)
{
   return x*x;	
}
int main()
{
	int number;
	int (*squareptr)(int);
	squareptr=&square;
	cout<<"Enter a number: ";
	cin>>number; 
	int result=squareptr(number);
	cout<<"Square of "<<number<<" is "<<result<<endl;
}