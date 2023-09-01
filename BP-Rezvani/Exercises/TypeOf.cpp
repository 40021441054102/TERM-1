#include <iostream>
using namespace std;
int main()
{
	char x;
	cout<<"\033[1;96mGive me your input\033[0m :\t";
	cin>>x;
		if (x>=65 && x<=90)
		{
			cout<<"\033[1;36mIts an Upper-Case letter !";
		}
		else if (x>=97 && x<=122)
		{
			cout<<"\033[1;36mIts an Lower-Case letter !";
		}
		else if (x>=48 && x<=57)
		{
			cout<<"\033[1;36mIts a digit !";
		}
		else 
		{
			cout<<x<<" \033[1;31mIts not an alphanumeric input !";
		} 
		if (x=='$')
		cout<<"\033[1;31m Bye !";
	cin.ignore();
}