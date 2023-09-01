#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long int i=1,n;
	float e=1,f=1;
	cout<<"\n\033[1;33mfasele adade nepier ra benevisid :\t\033[0m \n";
	cin>>n;
	for (;n >= i;)
	{
		f = f * i;
		e = e + 1/f;
		i++;
	}
	cout<<"\033[1;33mnepier : \t\033[0m"<<e;
	cin.ignore();
}