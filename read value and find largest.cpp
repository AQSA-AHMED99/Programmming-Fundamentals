#include <iostream>
using namespace std;
void GreatestVal()
 {
    int value[20];
    cout << "Enter 20 values:"<<endl;
    for (int i = 0; i < 20;i++) 
	{
        cout << "Value no: " <<i + 1 << ": ";
        cin >> value[i];
    }
    int greatestval = value[0];
    for (int i = 1; i <=20; i++)
	 {
        if (value[i] > greatestval)
		 {
            greatestval = value[i];
        }
    }
cout << "The greatest value is: " << greatestval <<endl;
}

int main() {
    GreatestVal();
    return 0;
}
