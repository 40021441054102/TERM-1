#include<iostream>
using namespace std;
int main()
{
    int c;
    float n,m,ans;
        cout<<"\033[1;36mType 1 for +\033[0m\n";
        cout<<"\033[1;36mType 2 for -\033[0m\n";
        cout<<"\033[1;36mType 3 for *\033[0m\n";
        cout<<"\033[1;36mType 4 for /\033[0m\n";
        cout<<"\033[1;32myour choise \033[0m?\t ";
        cin>>c;
        if (c>=1 && c<=4)
        {
            cout<<"\n\033[1;35mGive me your numbers \033[0m:\n";
            cin>>n;
			cin>>m;
        }
		if (c<1 && c>4)
		{
			cout<<"\n\033[1;31m You send me wrong number :( restart the program";
		}
        switch(c)
        {
            case 1:
                ans = n+m;
                cout<<"\033[1;32m\nAnswer = \033[0m"<<ans;
                break;
            case 2:
                ans = n-m;
                cout<<"\033[1;32m\nAnswer = \033[0m"<<ans;
                break;
            case 3:
                ans = n*m;
                cout<<"\033[1;32m\nAnswer = \033[0m"<<ans;
                break;
            case 4:
				if (n>m)
				{
					ans = n/m;
                	cout<<"\033[1;32m\nAnswer = \033[0m"<<ans;
                	break;
				}
                if (n<m)
				{
					cout<<"\033[1;31m\nIn / mode n must be higher than m";
					return 0;
				}
            default:
                cout<<"\033[1;32m\nWrong Number of option";
                break;
		}
    cin.ignore();
}