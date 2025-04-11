#include <iostream>
#include<string>
using namespace std;
const int MAX_SIZE = 10; 
int i=0;
void displaymenu() 
{   
    cout << "What do you want?"<<endl;
    cout << "1. Add currency\n";
    cout << "2. Read currencies\n";
    cout << "3. Delete currency\n";
    cout << "4. Update currency\n";
    cout << "5. Update password\n";
    cout << "6. Exit\n";
}
void update(string currencyarray[], int size)
 {
   int index;
   cout<<"Array= pkr, dollar, yuan, euro, franc,riyal,dram,lira,dinar,taka"<<endl;
    cout << "Enter the index of the element to update: ";
    cin >> index;
   if (index >= 0 && index < size) 
   {
    string updatedvalue;
    cout << "Enter the updated value: ";
    cin >> updatedvalue;
    currencyarray[index] = updatedvalue;
    cout << "Element updated successfully.\n";
    for( int k=0;k<size;k++)
    {
    	display(currencyarray,size);
	}
   
    }
	else 
	 {
        cout << "Invalid index. Cannot update element.\n";
    }
}
void display(const string currencyarray[], int& size)
 {
    cout << "Array Elements: ";
    for (i = 0; i < size; i++)
	 {
    cout << currencyarray[i] << " ";
    }
    cout <<endl;
}
void create(string currencyarray[], int& size)
 {
    string newelement;
    cout << "Enter the new element: ";
    cin >> newelement;
    currencyarray[size++]==newelement;
     cout << "Element added successfully."<<endl;
    
}

