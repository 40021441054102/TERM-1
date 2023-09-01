#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
	//ac = accuracy
	float ac,i=1,p=1,fact=1,x,sign=1,pp=1,ans,sin=0;
	cout<<"\nwrite the accuracy :\n";
	cin>>ac;
	cout<<"give me your degree :\t";
	cin>>x;	
	ans = x;
	x = x*(M_PI)/180;
	while (ac>=i)
	{
		fact = fact*pp*p;
		sin = sin + sign*pow(x,p)/fact;
		p = p+2;
		if (pp==1)
		{
			pp++;			
		}
		else
		{
			pp+=2;			
		}
		sign = -sign;
		i++;
	}
	cout<<"ans : "<<sin;
	cin.ignore();
}
