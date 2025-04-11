#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 5;
int i = 5;
void menu()
{
    cout << "Press 1 to display." << endl;
    cout << "Press 2 to add." << endl;
    cout << "Press 3 to update" << endl;
    cout << "Press 4 to delete" << endl;
    cout << "Press 5 to exit" << endl;
}

void display(int a[], int size)
{
    for (int j = 0; j < size; j++)
    {
        cout << a[j] << " ";
    }
    cout << endl;
}

void add(int a[], int & size)
{
	display(a,size);
	int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    a[size++]=n;
    cout << "Value added successfully!" << endl;
    display(a,size);
}

void update(int a[],int size)
{
	display(a,size);
    int index;
    cout << "Enter the index you want to update: " << endl;
    cin >> index;
    if (index >= 0 && index < size)
    {
        cout << "Enter the new value: " << endl;
        cin >> a[index];
        cout << "Value updated successfully!" << endl;
        	display(a,size);
    }
    else
    {
        cout << "Invalid index!" << endl;
    }
}

void del(int a[], int & size)
{
		display(a,size);
    int index;
    cout << "Enter the index you want to delete: " << endl;
    cin >> index;
    if (index >= 0 && index < size) 
    {
        for (int j = index; j < i - 1; j++)
        {
            a[j] = a[j + 1];
        }
        i--;
        cout << "Value deleted successfully!" << endl;
        	display(a,size);
    }
    else
    {
        cout << "Invalid index!" << endl;
    }
}

int main()
{
  char choice;
    int a[MAX_SIZE] = {36, 56, 89, 78, 71};
    int size=MAX_SIZE;
        menu();
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice)
        {
        case '1':
            display(a,size);
            break;
        case '2':
            add(a,size);
            break;
        case '3':
            update(a,size);
            break;
        case '4':
            del(a,size);
            break;
        case '5':
            exit(0);
        default:
            cout << "Invalid entry! " << endl;
        }
     

    return 0;
}