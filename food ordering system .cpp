#include <iostream>
#include <string>
#include <iomanip>
#include<windows.h>
#include <limits>
#include <conio.h>


using namespace std;


const int MAX_MENU_ITEMS = 100;

struct MenuItem {
    int id;
    string name;
    int quantity;
    double price;
};

struct OrderItem {
    string name;
    int quantity;
    double price;
    double total;
    string feedback;  
};

struct User {
    string username;
    string password;
    bool isStaff;
};
struct OrderHistory {
    OrderItem orderedItems[MAX_MENU_ITEMS];
    int orderedItemCount;
    double total;
    string feedback;
};
string getPassword() {
    string password = "";
    char ch;
    while (true) {
    	// We Use _getch() to get a character without echo
        ch = _getch(); 
        if (ch == 13) { // Enter key
            break;
        } else if (ch == 8) { // Backspace
            if (!password.empty()) {
                cout << "\b \b"; // Move cursor back, erase character, move cursor back again
               password = password.substr(0, password.length() - 1);

            }
        } else {
            password += ch;
            cout << '*'; // Print a '*' for each character
        }
    }
    cout << endl; // Move to the next line after entering the password
    return password;
}


bool authenticateUser(const User users[], int userCount, const User customers[], int customerCount, string username, string password, bool& isStaff) {
    // Check in the staff (users) array
    for (int i = 0; i < userCount; i++) {
        if (users[i].username == username && users[i].password == password) {
            isStaff = users[i].isStaff;
            return true;
		 // Authentication successful
        }
    }

    // Check in the customer array
    for (int i = 0; i < customerCount; i++) {
        if (customers[i].username == username && customers[i].password == password) {
        	// Customers are not staff
            isStaff = false; 
            return true;
			 // Authentication successful
        }
    }

    return false;
	 // Authentication failed
}


void addItem(MenuItem menu[], int& itemCount) {

    // Code to add a new menu item
    if (itemCount < MAX_MENU_ITEMS) {
        MenuItem newItem;
        cout << "Enter item details:" << endl;
        cout << "ID: ";
        cin >> newItem.id;
        cout << "Name: ";
        cin.ignore();
		 // Ignore the newline character left in the buffer
        getline(cin, newItem.name);
        cout << "Quantity: ";
        cin >> newItem.quantity;
        cout << "Price: ";
        cin >> newItem.price;

        menu[itemCount++] = newItem;
        cout << "Item added successfully." << endl;
    } else {
        cout << "Cannot add more items. Menu is full." << endl;
    }
}

void displayMenu(const MenuItem menu[], int itemCount) {
    cout << "Menu items:" << endl;
    for (int i = 0; i < itemCount; i++) {
        cout << "ID: " << menu[i].id << "\t\tName:" << menu[i].name << "\t\tQuantity: \t\t" << menu[i].quantity << "\tPrice: " << menu[i].price << endl;
    }
}

void updateItem(MenuItem menu[], int itemCount) {
    int id;
    cout << "Enter the ID of the item to update: ";
    cin >> id;

    for (int i = 0; i < itemCount; i++) {
        if (menu[i].id == id) {
            // Code to update the details of the item
            cout << "Enter new item details:" << endl;
            cout << "Name: ";
            cin.ignore();
			 // Ignore the newline character left in the buffer
            getline(cin, menu[i].name);
            cout << "Quantity: ";
            cin >> menu[i].quantity;
            cout << "Price: ";
            cin >> menu[i].price;

            cout << "Item details updated successfully." << endl;
            return;
        }
    }

    cout << "Item not found." << endl;
}

void deleteItem(MenuItem menu[], int& itemCount) {
    int id;
    cout << "Enter the ID of the item to delete: ";
    cin >> id;

    for (int i = 0; i < itemCount; i++) {
        if (menu[i].id == id) {
            // Shift elements to fill the gap
            for (int j = i; j < itemCount - 1; j++) {
                menu[j] = menu[j + 1];
            }
            itemCount--;
            cout << "Item deleted successfully." << endl;
            return;
        }
    }

    cout << "Item not found." << endl;
}void generateBill(const OrderItem orderedItems[], int orderedItemCount, double total, double amountGiven) {
	
	 system("PAUSE");  
       system("cls");
       
                        cout<<"\n\t\t       *******************************************************\n";
                        cout<<"\t\t       %%%%%%%%%%%%%%%%%%        Bill        %%%%%%%%%%%%%%%%%\n";
                        cout<<"\t\t       *******************************************************\n";
    
    
    cout << "\nYou have ordered:" << endl;
    cout << " Product Name\t\tQuantity\t\tPrice\t\tTotal " << endl;

    for (int i = 0; i < orderedItemCount; i++) {
        cout << orderedItems[i].name << "\t\t\t" << orderedItems[i].quantity << "\t\t\tPhp " << orderedItems[i].price << "\t\t\tPhp " << orderedItems[i].total << endl;
    }

    cout << "------------------------------------------------------------------" << endl;
    cout << "Total:\t\t\t\t\t\t\t\t\tPhp " << total << endl;

 

    // Calculate change
    double change = amountGiven - total;

    // Display amount given and change
    
    cout << "Amount Given:\t\t\t\t\t\t\tRs " << amountGiven << endl;
    cout << "Change:\t\t\t\t\t\t\t\tRs " << change << endl;

    // If the amount given is less than the total, indicate the remaining amount to be paid
    
    if (amountGiven < total) {
        cout << "Remaining Amount to Pay:\t\t\t\t\tPhp " << total - amountGiven << endl;
    }
      system("PAUSE");  
       system("cls");
    // Obtain feedback from the customer
    
    string feedback;
    cout << "Provide feedback for the order: ";
    cin.ignore();
    getline(cin, feedback);

    // Display feedback
    cout << "Feedback: " << feedback << endl;
    
    //this will  gather feedback on the next screen after generating the bill.
    system("PAUSE");  
       system("cls");
      
    cout<<"\n\t\t===================================================================";
	cout<<"\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    cout << "\n\t\t\t\t      Thank You See You Again!";
	cout<<"\n\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    cout<<"\n\t\t==================================================================="<<endl;
    
}

