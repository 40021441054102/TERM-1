#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cout<<"\033[1;36mGive me your number \033[0m:\t";
	cin>>x;
	switch(x%5)
	{
		case 0 : cout<<x<<"\033[1;32m is multiple of 5\033[0m";
		break;
		default : cout<<x<<"\033[1;31m is not multiple of 5\033[0m";
		break;
	}
	cin.ignore();
}