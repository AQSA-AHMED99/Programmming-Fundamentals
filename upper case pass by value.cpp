#include <iostream>
#include <cctype>
using namespace std;
string convertToUpperCase(string inputString) 
{
    for (char &c : inputString) 
	{
        c = toupper(c);
    }
    return inputString;
}

int main() 
{
    
    string input,output;
    cout << "Enter a string: ";
    getline(cin, input);
   output = convertToUpperCase(input);
     cout << "Uppercase string: " << output << endl;

    return 0;
}