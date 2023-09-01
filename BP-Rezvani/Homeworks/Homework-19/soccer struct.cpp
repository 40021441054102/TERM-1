#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int read_to_struct();
void PrintData();
void inverse_write_to_file();
void Count_a();
void replace_name();
void find_max();
void find_player();

struct player{
	char name[20];
	char family[20];
	float rate;
};
struct player profile[15];
int np;

main()
{
	np=read_to_struct();
	cout<<"\n~~~~~~~~~~~~~~ NameList ~~~~~~~~~~~~~~ \n";
	PrintData();
	inverse_write_to_file();
	cout<<"\n~~~~~~~~~~~~~~ The Quantity Of A's ~~~~~~~~~~~~~~~~~\n";
	Count_a();
	cout<<"\n~~~~~~~~~~~~~ New List ~~~~~~~~~~~~~~~~\n\n";
	replace_name();
	PrintData();
	cout<<"\n~~~~~~~~~~~~ The Best Footballist ~~~~~~~~~~~~~\n\n";
	find_max();
	cout<<"\n\n~~~~~~~~~~~~ Names of Called numbers ~~~~~~~~~~~~~\n";
	find_player();
}
int read_to_struct()
{
	FILE *fp;
	fp=fopen("d://football.txt","r");
	if(!fp)
	{
		cout<<"File I/O Error! ";
		return 0;
	}
	char buffer[50];
	char *pStringStart, *pFirstDelim, *pLastDelim ;
	int i;
	for(i=0;fgets(buffer,sizeof buffer, fp);i++)
	{
		buffer[strlen(buffer)-1]='\0';	//Removing the last character of each line
		pStringStart=buffer;
		pFirstDelim=strchr(pStringStart ,',');	//Finding the first delimiter
		pLastDelim=strchr(pFirstDelim + 1,',');	//Finding the second delimiter
		//Replacing Null with commas
		*pFirstDelim = '\0';	
		*pLastDelim = '\0';
		profile[i].rate = atof(pLastDelim+1);	//changing string to float number
		strcpy(profile[i].name,pStringStart);
		strcpy(profile[i].family,pFirstDelim+1);
	}
	fclose(fp);
	return i;
}
//---------------------------------------------
//This function prints every strings line by line
void PrintData()
{
	for(int i=0; i<np; i++)
		cout<<profile[i].name<<' '<<profile[i].family<<":"<<profile[i].rate<<endl;
}
//----------------------------------------------
//This function creats a new file and writes the inversed strings in 
void inverse_write_to_file()
{
	ofstream fp("d:\\output2.txt");
	if(!fp)
		cout<<"I/O Error!";
	for(int i=np-1;i>-1;i--) //inversing the strings
		fp<<profile[i].name<<' '<<profile[i].family<<":"<<profile[i].rate<<endl;
	fp.close();
}
//----------------------------------------------
//This function counts and prints  the number of letter Aa in each line
void Count_a()
{
	int cnt_a, i, j;
	for(i=0;i<np;i++)
	{
		cnt_a=0 ;
		for(j=0;j<strlen(profile[i].name);j++)
			if(profile[i].name[j]=='A' || profile[i].name[j]=='a' )
				cnt_a++;		
		for(j=0;j<strlen(profile[i].family);j++)
			if( profile[i].family[j]=='A' || profile[i].family[j]=='a' )
				cnt_a++;
		cout<<profile[i].name<<" "<<profile[i].family<<":"<< cnt_a <<endl;
	}

}
//-----------------------------------------------
void replace_name()
{
	char str1[10], str2[10];
	cout<<"Enter the first LastName: "; 	//Enter the lastname you want to be changed
	gets(str1);
	cout<<"Enter the second LastName: ";	//Enter the last name you want to be replaced
	gets(str2);
	cout<<"\n";
	for(int i=0;i<np;i++)
		if(!strncmp(profile[i].family,str1,strlen(str1)))
		{
				strcpy(profile[i].family,str2);
		}
}
//-----------------------------------------------
//This function finds the one who has the best score and prints his name
void find_max()
{
	float max = 0;
	int x=-1;
	for(int i=0; i<np; i++)
  	{
     	if (profile[i].rate > max)
     	{	x=i;
       		max =profile[i].rate;
       	}
  	}
	cout<<profile[x].name<<" "<<profile[x].family<<" is the best football player in Iran.";
}
//--------------------------------------------------
void find_player()
{
	float n;
	cout<<"\nEnter your selected popularity number: ";
	cin>>n;
	cout<<"\n";
	for(int i=0;i<np;i++)
	{
		if(profile[i].rate==n)
		 	cout<<profile[i].name<<" "<<profile[i].family<<":"<<profile[i].rate<<endl;
	}
}
