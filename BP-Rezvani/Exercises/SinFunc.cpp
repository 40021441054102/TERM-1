#include <iostream>
#include <cmath>
#include <iomanip>
#define _USE_MATH_DEFINES
using namespace std;
long int factorial(int n)
{
	int i;
	long int fact=1;
	for (i=1;i<=n;i++)
	fact*=i;
	return fact;
}
int main()
{
	int acc,i,sign=1;
	long double x,y,sum=0;
	cout<<"Enter your number in degree : ";
	cin>>y;
	x=y*(M_PI)/180;
	cout<<"Accuracy : ";
	cin>>acc;
	for (i=1;i<=acc;i+=2)
	{
		sum += sign*pow(x,i)/factorial(i);
		sign = -sign;
	} 
	cout<<"Sin("<<y<<") : "<<setprecision(20)<<sum;
	return 0;
}