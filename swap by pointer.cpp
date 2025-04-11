#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int v=*a;
	*a=*b;
	*b=v;
}
int main()
{
	int x=35,y=89;
	cout<<"Value of x before swap = "<<x<<endl;
	cout<<"Value of y before swap = "<<y<<endl;
	cout<<"***************************"<<endl;
	swap(&x,&y);
	cout<<"Value of x after swap  = "<<x<<endl;
	cout<<"Value of y after swap  = "<<y<<endl;
	
	return 0;
}