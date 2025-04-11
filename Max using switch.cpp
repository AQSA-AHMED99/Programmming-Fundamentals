#include<iostream>
using namespace std;
int main()
 {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
   int result;
     switch ((num1 > num2) + 2 * (num1 < num2)) 
{
        case 1:
            result = num1;
            break;
        case 2:
            result = num2;
            break;
        default:
            cout << "Both numbers are equal.";
            return 0;
    }

    cout << "The maximum between " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}