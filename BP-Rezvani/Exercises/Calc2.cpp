#include <iostream>
using namespace std;

int main()
{
	
	int x,y;
	char z;
	cout<<"Enter number x : ";
	cin>>x;
	cout<<"Enter number y : ";
	cin>>y;
	cout<<" chose (+ - * /) :";
	cin>>z;
	switch(z)
	{
		
		case '+': cout<<"Result : "<<x+y<<endl;break;
		case '-': cout<<"Result : "<<x-y<<endl;break;
		case '*': cout<<"Result : "<<x*y<<endl;break;
		case '/': cout<<"Result : "<<x/y<<endl;break;
		default : cout<<"wrong !!";
    }

	return 0;
}