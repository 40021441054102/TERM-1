#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Adadi ra baraye jam'e donbale tabi'ei benevisid : \n";
	cin>>n;
	while(n > 0)
	{
		sum = sum + n;
		n = n - 1;
	}
	cout<<"Javab : "<<sum;
	cin.ignore();
}