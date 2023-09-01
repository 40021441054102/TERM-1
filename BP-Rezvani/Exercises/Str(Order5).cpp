#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[5][10];
	for (int i=0;i<5;i++)
	{
		 cout<<"Enter name :\t";
		 gets(str[i]);
	}
	cout<<"\nyour data are :\n";
	for (int i=0;i<5;i++)
	{
		cout<<"str["<<i<<"]= "<<str[i]<<endl;
	}
	cin.ignore();
}