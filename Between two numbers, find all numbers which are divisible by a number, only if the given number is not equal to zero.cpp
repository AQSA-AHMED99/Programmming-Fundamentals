#include <iostream>
using namespace std;
void findDivisibleNumbers(int start, int end, int divisor)
 {
    if (divisor == 0) 
	{
    cout << "Error: Divisor cannot be zero." <<endl;
    return;
    }
cout << "Numbers between " << start << " and " << end << " divisible by " << divisor << ": ";
    for (int i = start; i <= end; ++i) 
	{
        if (i % divisor == 0) 
		{
            cout << i << " ";
        }
    }
cout <<endl;
}
int main() 
{
    int start, end, divisor;
	cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;
    cout << "Enter the divisor (non-zero): ";
    cin >> divisor;
    findDivisibleNumbers(start, end, divisor);

    return 0;
}