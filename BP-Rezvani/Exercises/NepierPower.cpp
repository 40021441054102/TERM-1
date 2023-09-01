#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x,ac,e=0,ip=0,fact=1;
	long int i;
	cout<<"\033[1;36mGive me the power\033[0m :\t";
	cin>>x;
	cout<<"\033[1;36mGive the grade of accuracy\t\033[0m :\t";
	cin>>ac;
	for (i=1;ac>=i;i++)
	{
		e=e+pow(x,ip)/fact;
		ip++;
		fact=fact*i;
	}
	cout<<"\033[1;32mYour answer with the given number \033[0m"<<x<<" \033[1;32mand the accuracy of \033[0m"<<ac<<"\033[1;32m is :\033[0m\t"<<e;
	cin.ignore();
}