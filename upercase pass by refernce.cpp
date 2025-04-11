#include <iostream>
#include <cctype>
using namespace std;  
void convertToUpperCase(string &inputString) 
{
    for (char &c : inputString) 
	{
        c =toupper(c);
    }
}

int main() {
   string input;
    cout << "Enter a string: ";
    getline(cin, input);
    convertToUpperCase(input);
    cout << "Uppercase string: " << input << endl;

    return 0;
}