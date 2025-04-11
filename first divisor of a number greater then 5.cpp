#include <iostream>
using namespace std;
int findFirstDivisorGreaterThan5(int number)
 {
    for (int divisor = 6; divisor <= number; ++divisor) 
	{
        if (number % divisor == 0) 
		{
            return divisor;
        }
    }
    
    return -1;  }
int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int divisor = findFirstDivisorGreaterThan5(number);
    if (divisor != -1) 
	{
        cout << "The first divisor of " << number << " greater than 5 is: " << divisor <<endl;
    } else {
        cout << "No divisor greater than 5 found for the given number." << endl;
    }

    return 0;
}