#include <iostream>
using namespace std;
int main()
{
	float a,b,c;
	
	cout<<"enter three triangle nimbers: ";
	cin>>a>>b>>c;
	
	if(a+b>=c && a+c>=b && b+c>=a)
		cout<<a<<", "<<b<<" and "<<c<<" make triangle"<<endl;
	else
		cout<<a<<", "<<b<<" and "<<c<<" DO NOT make triangle"<<endl;
		
	return 0;	
}