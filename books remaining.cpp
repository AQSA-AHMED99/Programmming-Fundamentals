#include<iostream>
using namespace std;
int main()
{
    int totalBooks, borrowedBooks, remainingBooks;
    cout << "Enter the total number of library books: ";
    cin >> totalBooks;
 remainingBooks = totalBooks; 
 for (int day = 1; day <= 7; day++) 
 {
        cout << "Enter the number of books borrowed on day " << day << ": ";
        cin >> borrowedBooks;
        while (borrowedBooks > remainingBooks) 
		{
            cout << "Error! Borrowed books cannot exceed the remaining books. Enter again: ";
            cin >> borrowedBooks;
        }
remainingBooks -= borrowedBooks;
    }
cout << "\nTotal books available at the end of the week: " << remainingBooks << endl;

    return 0;
}