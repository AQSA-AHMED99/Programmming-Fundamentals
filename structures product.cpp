#include <iostream>
#include <string>
using namespace std;
struct Product {
    int Code;
    string Description;
    char packaging;
    float price;
    float discount;
};

int main() {
	int price;
	float netPrice;
    Product products[10] = {
        {1, "Mango", 'L', 2500.0, 8.0},
        {2, "Bannana", 'M', 285.0, 10.0},
        {3, "Apple", 'L', 600.0, 2.0},
        {4, "Cold drinks", 'S', 1000.0, 8.0},
        {5, "Juice", 'L', 700.0, 4.0},
        {6, "Cake", 'M', 800.0, 3.0},
        {7, "Pizza", 'L', 900.0, 6.0},
        {8, "Burger", 'S', 1500.0, 12.0},
        {9, "Milkshake", 'L', 290.0, 9.0},
        {10, "Aquafina", 'M', 600.0, 4.0}
    };

    cout << "Large packaging products(net pricebetween 200 - 1000) :" << endl;
 for (int i = 0; i< 10; i++) 
 {
    if (products[i].packaging == 'L') 
    netPrice = products[i].price - (products[i].price * products[i].discount / 100.0);
	{
    if(price >= 200.0 && price <= 1000.0)
    cout << "Code: " << products[i].Code << endl;
    cout << "Description: " << products[i].Description << endl;
    cout << "Packaging: " << products[i].packaging << endl;
    cout << "Net Price: " << price << endl;
        
        }
    }

    return 0;
}
