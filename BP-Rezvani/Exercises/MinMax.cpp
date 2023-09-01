#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
int main()
{
	int n,x,i=1;
	cout<<"Te'dad adad hayi ke mikhahid min va max anhara peida konid benevisid:\n";
	cin>>n;
	int max = -99999;
	int min = 99999;
	while (i <= n)
	{
		cout<<"hal adad haye khod ra vared konid:";
		cin>>x;		
		if (x < min)
		min = x;
		if (x > max)
		max = x;

		i = i + 1;
	}
	cout<<"min = "<<min;
	cout<<"\nmax = "<<max;
	return 0;
}