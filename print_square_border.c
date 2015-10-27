#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=0,j=0;
	char array[5][5]={};
	//print space
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			array[i][j]=' ';
			
		}
	}
	//print @
	for(i=0;i<5;i++)array[0][i]='@';
	for(i=0;i<5;i++)array[4][i]='@';
	for(i=0;i<5;i++)array[i][0]='@';
	for(i=0;i<5;i++)array[i][4]='@';
	//print
	for(i=0;i++;i<5)
	{
		for(j=0;j++;j<5)
		{
			printf("%c",array[i][j]);
			
		}
		printf("\n");
	}
	
}	