void takeOrder(const MenuItem menu[], int itemCount) {
    cout << "MENU:" << endl;
    displayMenu(menu, itemCount);

    cout << "\nPlace your order (Enter item ID and quantity, enter -1 to finish):" << endl;

    int id, quantity;
    double total = 0.0;
    OrderItem orderedItems[MAX_MENU_ITEMS];
    int orderedItemCount = 0;

    while (true) {
        cout << "Item ID: ";
        cin >> id;

        if (id == -1) {
            break;
        }

        bool found = false;
        for (int i = 0; i < itemCount; i++) {
            if (menu[i].id == id) {
                found = true;
                cout << "Quantity for " << menu[i].name << ": ";
                cin >> quantity;

                if (quantity > 0) {
                    total += menu[i].price * quantity;

                    // Store ordered item details
                    orderedItems[orderedItemCount].name = menu[i].name;
                    orderedItems[orderedItemCount].quantity = quantity;
                    orderedItems[orderedItemCount].price = menu[i].price;
                    orderedItems[orderedItemCount].total = menu[i].price * quantity;
                    orderedItemCount++;
                } else {
                    cout << "Invalid quantity. Please enter a positive value." << endl;
                    // Re-ask for the same item
                    i--; 
                }

                break;
            }
        }

        if (!found) {
            cout << "Invalid item ID. Please enter a valid ID." << endl;
        }
    }

    // Obtain the amount given by the user
    double amountGiven;
    cout << "Enter the amount given by the customer: ";
    cin >> amountGiven;
    // Call generateBill with the amountGiven and feedback
    generateBill(orderedItems, orderedItemCount, total, amountGiven);
}




void title(){

	system("color 0A");
	
	cout<<"\n\n\n\n";
	cout<<"\t\t    ********    **    **   ********    ******     *******   ******** \n";
 	cout<<"\t\t   /**    **   /**   /**  /**    **  /**    **   /**       /**    ** \n";
 	cout<<"\t\t   /*********  /**   /**  /********  /**   ****  /******   /******** \n";
 	cout<<"\t\t   /**     **  /**   /**  /**  /**   /**    **   /**       /**  /**  \n";
 	cout<<"\t\t   /*********  //******   /**  //**  //******    /*******  /**  //** \n";
 	cout<<"\t\t   /////////    //////    //    //    //////     ///////   //    //\n\n\n";
 

	cout<<"\t\t\t**    **   **    **    ********\n";
	cout<<"\t\t\t/**   /**  /**   /**  /*** * * *          \n";
	cout<<"\t\t\t/********  /**   /**  /*********      \n";
	cout<<"\t\t\t/**   /**  /**   /**  /**     **          \n";
	cout<<"\t\t\t/**   /**  //******   /*********    \n";
	cout<<"\t\t\t//    //    //////    /////////  \n";
	cout<<"\t\t\t         ------------         \n\n";
	cout<<"\t\t\t\t      ";
	
  Sleep(2000);
  system("cls");
}


