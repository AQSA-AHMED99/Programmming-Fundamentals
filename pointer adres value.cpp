#include<iostream>
using namespace std;
int main()
{
	int var=5;
	int *pointerVar=&var;
	cout<<"var = "<<var<<endl;
	cout<<"Address of var = "<<pointerVar<<endl;
	cout<<"pointerVar = "<<pointerVar<<endl;
	cout<<"Content of the address pointed to by pointVar = "<<*pointerVar;
}