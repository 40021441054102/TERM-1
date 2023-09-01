#include <iostream>
using namespace std;
int main()
{
	int n,i=1,ip=1;
	cout<<"\033[1;32mGive me the height of the triangle \033[0m:\t";
	cin>>n;
	for (;i<=n;i++)
	{
		for (;ip<=i;ip++)
		{
			cout<<"\033[1;36m* ";
		}
		ip = 1;
		cout<<"\n";
	}
	cin.ignore();
}