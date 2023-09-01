
#include <iostream>
using namespace std;
int main()
{
	float x,y,temp ;
	cout<<"please enter two numbers x and y: ";
	cin>>x>>y;
	temp = x;
	x = y;
	y = temp;
	cout<<"x= "<<x<<endl;
	cout<<"y= "<<y;
}