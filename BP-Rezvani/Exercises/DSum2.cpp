#include<iostream>
using namespace std;
int main()
{
	int s=0,i=1,n;
	cout<<"Give me the number \n";
	cin>>n;
	while(n >= i)
	{
		s = s + i;
		i = i + 1;
	}
	cout<<"Answer "<<s;
	return 0;
}