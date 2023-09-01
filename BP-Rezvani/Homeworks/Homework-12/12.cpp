#include <iostream>
using namespace std;

struct user
{
	char Firstname[20];
	char Lastname[10];
	int grade;
	int age;
};
struct user user;

void show();

int main()
{
	cout<<"Please enter your First name: ";
	cin.getline(user.Firstname,sizeof(user.Firstname));
	cout<<"Please enter your Last name: ";
	gets(user.Lastname);
	cout<<"Please enter your grade: ";
	cin>>user.grade;
	cout<<"Please enter your age: ";
	cin>>user.age;
	show();
}


void show()
{
	cout<<user.Firstname<<endl;
	cout<<user.Lastname<<endl;
	cout<<user.grade<<endl;
	cout<<user.age<<endl;
	
}