int main() {
	 title();
    const int MAX_USERS = 10; 
	// Increase the maximum number of users
    const int MAX_CUSTOMERS = 5; 
	// Set a maximum number of customers
    User users[MAX_USERS] = {
        {"ayesha", "ayesha1", true},
        {"customer1", "pass1", false},
        {"rakshanda" , "rakshanda1" , true},
        {"customer2", "pass2", false},
        {"staff2", "staffpass2", true}
    };

    User customers[MAX_CUSTOMERS];
	 // Array to store customer registrations
    int customerCount = 0; 
    
	// Variable to keep track of the number of registered customers

    MenuItem menu[MAX_MENU_ITEMS];
    int itemCount = 0;
   
	
    // Add sample menu items
    menu[itemCount].id = 1;
    menu[itemCount].name = "Rolls";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 35.0;
    itemCount++;

    menu[itemCount].id = 2;
    menu[itemCount].name = "Pizza";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 12.0;
    itemCount++;
    
    menu[itemCount].id = 3;
    menu[itemCount].name = "Sandwitch";
    menu[itemCount].quantity =10 ;
    menu[itemCount].price = 20.0;
    itemCount++;
    
    menu[itemCount].id = 4;
    menu[itemCount].name = "Nuggest";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 25.0;
    itemCount++;
    
    menu[itemCount].id = 5;
    menu[itemCount].name = "Coke";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 17.0;
    itemCount++;
    
    menu[itemCount].id = 6;
    menu[itemCount].name = "Icecream";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 20;
    itemCount++;
    
    menu[itemCount].id = 7;
    menu[itemCount].name = "Water";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 15.0;
    itemCount++;
    
    menu[itemCount].id = 8;
    menu[itemCount].name = "Fries";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 50.0;
    itemCount++;
    
    menu[itemCount].id = 9;
    menu[itemCount].name = "Burger";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 35.0;
    itemCount++;
    
    menu[itemCount].id = 10;
    menu[itemCount].name = "Sprite";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 17.0;
    itemCount++;
    
    menu[itemCount].id = 11;
    menu[itemCount].name = "Paratha";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 10;
    itemCount++;
    
    menu[itemCount].id = 12;
    menu[itemCount].name = "Chai";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 70;
    itemCount++;
    
    menu[itemCount].id = 13;
    menu[itemCount].name = "Salad";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 5.0;
    itemCount++;
    
    menu[itemCount].id = 14;
    menu[itemCount].name = "Briyani";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 50.0;
    itemCount++;
    
    menu[itemCount].id = 15;
    menu[itemCount].name = "Macroni";
    menu[itemCount].quantity = 10;
    menu[itemCount].price = 40.0;
    itemCount++;

 // User authentication and registration
    bool isAuthenticated = false;
    bool isStaff = false;
    string username, password;
    const int MAX_LOGIN_ATTEMPTS = 3;
    int loginAttempts = 0;

do {
    cout << "1. Login\n2. Register\nEnter your choice: ";
    int loginChoice;
    cin >> loginChoice;

    if (loginChoice == 1) {
        // Login
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        password = getPassword();

        isAuthenticated = authenticateUser(users, MAX_USERS, customers, customerCount, username, password, isStaff);

        if (!isAuthenticated) {
            cout << "Authentication failed. Please try again." << endl;
            loginAttempts++;

            if (loginAttempts >= MAX_LOGIN_ATTEMPTS) {
                cout << "Maximum login attempts reached. Exiting..." << endl;
                isAuthenticated = false;
            }
        }
    } else if (loginChoice == 2) {
        // Register as a customer
            if (customerCount < MAX_CUSTOMERS) {
                cout << "Enter username for registration: ";
                cin >> customers[customerCount].username;

                cout << "Enter password for registration: ";
                customers[customerCount].password = getPassword();

                customers[customerCount].isStaff = false;

                cout << "Registration successful. You can now login." << endl;
                customerCount++;
            } else {
                cout << "Cannot register more customers. Maximum limit reached." << endl;
            }
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }

    
} while (!isAuthenticated);

// Main menu loop (only accessible to authenticated staff)
// Main menu loop (accessible to authenticated users, both staff and customers)
while (isAuthenticated) {
    if (isStaff) {
        // Staff Menu
        int staffChoice;
        cout << "\n\n\t\tMENU MANAGEMENT SYSTEM (STAFF)" << endl;
        cout << "\t\t---------------------------------" << endl;
        cout << "\t\t1. Add item" << endl;
        cout << "\t\t2. Update item" << endl;
        cout << "\t\t3. Delete item" << endl;
        cout << "\t\t4. Display items" << endl;
        cout << "\t\t5. Exit" << endl;
        cout << "\t\tEnter your choice: ";
        cin >> staffChoice;

        switch (staffChoice) {
            case 1:
                addItem(menu, itemCount);
                break;
            case 2:
                updateItem(menu, itemCount);
                break;
            case 3:
                deleteItem(menu, itemCount);
                break;
            case 4:
                displayMenu(menu, itemCount);
                break;
            case 5:
                cout << "Exiting..." << endl;
                isAuthenticated = false;  // Exit the loop and end the program
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } else {
        // Customer Menu
        int customerChoice;
        cout << "\n\n\t\tCUSTOMER MENU" << endl;
        cout << "\t\t--------------" << endl;
        cout << "\t\t1. View Menu" << endl;
        cout << "\t\t2. Give Order" << endl;
        cout << "\t\t3. Exit" << endl;
        cout << "\t\tEnter your choice: ";
        cin >> customerChoice;

        switch (customerChoice) {
        	
            case 1:
                displayMenu(menu, itemCount);
                break;
            case 2:
                takeOrder(menu, itemCount);
                break;
         
            case 3:
                cout << "Exiting..." << endl;
                isAuthenticated = false; 
				 // Exit the loop and end the program
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
 return 0;
}


// End of the program

