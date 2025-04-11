#include<iostream>
using namespace std;

class laptop {
    string name;
    double price;
    int year;

public: 
    void data() {
        cout << "Enter the Laptop name: ";
        cin >> name;
        cout << "Enter the Laptop price: ";
        cin >> price;
        cout << "Enter the year: ";
        cin >> year;
    }

    void disp() {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Year: " << year << endl;
    }

    void update() {
        int choice;
        cout << "Which instance you want to update? (1/2/3): ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Updating Laptop 1:" << endl;
                data(); // Reusing the data() function to update the instance
                break;
            case 2:
                cout << "Updating Laptop 2:" << endl;
                data(); // Reusing the data() function to update the instance
                break;
            case 3:
                cout << "Updating Laptop 3:" << endl;
                data(); // Reusing the data() function to update the instance
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    }
};

int main() {
    laptop l1, l2, l3;

    cout << "Enter data for Laptop 1:" << endl;
    l1.data();
    cout << "Enter data for Laptop 2:" << endl;
    l2.data();
    cout << "Enter data for Laptop 3:" << endl;
    l3.data();

    cout << "\nDisplaying Laptop Information:" << endl;
    cout << "Laptop 1:" << endl;
    l1.disp();
    cout << "Laptop 2:" << endl;
    l2.disp();
    cout << "Laptop 3:" << endl;
    l3.disp();

    

    cout << "\nUpdated Laptop Information:" << endl;
    l1.disp();

    return 0;
}
