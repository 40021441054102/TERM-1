#include <iostream>
using namespace std;

int main()
{
	int r=1,BMM,KMM,mult;
	cout<<"\n\033[1;33mavalin adad :\t\033[0m";
	cin>>BMM;
	cout<<"\n\033[1;33mdovomin adad :\t\033[0m";
	cin>>KMM;
	mult = BMM * KMM;
	for (;r!=0;) 
	{
		r = BMM % KMM;
		BMM = KMM;
		KMM = r;
    }
	KMM = mult / BMM;
	cout<<"\n\033[1;36mBMM :\t\033[0m"<<BMM;
	cout<<"\n\033[1;36mKMM :\t\033[0m"<<KMM;
	cin.ignore();
}


