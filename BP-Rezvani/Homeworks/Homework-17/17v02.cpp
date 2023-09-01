//--> system :
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

//--> int prototypes :
int read_to_matrix(char [][50]);
int write_to_file(char [][50], int);
int inverse_write_to_file(char [][50], int);

//--> void prototypes :
void find_max(char [][50], int);
void print_data(char [][50], int);
void find_player(char [][50], int);

//--> main :
int main()
{
	char str[15][50];
	int num_of_players = read_to_matrix(str);
	cout<<"> Players with their score : \n\n";
	print_data(str, num_of_players);
	write_to_file(str, num_of_players);
	inverse_write_to_file(str, num_of_players);
	cout<<"\n\n> Best Player : \n\n";
	find_max(str, num_of_players);
	cout<<"\n\n> Now you can search a player by score : ";
	find_player(str, num_of_players);
}

//--> read to matrix :
int read_to_matrix(char p[][50])
{
	FILE *fp;
	fp = fopen("c:\\football.txt", "r");
	if(!fp)
	{
		cerr<< "\n file IO error!!! ";
		return 0;
	}
	char buffer[50];
	int i = 0;
	while(fgets(buffer, sizeof buffer, fp))
	{
		strcpy(p[i], buffer);
		i++;
	}
	fclose(fp);
	return i;
}

//--> find max :
void find_max(char d[][50], int n)
{
    int min=99999,max=-99999;
	char *pNum, *pStringStart,*best;
    for(int i = 0; i < n; i++)
    {
        pStringStart = d[i];
		pNum = strchr(pStringStart, ':');
		*pNum = '\0';
        float digit = atof(pNum+1);

        if (digit>max)
        {
            max = digit;
        	best = d[i];
        }

    }
    cout<<" - "<<best<<" is the best football player in iran";
}

//--> print data :
void print_data(char r[][50], int x)
{
    for(int i = 0; i < x; i++)
    {
        char *NextDelim, *LastDelim, *StringStart;
        StringStart = r[i];
        NextDelim = strchr(StringStart, ',');
        LastDelim = strchr(NextDelim+1, ',');
        *NextDelim = 32;
        *LastDelim = ':';
        cout<<" - "<<StringStart;
    }
}

//--> write to file :
int write_to_file(char o[][50], int b)
{
	ofstream op("output.txt");
	for(int i = 0; i < b; i++)
	{
		char *file;
		file = o[i];
		op<<file;
	}
 	op.close();
}

//--> inversed writing file :
int inverse_write_to_file(char t[][50], int u)
{
	ofstream op2("output2.txt");
	for(int i = u - 1; i >= 0; i--)
	{
		char *file2;
		file2 = t[i];
		op2<<file2;
	}
	op2.close();
}

//--> find players
void find_player(char u[][50], int e)
{
	float score;
	cin>>score;
	char *pNum, *pStringStart, *found;
    for(int i = 0; i <= e; i++)
    {
        pStringStart = u[i];
		pNum = strchr(pStringStart, '\0');
		*pNum = '\0';
        float digit = atof(pNum+1);

        if (digit==score)
        {
            found = u[i];
			cout<<"\n"<<" - "<<found;
        }
    }
}