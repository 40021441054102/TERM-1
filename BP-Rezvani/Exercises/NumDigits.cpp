#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,n,s=0,np,sp=0;
    cout<<"adadi ke mikhahid ragham hayash ra joda konid benevisid : \t";
    cin>>n;
	np=n;
    while (n > 0)
    {
        a = n % 10;
        s = s * 10 + a;
        n = n/10;
    }
	while (s > 0)
	{
		a = s % 10;
		sp = sp * 10 + a;
		s = s/10;
		cout<<a<<"   ";
	}
cin.ignore();
}