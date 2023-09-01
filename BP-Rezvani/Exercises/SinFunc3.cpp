#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
	//ac = accuracy
	float ac,i=1,fact=1,x,sign=1,p=1,pp=1,ans,sin=0;
	cout<<"\033[1;36m\nGive me the grade number of accuracy\033[0m :\n";
	cout<<"\033[1;31m--> Tip\033[0m : \033[1;33mThe more grade number = the better accuracy !\033[0m\n";
	cout<<"\033[1;36mAccuracy\033[0m :\t";
	cin>>ac;
	if (ac>=11)
	{
		cout<<"\033[1;31m--> The Given grade number of accuracy is a big number, it causes some lag\nSo please restart the program !";
		return 0;
	}
	if (ac<=0)
	{
		cout<<"\033[1;31m--> The grade number of accuracy must be higher than 0\033[0m";
		return 0;
	}
	cout<<"\033[1;32mOK now give me your angle in degree, i will convert it to radian and solve Sin(x)\033[0m :\t";
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
	cout<<"\033[1;36mSin(\033[0m"<<ans<<"\033[1;36m) = \033[0m"<<sin;
	cin.ignore();
}
