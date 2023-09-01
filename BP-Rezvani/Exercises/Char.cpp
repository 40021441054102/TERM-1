#include <iostream>
using namespace std;

int main()
{
	 // Declare the variables
    char ch;
    cout << "Alphabets from A to Z are : \n";
    for (ch='A';ch<='Z',ch+=2)
    {
        cout<<ch<<'\t';
    }
	cin.ignore();
} 