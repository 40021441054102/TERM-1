#include <iostream>
using namespace std;

int main()
{
	int n,i=1,flag=0;
	cout<<"\n\033[1;33madade morede nazar ra vared konid :\t\033[0m";
	cin>>n;
	cout<<"\t\033[1;33mmaghsum'ol'elayh ha :\033[0m ";

	while (i<=n)
	{
		if (n%i==0)
		{
			flag++;
			cout<<"  "<<i;
		}
		i++;
	}
	if (flag==2)
	{
		cout<<"\033[1;36m\n\n░█████╗░██╗░░░██╗░█████╗░██╗░░░░░ \033[0m"<<"\033[1;36m░█████╗░\033[0m";
		cout<<"\033[1;36m\n██╔══██╗██║░░░██║██╔══██╗██║░░░░░ \033[0m"<<"\033[1;36m██╔══██╗\033[0m";
		cout<<"\033[1;36m\n███████║╚██╗░██╔╝███████║██║░░░░░ \033[0m"<<"\033[1;36m╚═╝███╔╝\033[0m";
		cout<<"\033[1;36m\n██╔══██║░╚████╔╝░██╔══██║██║░░░░░ \033[0m"<<"\033[1;36m░░░╚══╝░\033[0m";
		cout<<"\033[1;36m\n██║░░██║░░╚██╔╝░░██║░░██║███████╗ \033[0m"<<"\033[1;36m░░░██╗░░\033[0m";
		cout<<"\033[1;36m\n╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝╚══════╝ \033[0m"<<"\033[1;36m░░░╚═╝░░\033[0m";
		cout<<"\033[1;32m\n░░░░░░░░░░░░▄▄ \033[0m"<<"";
		cout<<"\033[1;32m\n░░░░░░░░░░░█░░█ \033[0m"<<"";
		cout<<"\033[1;32m\n░░░░░░░░░░░█░░█ \033[0m"<<"";
		cout<<"\033[1;32m\n░░░░░░░░░░█░░░█ \033[0m"<<"";
		cout<<"\033[1;32m\n░░░░░░░░░█░░░░█ \033[0m"<<"";
		cout<<"\033[1;32m\n███████▄▄█░░░░░██████▄ \033[0m"<<"";
		cout<<"\033[1;32m\n▓▓▓▓▓▓█░░░░░░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;32m\n▓▓▓▓▓▓█░░░░░░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;32m\n▓▓▓▓▓▓█░░░░░░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;32m\n▓▓▓▓▓▓█░░░░░░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;32m\n▓▓▓▓▓▓█░░░░░░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;32m\n▓▓▓▓▓▓█████░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;32m\n██████▀░░░░▀▀██████▀ \033[0m"<<"";
		cout<<"\n\n\t\033[1;33madade shoma aval ast zira\033[0m "<<flag<<" \033[1;33mmaghsum'ol'elayh darad\n\n\033[0m";
	}
	else
	{
		cout<<"\033[1;36m\n\n░█████╗░██╗░░░██╗░█████╗░██╗░░░░░ \033[0m"<<"\033[1;36m░█████╗░\033[0m";
		cout<<"\033[1;36m\n██╔══██╗██║░░░██║██╔══██╗██║░░░░░ \033[0m"<<"\033[1;36m██╔══██╗\033[0m";
		cout<<"\033[1;36m\n███████║╚██╗░██╔╝███████║██║░░░░░ \033[0m"<<"\033[1;36m╚═╝███╔╝\033[0m";
		cout<<"\033[1;36m\n██╔══██║░╚████╔╝░██╔══██║██║░░░░░ \033[0m"<<"\033[1;36m░░░╚══╝░\033[0m";
		cout<<"\033[1;36m\n██║░░██║░░╚██╔╝░░██║░░██║███████╗ \033[0m"<<"\033[1;36m░░░██╗░░\033[0m";
		cout<<"\033[1;36m\n╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝╚══════╝ \033[0m"<<"\033[1;36m░░░╚═╝░░\033[0m";
		cout<<"\033[1;31m\n███████▄▄███████████▄ \033[0m"<<"";
		cout<<"\033[1;31m\n▓▓▓▓▓▓█░░░░░░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;31m\n▓▓▓▓▓▓█░░░░░░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;31m\n▓▓▓▓▓▓█░░░░░░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;31m\n▓▓▓▓▓▓█░░░░░░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;31m\n▓▓▓▓▓▓█░░░░░░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;31m\n▓▓▓▓▓▓███░░░░░░░░░░░░█ \033[0m"<<"";
		cout<<"\033[1;31m\n██████▀░░█░░░░██████▀ \033[0m"<<"";
		cout<<"\033[1;31m\n░░░░░░░░░█░░░░█ \033[0m"<<"";
		cout<<"\033[1;31m\n░░░░░░░░░░█░░░█ \033[0m"<<"";
		cout<<"\033[1;31m\n░░░░░░░░░░░█░░█ \033[0m"<<"";
		cout<<"\033[1;31m\n░░░░░░░░░░░█░░█ \033[0m"<<"";
		cout<<"\033[1;31m\n░░░░░░░░░░░░▀▀ \033[0m"<<"";
		cout<<"\n\n\t\033[1;33madade shoma aval nist zira\033[0m "<<flag<<" \033[1;33mmaghsum'ol'elayh darad\n\n\033[0m";
	}
	cin.ignore();
} 