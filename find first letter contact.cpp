#include<iostream>
#include<string>
using namespace std;
struct contact
{
   string name;
    string address;
    string mobilenumber;
};

int main() 
{
	string startingletters;
    contact contacts[10] = {
        {"Ali", "Sakesar base,street 6B", "093767890"},
        {"sara", "Masori Base,street 7B", "0967544321"},
        {"sunia","Ghori town,street 8B","033456778"},
        {"sadia","Faiz 5,street 9B","090868678"},
        {"seltuk","Mughal,street 7B","079345678"},
        {"sidra", "Faiz 5,street 7B", "093997890"},
        {"sohan", "H-13,street 7B", "09675446781"},
        {"baran","Block D 5,street 7B","0334678778"},
        {"zermeen","Jinnah camp,street 7B","0320889678"},
        {"zimbal","Gulzar-e-quaid,street 7B","03479345678"},
    };
    cout << "Enter the starting letters of the word you want to search: ";
    getline(cin,startingletters);
    cout << "Contacts whose name starts with  " << startingletters << ":" << endl;
    for (int i = 0; i < 10; i++) 
	{
        if (contacts[i].name.compare(0,startingletters.length(),startingletters) == 0) 
		{
            cout << "Name: " << contacts[i].name << endl;
            cout << "Address: " << contacts[i].address << endl;
            cout << "Mobile Number: " << contacts[i].mobilenumber << endl;
        }
    }

    return 0;
}



