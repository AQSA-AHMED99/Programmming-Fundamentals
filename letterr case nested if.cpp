#include <iostream>
using namespace std;
int main(){
char letter = 0; 
	cout<<endl;
	cout<<"Enter a letter = ";
	cin>>letter;
	cout<<endl;
	if (letter >='A')
	{
		if (letter <='Z')
		{
			cout<<"You entered an Upper Case Letter\n\n";
			return 0;
		}
	}

	if (letter >='a')
	{
		if (letter <='z')
		{
			cout<<"You entered a Lower Case Letter\n\n";
			return 0;
		}
	}

	cout<<"You did not enter a letter\n\n";

return 0;
}