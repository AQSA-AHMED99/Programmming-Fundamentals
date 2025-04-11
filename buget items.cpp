#include <iostream>
using namespace std;
int main() 
{
    const int items = 3; 
    const int months = 12; 
    double budget[items][months];
    for (int i = 0; i < items; i++) 
	{
		cout << "Enter the budget amount for item " << i+1 <<endl;
        for (int j = 0; j < months; j++)
		 {
            
			cout<<"For  month " << j+1 << ": ";
            cin >> budget[i][j];
        }
}
    for (int i = 0; i < items; i++)
	 {
        for (int j = 0; j < months; j++)
		 {
            cout << "Budget amount for item " << i+1 << " and month " << j+1 << ": " << budget[i][j] <<" Rs."<< endl;
        }
    }

    return 0;
}

