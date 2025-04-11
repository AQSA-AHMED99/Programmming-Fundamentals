#include<iostream>
using namespace std;
int main()

{
	int i=1,n;
	cout<<"enter any no: ";
	cin>>n;
	
	do
		{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		i++;
	}
	
	while(i<=10);

	
	
	
	return 0;
}