#include<iostream>
using namespace std;
int main() 
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int remainder = number % 2;
    switch (remainder) 
	{
        case 0:
            cout << number << " is an even number.";
            break;
        case 1:
            cout << number << " is an odd number.";
            break;
        default:
            cout << "Invalid input!";
    }

    return 0;
}