#include <iostream>
using namespace std;
int main()
{
	float array[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter arr["<<i<<"] : ";
		cin>>array[i];
	}
	for(i=4;i>=0;i--)
	{
		cout<<" arr["<<i<<"] = "<<array[i];
	}
	cin.ignore();
}