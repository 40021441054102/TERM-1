//--> system :
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

//--> int prototypes :
int read_to_matrix(char [][50]);
int write_to_file(char [][50], int);

//--> void prototypes :
void find_max(char [][50], int);
void print_data(char [][50], int);

//--> main :
int main()
{
	char str[15][50],str2;
	int num_of_players = read_to_matrix(str);
	cout<<"> Players with their score : \n\n";
	print_data(str, num_of_players);
	write_to_file(str, num_of_players);
	cout<<"\n> Best Player : \n\n";
	find_max(str, num_of_players);
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
    cout<<best<<" is the best football player in iran";
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
        cout<<StringStart;
    }
}

//--> write to file
int write_to_file(char o[][50], int b)
{
	ofstream op("c:\\output.txt");
	for(int i = 0; i < b; i++)
	{
		char *file;
		file = o[i];
		op<<file;
	}
 	op.close();
}
