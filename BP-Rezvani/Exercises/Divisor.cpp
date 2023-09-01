#include <iostream>
using namespace std;
//Divisor Code Without Color
int main()
{
	int n,i=1;
	cout<<"adade morede nazar ra benevisid :";
	cin>>n;
	
	while (i<=n)
	{
		if (n%i==0)
			cout<<" "<<i;
		i++;
	}
	cin.ignore();
}