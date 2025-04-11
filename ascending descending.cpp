#include<iostream>
using namespace std;
int main() 
{
    char choice;
    int num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
     cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    cout << "Enter (a or A) for ascending order and (d or D) for descending order: ";
    cin >> choice;
    if (choice == 'a'|| choice == 'A')
	 {
        if (num2 > num3)
	{
            swap(num2, num3);
        }
        if (num1 > num2) 
	{
            swap(num1, num2);
        }
        cout << "Numbers in ascending order: " << num1 << ", " << num2 << ", " << num3 << endl;
    } else if (choice == 'd'|| choice == 'D')
	 {
        if (num1 < num2) 
		{
            swap(num1, num2);
        }
        if (num2 < num3) 
		{
            swap(num2, num3);
        }
        if (num1 < num2)
		 {
            swap(num1, num2);
        }
        cout << "Numbers in descending order: " << num1 << ", " << num2 << ", " << num3 << endl;
    } else 
	{
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}
