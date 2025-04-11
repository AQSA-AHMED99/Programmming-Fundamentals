#include <iostream>
using namespace std;
int main() 
{
    int n, j;
    int test[15] = {22, 44, 56, 78, 90, 23, 45, 67, 56, 34, 56, 77, 89, 12, 24};
    
    cout << "Enter the number you want to find in the array: ";
    cin >> n;

    bool found = false;
    
    for (j = 0; j < 15; j++) 
	{
        if (n == test[j]) 
		{
			cout << "The number " << n << " is found at the location: ";
            cout << j << "th "<<endl;
            found = true;
        }
    }

    if (!found) 
	{
        cout << "The number is not found in the array!" << endl;
    }

    return 0;
}
	
		
		