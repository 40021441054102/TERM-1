#include <iostream>
using namespace std;
int main()
{
	float array[2][3];
	int i,j;
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
		{
			cout<<"enter array["<<i<<"]["<<j<<"]:\t";
			cin>>array[i][j];
		}
	cout<<"-     -\n";
	for(i=0;i<2;i++)
	{
		cout<<"|     |\n|";
		for(j=0;j<3;j++)
		{
			cout<<array[i][j]<<"|";
		}
		cout<<endl;
	}
	cout<<"|     |\n";
	cout<<"-     -";
		cin.ignore();
}