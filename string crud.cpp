#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 10; 
void displaymenu() 
{
    cout << "What do you want?"<<endl;
    cout << "1. Create Element\n";
    cout << "2. Read Element\n";
    cout << "3. Update Element\n";
    cout << "4. Delete Element\n";
    cout << "5. Exit\n";
}
void display(const string arr[], int size)
 {
    cout << "Array Elements: ";
    for (int i = 0; i < size; i++)
	 {
    cout << arr[i] << " ";
    }
    cout <<endl;
}
void create(string arr[], int& size)
 {
    
    string newElement;
    cout << "Enter the new element: ";
    cin >> newElement;
    arr[size++] = newElement;
     cout << "Element added successfully."<<endl;
      for(int k=0;k<size;k++)
    {
    	display(arr,size);
    	break;
	}
    
}
void update(string arr[], int size)
 {
    display(arr, size);
   int index;
    cout << "Enter the index of the element to update: ";
    cin >> index;
   if (index >= 0 && index < size) 
   {
    string updatedvalue;
    cout << "Enter the updated value: ";
    cin >> updatedvalue;
    arr[index] = updatedvalue;
    cout << "Element updated successfully.\n";
    for(int k=0;k<size;k++)
    {
    	display(arr,size);
    	break;
	}
    }
	else 
	 {
        cout << "Invalid index. Cannot update element.\n";
    }
}

void del(string arr[], int& size)
 {
    display(arr, size);
 int index;
    cout << "Enter the index of the element to delete: ";
    cin >> index;
 if (index >= 0 && index < size) 
 {
        for (int i=index;i<size-1;i++) 
		{
            arr[i] = arr[i+1];
        }
        size--;
		cout << "Element deleted successfully."<<endl;
		for(int k=0;k<size;k++)
    {
    	display(arr,size);
    	break;
	}
    } 
	else 
	{
    cout << "Invalid index. Cannot delete element."<<endl;
    }
}
int main()
 {
    string currencyarray[MAX_SIZE] = {"pkr", "dollar", "yuan", "euro", "franc","riyal","dram","lira","dinar","taka"};
    int arraysize = MAX_SIZE;
  char choice;
        displaymenu();
        cout << "Enter your choice: ";
        cin >> choice;
    switch (choice)
	 {
            case '1':
                create(currencyarray, arraysize);
                break;
            case '2':
                display(currencyarray, arraysize);
                break;
            case '3':
                update(currencyarray, arraysize);
                break;
            case '4':
                del(currencyarray, arraysize);
                break;
            case '5':
                cout<<"Program exits!"<<endl;
                break;
            default:
            cout << "Invalid choice. Please try again.\n";
        }
    

    return 0;
}

