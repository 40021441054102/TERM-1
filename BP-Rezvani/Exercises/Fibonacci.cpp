#include<iostream>
using namespace std;
int main()
{
    int f1=1,f2=1,f3,length,i=3;
    cout<<"tedade jomalate khaste shode az donbale ra benevisid : "; 
	cin>>length;
    cout<<"donbale : "<<f1<<" "<<f2<<" ";
   
    while(i <= length)
    {
     f3 = f1 + f2;
	 cout<<f3<<" ";
	 f1 = f2;
	 f2 = f3;
	 i = i + 1;
    }
     
    cin.ignore();
}
