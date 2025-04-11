
#include <iostream>

using namespace std;

int main(){

	char coffee;
	char donuts;
	
	cout<<"Do you need Coffee (y/n): ";
	cin>>coffee;
	cout<<"Do you need Donuts (y/n): ";
	cin>>donuts;

	if (coffee == 'y')
	{
		if (donuts == 'y')
			cout<<"you have coffee and donuts"<<endl;
		else
			cout<<"you have coffee, but not donuts\n";
	}
	else if (donuts == 'y')
	{
			cout<<"you have donutes but not coffee\n";
	}
	else
			cout<<"you have nothing\n";

return 0;
}//end of main()