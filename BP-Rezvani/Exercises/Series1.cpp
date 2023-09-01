#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int s=0,sign=1,i=1,n;
	cout<<" fasele donbale ra benevisid: \n";
	cin>>n;
	while(n >= i)
	{
		s = s + sign * i;
		sign = -sign;
		i++;
	}
	cout<<"donbale : "<<s;
	cin.ignore();
}