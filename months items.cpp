#include<iostream>
 using namespace std;
 int main()
{ 
  int items=2;
  int months=12;
  int i,j,rent,electricity,gas;
  int array[items][months];
  for(i=0;i<2;i++)
  {  
  cout<<"For item "<<i+1<<" : "<<endl;
   for(j=0;j<12;j++)
   {
  cout<<"Enter value for month "<<j+1<<" : "<<endl;
   cin>>array[i][j];
}
}
cout<<"jan\tfeb\tmarch\tapril\tmay\tjune\tjuly\taugust\tsep\toct\tnov\tdec"<<endl;

  for(i=0;i<3;i++) 
  {
  	for(j=0;j<12;j++)
  	{     
  		cout<<array[i][j]<<"\t";
	  }

cout<<endl;
  }
  
  }

