#include <iostream>
using namespace std;
int main()
{
	float x,y ;
	float temp ;
	cout<<"x va y ro bedid :\n";
	cin>>x>>y;
	temp = x;
	x = y;
	y = temp;
	cout<<" "<<x;
	cout<<" "<<y;
}