#include <iostream>  
#include <cmath>
using namespace std;  
int main()  
{  
	long int n,fact=1,i=1;
	cout<<"adadi ke mikhahid factorial begirid ro benevisid :"; 
 	cin>>n;    
	while (i<=n)
	{
		fact = fact *i;
		i = i + 1;
	}
	cout<<"factorial adade "<<n<<" , "<<fact<<" mibashad";
	cin.ignore();
}  