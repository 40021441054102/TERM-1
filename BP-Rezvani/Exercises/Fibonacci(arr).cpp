#include <iostream>
using namespace std;
int main()
{
	float arr[100];
	int i,n,f1=1,f2=1,f3;
	cout<<"\033[1;96mEnter the length of the series \033[0m: ";
	cin>>n;
	cout<<"\033[1;36m\nFibonacci Series \033[0m: ";
	cout<<"\033[1;33m"<<f1<<" "<<f2;
	for (i=0;i<n-2;i++)
	{
		f3 = f1+f2;
		f1 = f2;
		f2 = f3;
		arr[i]=f3;
	}
	for (i=0;i<n-2;i++)
	{
		cout<<"\033[1;33m "<<arr[i];
	}
	cin.ignore();
}