#include<iostream>
using namespace std;
int main()
{
	int size=30,vowel=0;
	char para[size];
	cout<<"Enter the paragraph to find total vowels: ";
	cin.getline(para,30);
	cout<<"You entered: ";
	cout<<para<<endl;
	for(int i=0;i<30;i++)
	{
		if(para[i]=='a'||para[i]=='e'||para[i]=='i'||para[i]=='o'||para[i]=='u'||para[i]=='A'||para[i]=='E'||para[i]=='I'||para[i]=='O'||para[i]=='U')
	vowel++;
	}
	cout<<"Total vowels in given paragraph= "<<vowel;
}
	
	