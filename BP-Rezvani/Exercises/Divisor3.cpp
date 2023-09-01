#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"adade morede nazar ra benevisid :";
	cin>>n;
	
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		cout<<" "<<i;
	}
	cin.ignore();
}