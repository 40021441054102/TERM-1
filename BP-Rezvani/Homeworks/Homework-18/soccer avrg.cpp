#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int read_to_struct();
void PrintData();
float calc_average();
void calc_deviation();
struct player{
	char name[20];
	char family[20];
	float rate;
};
struct player profile[15];
int np;
float avrg;
main()
{
	np=read_to_struct();
	cout<<"\n~~~~~~~~~~~~~~ NameList ~~~~~~~~~~~~~~ \n";
	PrintData();
	cout<<"\n~~~~~~~~~~~~~ The Average ~~~~~~~~~~~~~~\n\n";
	avrg=calc_average();
	cout<<"\n~~~~~~~~~~~~~ Standard Deviation ~~~~~~~~~~~~~~\n\n";
	calc_deviation();
	
}
//-----------------------------------------------------
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
//-------------------------------------------------------
//This function prints every strings line by line
void PrintData()
{
	for(int i=0; i<np; i++)
		cout<<profile[i].name<<' '<<profile[i].family<<":"<<profile[i].rate<<endl<<endl;
}
//-------------------------------------------------------
float calc_average()
{
	float sum=0;
	int i;
	for(i=0;i<np;i++)
		sum+=profile[i].rate; //summating all popularity numbers 
	cout<<"The average rate of all players is "<<sum/np<<endl; //calculate the average and print it
	return(sum/np);
}
//------------------------------------------------------
void calc_deviation()
{
	int i;
	float deviation;
	ofstream fp("d:\\out2.txt");
	for(i=0;i<np;i++)
	{
		deviation=avrg-profile[i].rate; 	//calculating the deviations
		cout<<profile[i].name<<' '<<profile[i].family<<" : "<<deviation<<endl<<endl;	
		fp<<profile[i].name<<' '<<profile[i].family<<": "<<deviation<<endl<<endl;		//put the names and related deviations in to the file
	}
	fp.close();
}
