#include <iostream>
using namespace std;

//prototype
long double SumMultFunc(long double,long double);
long double SumPowFunc(long double,long double);

int main()
{
	int x,y,sum=0,j=0;
	cout<<"\n\033[1;33mFrist Number :\t\033[0m";
	cin>>x;
	cout<<"\n\033[1;33mFrist Number :\t\033[0m";
	cin>>y;
	cout<<"\n\033[1;36mRecursive Answer :\t\033[0m";
	cout<<SumPowFunc(x,y);
	cout << endl;
}

long double SumMultFunc(long double n1, long double n2)
{
    if(n2 == 1) 
      return n1;
    else
      return n1 + SumMultFunc(n1, n2 - 1);
}

long double SumPowFunc(long double n1, long double n2)
{
		if (n2 == 0)
			return 1;
    else  if(n2 == 1) 
      return n1;
    else
      return SumMultFunc(n1,SumPowFunc(n1, n2 - 1));
}