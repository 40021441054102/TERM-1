#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a,b,c ;
	float delta,x1,x2 ;
	cout<<"a, b va c ra vared konid";
	cin>>a>>b>>c;
	if (a==0)
	{
		cout<<" in moadele daraje 2 nis :|";
		x1=-c/b;
		cout<<"\nx1=x2= "<<x1;
		return 0;
	}
	delta=pow(b,2)-4*a*c;
	if (delta<0)
		cout<<"rahe hali baraye hal vojud nadarad, zira delta kuchak tar az 0 ast";
	else if (delta==0)
		cout<<"\nx1=x2= "<<-b/(2*a);
	else
	{
		cout<<"\nx1= "<<(-b-sqrt(delta))/(2*a);
		cout<<"\nx2= "<<(-b+sqrt(delta))/(2*a);
	}
}