#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the city code(1-5): ";
	cin>>n;
	switch(n)
	{
		case 1:
		cout<<"Karachi";
		break;
			case 2:
		cout<<"Islamabad";
		break;
			case 3:
		cout<<"Okara";
		break;
			case 4:
		cout<<"Lahore";
		break;
			case 5:
		cout<<"Gujranwala";
		break;
		default:
			cout<<"wrong Code!";
		}
	}
	