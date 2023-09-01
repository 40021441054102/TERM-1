#include <iostream>
using namespace std;
int main()
{
int x=1,f=1,n,i=1;
cin>>n;
while (i<=n)  
{
	x = x*f;             
	cout<<x<<"\n";       
	if (f==-1)     
    {
		x = x * -1;          
    }      
	x++;                
	f = -f;             
	i++;	           
}
return 0;
}