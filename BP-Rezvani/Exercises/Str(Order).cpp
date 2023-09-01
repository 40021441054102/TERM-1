#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[50][10];
	int i=-1;
	do
	{
		i++;
		cout<<"\033[1;96mEnter name\033[0m :\t";
		gets(str[i]);
	}while(strcmp(str[i],"end"));
	cout<<"\n\033[1;31mno numbers will recieve !";
	cout<<"\n\033[1;32myour data are :\n";
	for (int j=0;j<i;j++)
	{
		cout<<"\033[1;36mstr[\033[0m"<<j<<"\033[1;36m]=\033[1;33m "<<str[j]<<endl;
	}
	cin.ignore();
}