void del(string currencyarray[], int& size)
 {
    display(currencyarray, size);
 int index;
    cout << "Enter the index of the element to delete: ";
    cin >> index;
 if (index >= 0 && index < size) 
 {
        for ( i=index;i<size-1;i++) 
		{
            currencyarray[i] = currencyarray[i+1];
        }
        size--;
		cout << "Element deleted successfully."<<endl;
		display(currencyarray, size);
    } 
	else 
	{
    cout << "Invalid index. Cannot delete element."<<endl;
    }
}
struct Person {
    string name;
    int CNIC;
    string country;
};
void dollarpkr(double amount )
{ double currency;
    currency= amount * 282.13;
    cout<<"Total amount in pkr = "<<currency<<endl;
}
void dollaryuan(double amount )
{ double currency;
    currency= amount * 7.19;
    cout<<"Total amount in yuan = "<<currency<<endl;
}
void dollarriyal(double amount )
{ double currency;
    currency= amount * 3.75;
    cout<<"Total amount in riyal = "<<currency<<endl;
}
void dollardram(double amount )
{ double currency;
    currency= amount * 405.39;
    cout<<"Total amount in dram = "<<currency<<endl;
}
void dollarfranc(double amount )
{ double currency;
    currency= amount /1.17;
    cout<<"Total amount in franc = "<<currency<<endl;
}
void dollardinar(double amount )
{ double currency;
    currency= amount / 3.24;
    cout<<"Total amount in dinar = "<<currency<<endl;
}
void dollarlira(double amount )
{ double currency;
    currency= amount * 28.98;
    cout<<"Total amount in lira = "<<currency<<endl;
}
void dollareuro(double amount )
{ double currency;
    currency= amount / 1.10;
    cout<<"Total amount in dollar = "<<currency<<endl;
}
void dollartaka(double amount )
{ double currency;
    currency= amount * 110.09;
    cout<<"Total amount in taka = "<<currency<<endl;
}
void pkrdollar(double amount )
{ double currency;
    currency= amount /282.13;
    cout<<"Total amount in dollar= "<<currency<<endl;
}
void pkrtaka(double amount )
{ double currency;
    currency= amount /2.55;
    cout<<"Total amount in taka= "<<currency<<endl;
}
void pkryuan(double amount )
{ double currency;
    currency= amount / 39.11;
    cout<<"Total amount in yuan= "<<currency<<endl;
}
void pkrriyal(double amount )
{ double currency;
    currency= amount /75.72;
    cout<<"Total amount in riyal= "<<currency<<endl;
}
void pkrdram(double amount )
{ double currency;
    currency= amount * 1.45;
    cout<<"Total amount in dram= "<<currency<<endl;
}
void pkrfranc(double amount )
{ double currency;
    currency= amount /325.16;
    cout<<"Total amount in franc= "<<currency<<endl;
}
void pkrdinar(double amount )
{ double currency;
    currency= amount /908.35;
    cout<<"Total amount in dollar= "<<currency<<endl;
}
void pkrlira(double amount )
{ double currency;
    currency= amount /9.58;
    cout<<"Total amount in lira= "<<currency<<endl;
}
void pkreuro(double amount )
{ double currency;
    currency= amount /306.61;
    cout<<"Total amount in euro= "<<currency<<endl;
}
void takapkr(double amount )
{ double currency;
    currency= amount * 2.55 ;
    cout<<"Total amount in pkr= "<<currency<<endl;
}
void takayuan(double amount )
{ double currency;
    currency= amount * 15.43 ;
    cout<<"Total amount in yuan= "<<currency<<endl;
}
void takariyal(double amount )
{ double currency;
    currency= amount / 29.35 ;
    cout<<"Total amount in riyal= "<<currency<<endl;
}
void takadram(double amount )
{ double currency;
    currency= amount *  3.67;
    cout<<"Total amount in dram= "<<currency<<endl;
}
void takafranc(double amount )
{ 
   double currency;
    currency= amount * 125.10 ;
    cout<<"Total amount in franc= "<<currency<<endl;
}
void takadinar(double amount )
{ 
  double currency;
    currency= amount / 356.90 ;
    cout<<"Total amount in dinar= "<<currency<<endl;
}
void takalira(double amount )
{ 
    double currency;
    currency= amount / 3.76 ;
    cout<<"Total amount in lira= "<<currency<<endl;
}
void takaeuro(double amount )
{ double currency;
    currency= amount / 118.61 ;
    cout<<"Total amount in euro= "<<currency<<endl;
}
void takadollar(double amount )
{ double currency;
    currency= amount / 109.73 ;
    cout<<"Total amount in dollar= "<<currency<<endl;
}
void lirapkr(double amount )
{ double currency;
    currency= amount * 9.80 ;
    cout<<"Total amount in pkr= "<<currency<<endl;
}
void lirayuan(double amount )
{ double currency;
    currency= amount /4.08 ;
    cout<<"Total amount in yuan= "<<currency<<endl;
}
void lirariyal(double amount )
{ double currency;
    currency= amount /7.73 ;
    cout<<"Total amount in riyal= "<<currency<<endl;
}
void liradram(double amount )
{ double currency;
    currency= amount * 13.93;
    cout<<"Total amount in dram= "<<currency<<endl;
}
void lirafranc(double amount )
{ double currency;
    currency= amount / 33.98;
    cout<<"Total amount in franc= "<<currency<<endl;
}
void liradinar(double amount )
{ double currency;
    currency= amount / 94.03;
    cout<<"Total amount in dinar= "<<currency<<endl;
}
void liraeuro(double amount )
{ double currency;
    currency= amount / 31.22;
    cout<<"Total amount in euro= "<<currency<<endl;
}
void liradollar(double amount )
{ double currency;
    currency= amount / 28.98;
    cout<<"Total amount in dollar= "<<currency<<endl;
}
void lirataka(double amount )
{ double currency;
    currency= amount / 3.80;
    cout<<"Total amount in taka= "<<currency<<endl;
}
void yuanpkr(double amount )
{ double currency;
    currency= amount * 39.79;
    cout<<"Total amount in pkr= "<<currency<<endl;
}
void yuantaka(double amount )
{ double currency;
    currency= amount * 15.43;
    cout<<"Total amount in taka= "<<currency<<endl;
}
void yuanriyal(double amount )
{ double currency;
    currency= amount / 1.90;
    cout<<"Total amount in riyal= "<<currency<<endl;
}
void yuandollar(double amount )
{ double currency;
    currency= amount / 7.14;
    cout<<"Total amount in dollar= "<<currency<<endl;
}
void yuanfranc(double amount )
{ double currency;
    currency= amount / 8.11;
    cout<<"Total amount in franc= "<<currency<<endl;
}
void yuandinar(double amount )
{ double currency;
    currency= amount / 23.23;
    cout<<"Total amount in dinar= "<<currency<<endl;
}
void yuanlira(double amount )
{ double currency;
    currency= amount * 4.08;
    cout<<"Total amount in lira= "<<currency<<endl;
}
void yuaneuro(double amount )
{ double currency;
    currency= amount / 7.66;
    cout<<"Total amount in euro= "<<currency<<endl;
}
void yuandram(double amount )
{ double currency;
    currency= amount * 56.21;
    cout<<"Total amount in dram= "<<currency<<endl;
}
void riyalpkr(double amount )
{ double currency;
    currency= amount * 75.72;
    cout<<"Total amount in pkr= "<<currency<<endl;
}
void riyaltaka(double amount )
{ double currency;
    currency= amount * 29.35;
    cout<<"Total amount in taka= "<<currency<<endl;
}
void riyaldollar(double amount )
{ double currency;
    currency= amount / 3.75;
    cout<<"Total amount in dollar= "<<currency<<endl;
}
void riyalyuan(double amount )
{ double currency;
    currency= amount * 1.90;
    cout<<"Total amount in yuan= "<<currency<<endl;
}
void riyalfranc(double amount )
{ double currency;
    currency= amount / 4.28;
    cout<<"Total amount in franc= "<<currency<<endl;
}
void riyaldinar(double amount )
{ double currency;
    currency= amount / 12.17;
    cout<<"Total amount in dinar= "<<currency<<endl;
}
void riyallira(double amount )
{ double currency;
    currency= amount * 7.73;
    cout<<"Total amount in lira= "<<currency<<endl;
}
void riyaleuro(double amount )
{ double currency;
    currency= amount / 4.04;
    cout<<"Total amount in euro= "<<currency<<endl;
}
void riyaldram(double amount )
{ double currency;
    currency= amount * 107.54;
    cout<<"Total amount in dram= "<<currency<<endl;
}
void francpkr(double amount )
{ double currency;
    currency= amount * 322.70;
    cout<<"Total amount in pkr= "<<currency<<endl;
}
void franctaka(double amount )
{ double currency;
    currency= amount / 125.10;
    cout<<"Total amount in taka= "<<currency<<endl;
}
void francriyal(double amount )
{ double currency;
    currency= amount * 4.28;
    cout<<"Total amount in riyal= "<<currency<<endl;
}
void francdollar(double amount )
{ double currency;
    currency= amount * 1.14;
    cout<<"Total amount in dollar= "<<currency<<endl;
}
void francyuan(double amount )
{ double currency;
    currency= amount *8.11;
    cout<<"Total amount in yuan= "<<currency<<endl;
}
void francdinar(double amount )
{ double currency;
    currency= amount /2.84;
    cout<<"Total amount in dinar= "<<currency<<endl;
}
void franclira(double amount )
{ double currency;
    currency= amount * 32.93;
    cout<<"Total amount in lira= "<<currency<<endl;
}
void franceuro(double amount )
{ double currency;
    currency= amount * 1.06;
    cout<<"Total amount in euro= "<<currency<<endl;
}
void francdram(double amount )
{ double currency;
    currency= amount * 459.91;
    cout<<"Total amount in dram= "<<currency<<endl;
}
void dinarpkr(double amount )
{ double currency;
    currency= amount * 920.87;
    cout<<"Total amount in pkr= "<<currency<<endl;
}
void dinartaka(double amount )
{ double currency;
    currency= amount * 357.22;
    cout<<"Total amount in taka= "<<currency<<endl;
}
void dinarriyal(double amount )
{ double currency;
    currency= amount * 12.17;
    cout<<"Total amount in riyal= "<<currency<<endl;
}
void dinardollar(double amount )
{ double currency;
    currency= amount * 3.24;
    cout<<"Total amount in dollar= "<<currency<<endl;
}
void dinaryuan(double amount )
{ double currency;
    currency= amount * 23.16;
    cout<<"Total amount in yuan= "<<currency<<endl;
}
void dinarlira(double amount )
{ double currency;
    currency= amount * 94.03;
    cout<<"Total amount in lira= "<<currency<<endl;
}
void dinarfranc(double amount )
{ double currency;
    currency= amount * 2.86;
    cout<<"Total amount in franc= "<<currency<<endl;
}
void dinareuro(double amount )
{ double currency;
    currency= amount * 3.01;
    cout<<"Total amount in euro= "<<currency<<endl;
}
void dinardram(double amount )
{ double currency;
    currency= amount * 1307.8;
    cout<<"Total amount in dram= "<<currency<<endl;
}
void drampkr(double amount )
{ double currency;
    currency= amount / 1.42;
    cout<<"Total amount in pkr= "<<currency<<endl;
}
void dramdinar(double amount )
{ double currency;
    currency= amount / 1319.19;
    cout<<"Total amount in dinar= "<<currency<<endl;
}
void dramriyal(double amount )
{ double currency;
    currency= amount / 107.54;
    cout<<"Total amount in riyal= "<<currency<<endl;
}
void dramdollar(double amount )
{ double currency;
    currency= amount / 405.39;
    cout<<"Total amount in dollar= "<<currency<<endl;
}
void dramyuan(double amount )
{ double currency;
    currency= amount / 56.21;
    cout<<"Total amount in yuan= "<<currency<<endl;
}
void dramlira(double amount )
{ double currency;
    currency= amount / 13.91;
    cout<<"Total amount in lira= "<<currency<<endl;
}
void dramfranc(double amount )
{ double currency;
    currency= amount / 459.91;
    cout<<"Total amount in franc= "<<currency<<endl;
}
void drameuro(double amount )
{ double currency;
    currency= amount / 434.35;
    cout<<"Total amount in euro= "<<currency<<endl;
}
void dramtaka(double amount )
{ double currency;
    currency= amount / 3.67;
    cout<<"Total amount in taka= "<<currency<<endl;
}
void europkr(double amount )
{ double currency;
    currency= amount * 305.96;
    cout<<"Total amount in pkr= "<<currency<<endl;
}
void eurodollar(double amount )
{ double currency;
    currency= amount * 1.08;
    cout<<"Total amount in dollar= "<<currency<<endl;
}
void euroriyal(double amount )
{ double currency;
    currency= amount * 4.04;
    cout<<"Total amount in riyal= "<<currency<<endl;
}
void eurodinar(double amount )
{ double currency;
    currency= amount / 3.01;
    cout<<"Total amount in dinar= "<<currency<<endl;
}
void eurodram(double amount )
{ double currency;
    currency= amount * 434.35;
    cout<<"Total amount in dram= "<<currency<<endl;
}
void eurolira(double amount )
{ double currency;
    currency= amount * 31.22;
    cout<<"Total amount in lira= "<<currency<<endl;
}
void eurotaka(double amount )
{ double currency;
    currency= amount * 118.61;
    cout<<"Total amount in taka= "<<currency<<endl;
}
void euroyuan(double amount )
{ double currency;
    currency= amount * 7.66;
    cout<<"Total amount in yuan= "<<currency<<endl;
}
void eurofranc(double amount )
{ double currency;
    currency= amount / 1.06;
    cout<<"Total amount in franc= "<<currency<<endl;
}
string getComment() {
    string comment;
    cout << "\nWould you like to leave a comment? (y/n)" << endl;
    char option;
    cin >> option;
    cin.ignore();
    if (option == 'y' || option == 'Y') {
        cout << "Enter your comment here:" << endl;
        getline(cin, comment);
        cout << "Thanks for your time. Your comment means to us." << endl;
    } else {
        cout << "Goodbye!" << endl;
    }
    return comment;
}
struct data
{
    string input;
   string output;
    double amount;
};

 void updatepassword(string &currentpassword)
 {
 string newpassword;
   cout << "Enter the new password: ";
    cin >> newpassword;
    currentpassword = newpassword;
    cout << "Password updated successfully!\n";
 	
 }
 int adminLogin(string &password)
 {
 	string rightpassword="admin123";
	return(password==rightpassword);
 }
