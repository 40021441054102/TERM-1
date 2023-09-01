// String and file
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int read_to_matrix(char [][50]);
void convert_age_print(char [][50], int );
void adjust_data(char [][50],int );

main()
{
  char str[15][50];
  int num_of_students = read_to_matrix(str);
  adjust_data(str, num_of_students);

  cout << " \n *************** [ Names, families & ages: ] *************** \n\n ";
  convert_age_print(str, num_of_students);
}

// This function takes the strings from the file
int read_to_matrix(char p[][50])
{
  FILE *fp;
  fp = fopen("d:\\students2.txt", "r");
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

// This function adjust the strings
void adjust_data(char q[][50],int n)
{
  char *ptr;
  for(int i = 0; i < n; i++)
  {
    // This Command removes the last character in each row of the string
    q[i][strlen(q[i]) - 1]= '\0';
    // This Command removes the commos
  }
}

// This function adjusts the names and prints them according to their age
void convert_age_print(char b[][50], int n)
{
  for(int i = 0; i < n; i++)
  {
  	char *pNextDelim, *pLastDelim, *pStringStart;
  	
    pStringStart = b[i];
    pNextDelim = strchr(pStringStart, ',');
    pLastDelim = strchr(pNextDelim+1, ',');
    *pNextDelim = 32;
    *pLastDelim = '\0';

    int born = atoi(pLastDelim+1);
    cout << pStringStart << " has " << 1399 - born << " years old. \n ";
  }
}