int userLogin(string &password)
 {
 	string rightpassword="user123";
	return(password==rightpassword);
 }
int main() 
{ 
data currency;
bool validInput = true;
int n,conversion[100];
char trry,runagain,choice;
int passwordTries = 3; 
string verify,password;      
string  adminPassword= "admin123";
string userPassword="user123";
cout<<"                *** Hello! I am a currency converter program ***   "<<endl;
cout<<"I have these currencies [pkr,dollar,riyal,dram,yuan,taka,dinar,euro,lira,franc] "<<endl;
cout<<"   Here you can convert currencies easily according to your need.....\n    "<<endl;
cout<<"*******************************************************************************"<<endl;
cout<<"Who are you? (admin or user)"<<endl;
cin>>verify;
if(verify=="admin")
{
do{
	cout<<"Enter password: "<<endl;
cin>>password;
if (adminLogin(password))
{
	cout<<"Admin Login Successfully!"<<endl;
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
    del(currencyarray, arraysize);
    break;
    case '4':
    update(currencyarray, arraysize);
    break;
    case '5':
   updatepassword(password);
    case '6':
    cout<<"Program exits!"<<endl;
    break;
    default:
    cout << "Invalid choice. Please try again.\n";
        }
    return 0;
}
	
else 
{
    passwordTries--;
    cout << "Incorrect password! " << passwordTries << " tries left." << endl;
    cout << "Do you want to try again? (Y/N)" << endl;
    cin >> trry;
    cin.ignore();
        
	}
    } while ((trry == 'Y' || trry == 'y') && passwordTries > 0);




}
else if(verify=="user")
{
	do
	{
	cout<<"Enter password: "<<endl;
cin>>password;
if (userLogin(password))
{
	cout<<"User Login successully!"<<endl;
cout<<"Let's start it!"<<endl;
Person user;
cout<<"User Information"<<endl;
cout << "Enter your name: ";
cin >> user.name;
cout << "Enter your CNIC: ";
cin >> user.CNIC;
cin.ignore();
cout << "Enter your Country name: ";
cin >> user.country;
cout<<"You can do upto 100 conversions in one run."<<endl;
cout<<"How many conversions do you want? "<<endl;
cin>>n;
if(n>100)
{
	cout<<"Sorry! You can do only 100 conversions.Plz enter valid number."<<endl;
	cout<<"Do you want one more chance?(y/n)"<<endl;
	cin>>runagain;
	if(runagain=='y'||runagain=='Y')
	{
     cout<<"How many conversions do you want? "<<endl;
    cin>>n;
     if(n>100)
     {
     cout<<"Again invalid entry!.No more chances!"<<endl;
	
		}
	}
}
else
	{
	for(int i=1;i<=n;i++)
{
	cout<<"Conversion no: "<<endl;
	cin>>conversion[i];
	
cout<<"Which currency do you have?"<<endl;
cin>>currency.input;
if (currency.input != "pkr" && currency.input != "dollar" && currency.input != "riyal" && currency.input != "dram" &&
    currency.input != "yuan" && currency.input != "taka" && currency.input != "dinar" && currency.input != "euro" &&
    currency.input != "lira" && currency.input != "franc")
   validInput = false;
 if (!validInput)
  {
 cout << "Invalid input currency. You must enter a valid input currency." << endl;
 break;
 }
cout<<"In which currency do you want to convert?"<<endl;
cin>>currency.output;
if (currency.output != "pkr" && currency.output != "dollar" && currency.output != "riyal" && currency.output != "dram" && 
         currency.output != "yuan" && currency.output != "taka" && currency.output != "dinar" && currency.output != "euro" 
		 && currency.output != "lira" && currency.output != "franc") 
		 {
cout << "Invalid output currency. Please enter a valid currency." << endl;
break;
}
if(currency.input==currency.output)
{
	cout << "Input and output currency cannot be same.Try again."<<endl;
	break;
}
cout<<"Enter the amount in "<<currency.input<<": "<<endl;
cin>>currency.amount;
{
 if(currency.input=="pkr"&& currency.output=="dollar")
{
	
	pkrdollar(currency.amount);
}
else if(currency.input=="pkr"&& currency.output=="taka")
{
	pkrtaka(currency.amount);
}
else if(currency.input=="pkr"&&currency.output=="yuan")
{
	
	pkryuan(currency.amount);
}
else if(currency.input=="pkr"&& currency.output=="riyal")
{
		pkrriyal(currency.amount);
}
else if(currency.input=="pkr"&& currency.output=="dram")
{
		pkrdram(currency.amount);
}
else if(currency.input=="pkr"&& currency.output=="franc")
{
	pkrfranc(currency.amount);
}
else if(currency.input=="pkr"&& currency.output=="dinar")
{
		pkrdinar(currency.amount);
}
else if(currency.input=="pkr"&& currency.output=="lira")
{
		pkrlira(currency.amount);
}
else if(currency.input=="pkr"&& currency.output=="euro")
{
	
		pkreuro(currency.amount);
}
else if(currency.input=="taka"&& currency.output=="pkr")
{
		takapkr(currency.amount);
}
else if(currency.input=="taka"&& currency.output=="yuan")
{
	takayuan(currency.amount);
}
else if(currency.input=="taka"&& currency.output=="riyal")
{

	takariyal(currency.amount);
}
else if(currency.input=="taka"&& currency.output=="dram")
{
	
	takadram(currency.amount);
}
else if(currency.input=="taka"&& currency.output=="franc")
{

	takafranc(currency.amount);
}
else if(currency.input=="taka"&& currency.output=="dinar")
{
	
   takadinar(currency.amount);
}
else if(currency.input=="taka"&& currency.output=="lira")
{
	
	takalira(currency.amount);
}
else if(currency.input=="taka"&& currency.output=="euro")
{

	takaeuro(currency.amount);
}
else if(currency.input=="taka"& currency.output=="dollar")
{
	
	takadollar(currency.amount);
}
else if(currency.input=="lira"&& currency.output=="pkr")
{

	lirapkr(currency.amount);
}
else if(currency.input=="lira"&& currency.output=="yuan")
{

		lirayuan(currency.amount);
}
else if(currency.input=="lira"&& currency.output=="riyal")
{

  	lirariyal(currency.amount);
}
else if(currency.input=="lira"&& currency.output=="dram")
{
		liradram(currency.amount);
}
else if(currency.input=="lira"&& currency.output=="dinar")
{
		liradinar(currency.amount);
}
else if(currency.input=="lira"&& currency.output=="franc")
{

 	lirafranc(currency.amount);
}
else if(currency.input=="lira"&& currency.output=="euro")
{
	
		liraeuro(currency.amount);
}
else if(currency.input=="lira"&& currency.output=="taka")
{
	
		lirataka(currency.amount);
}
else if(currency.input=="lira"&& currency.output=="dollar")
{
	
	liradollar(currency.amount);
}
else if(currency.input=="dinar"&& currency.output=="pkr")
{

		dinarpkr(currency.amount);
}
else if(currency.input=="dinar"&& currency.output=="taka")
{
	
	dinartaka(currency.amount);
}
else if(currency.input=="dinar"&& currency.output=="riyal")
{
	
	dinarriyal(currency.amount);
}
else if(currency.input=="dinar"&& currency.output=="dollar")
{
	
	dinardollar(currency.amount);
}
else if(currency.input=="dinar"&& currency.output=="yuan")
{
	
	dinaryuan(currency.amount);
}
else if(currency.input=="dinar"&& currency.output=="lira")
{
	
	dinarlira(currency.amount);
}
else if(currency.input=="dinar"&& currency.output=="franc")
{
	
	dinarfranc(currency.amount);
}
else if(currency.input=="dinar"&& currency.output=="euro")
{
	
	dinareuro(currency.amount);
}
else if(currency.input=="dinar"&& currency.output=="dram")
{

	dinardram(currency.amount);
}
else if(currency.input=="yuan"&& currency.output=="pkr")
{
	
	yuanpkr(currency.amount);
}
else if(currency.input=="yuan"&& currency.output=="taka")
{
	
	yuantaka(currency.amount);
}
else if(currency.input=="yuan"&& currency.output=="riyal")
{
	
	yuanriyal(currency.amount);
}
else if(currency.input=="yuan"&& currency.output=="dollar")
{
	
	yuandollar(currency.amount);
}
else if(currency.input=="yuan"&& currency.output=="franc")
{
	
	yuanfranc(currency.amount);
}
else if(currency.input=="yuan"&& currency.output=="dinar")
{
	
	yuandinar(currency.amount);
}
else if(currency.input=="yuan"&& currency.output=="lira")
{
	
	yuanlira(currency.amount);
}
else if(currency.input=="yuan"&& currency.output=="euro")
{
	
	yuaneuro(currency.amount);
}
else if(currency.input=="yuan"&& currency.output=="dram")
{
	
	yuandram(currency.amount);
}
else if(currency.input=="dollar"&& currency.output=="pkr")
{
	
	dollarpkr(currency.amount);
}
else if(currency.input=="dollar"&& currency.output=="yuan")
{
	
    dollaryuan(currency.amount);
	
}
else if(currency.input=="dollar"&& currency.output=="riyal")
{
	
	dollarriyal(currency.amount);
}
else if(currency.input=="dollar"&& currency.output=="dram")
{
	
	dollardram(currency.amount);
}
else if(currency.input=="dollar"&& currency.output=="franc")
{
	
	dollarfranc(currency.amount);
}
else if(currency.input=="dollar"&& currency.output=="dinar")
{
	
	dollardinar(currency.amount);
}
else if(currency.input=="dollar"&& currency.output=="lira")
{
	
	dollarlira(currency.amount);
}
else if(currency.input=="dollar"&& currency.output=="euro")
{

   dollareuro(currency.amount);
} 
else if(currency.input=="dollar"&& currency.output=="taka")
{
	
  dollartaka(currency.amount);
}
else if(currency.input=="franc"&& currency.output=="pkr")
{
	
	francpkr(currency.amount);
}
else if(currency.input=="franc"&& currency.output=="taka")
{
	
	franctaka(currency.amount);
}
else if(currency.input=="franc"&& currency.output=="riyal")
{
	
	francriyal(currency.amount);
}
else if(currency.input=="franc"&& currency.output=="dollar")
{

	francdollar(currency.amount);
}
else if(currency.input=="franc"&& currency.output=="yuan")
{
	francyuan(currency.amount);
}
else if(currency.input=="franc"&& currency.output=="dinar")
{
	
	francdinar(currency.amount);
}
else if(currency.input=="franc"&& currency.output=="lira")
{
	
   franclira(currency.amount);
}
else if(currency.input=="franc"&& currency.output=="euro")
{

	franceuro(currency.amount);
}
else if(currency.input=="franc"&& currency.output=="dram")
{
	
	francdram(currency.amount);
}
else if(currency.input=="dram"&& currency.output=="pkr")
{
	
	drampkr(currency.amount);
}
else if(currency.input=="dram"&& currency.output=="dinar")
{
	
	dramdinar(currency.amount);
}
else if(currency.input=="dram"&& currency.output=="riyal")
{
	
	dramriyal(currency.amount);
}
else if(currency.input=="dram"&& currency.output=="dollar")
{
	
	dramdollar(currency.amount);
}
else if(currency.input=="dram"&& currency.output=="yuan")
{
	
	dramyuan(currency.amount);
}
else if(currency.input=="dram"&& currency.output=="lira")
{
	
	dramlira(currency.amount);
}
else if(currency.input=="dram"&& currency.output=="franc")
{
	
	dramfranc(currency.amount);
}
else if(currency.input=="dram"&& currency.output=="euro")
{
	
	drameuro(currency.amount);
}
else if(currency.input=="dram"&& currency.output=="taka")
{
	
	dramtaka(currency.amount);
}
else if(currency.input=="riyal"&& currency.output=="pkr")
{
	
	riyalpkr(currency.amount);
}
else if(currency.input=="riyal"&& currency.output=="taka")
{

	riyaltaka(currency.amount);
}
else if(currency.input=="riyal"&& currency.output=="dollar")
{
	
	riyaldollar(currency.amount);
}
else if(currency.input=="riyal"&& currency.output=="yuan")
{
	
	riyalyuan(currency.amount);
}
else if(currency.input=="riyal"&& currency.output=="franc")
{
	
	riyalfranc(currency.amount);
}
else if(currency.input=="riyal"&& currency.output=="dinar")
{
	
	riyaldinar(currency.amount);
}
else if(currency.input=="riyal"&&currency.output=="lira")
{
	
	riyallira(currency.amount);
}
else if(currency.input=="riyal"&& currency.output=="euro")
{
	
	riyaleuro(currency.amount);
}
else if(currency.input=="riyal"&& currency.output=="dram")
{
	
	riyaldram(currency.amount);
}
else if(currency.input=="euro"&& currency.output=="pkr")
{
	
	europkr(currency.amount);
}
else if(currency.input=="euro"&& currency.output=="dollar")
{
  
		eurodollar(currency.amount);
}
else if(currency.input=="euro"&& currency.output=="riyal")
{

		euroriyal(currency.amount);
}
else if(currency.input=="euro"&& currency.output=="dinar")
{
	
		eurodinar(currency.amount);
}
else if(currency.input=="euro"&& currency.output=="dram")
{
	
	eurodram(currency.amount);
}
else if(currency.input=="euro"&& currency.output=="lira")
{
	
		eurolira(currency.amount);
}
else if(currency.input=="euro" && currency.output=="taka")
{
	
	eurotaka(currency.amount);
}
else if(currency.input=="euro"&& currency.output=="yuan")
{
	
		euroyuan(currency.amount);
}
else if(currency.input=="euro"&& currency.output=="franc")
{
	
		eurofranc(currency.amount);
}

else 
cout << "Invalid Data!\n"<<endl;
}
}
cout<<"\nHope that it was helpful."<<endl;

}
}
else 
{
    passwordTries--;
    cout << "Incorrect password! " << passwordTries << " tries left." << endl;
    cout << "Do you want to try again? (Y/N)" << endl;
    cin >> trry;
    cin.ignore();
        
	}
    } while ((trry == 'Y' || trry == 'y') && passwordTries > 0);

}


cout << "Program Ends!" << endl;

string userComment = getComment();

    return 0;
}

