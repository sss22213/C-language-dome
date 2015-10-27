#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	int i=0;
	int s1[5]={2,285,2,-58,22};
	for(i=0;i<5;i++)
	{
		if(atoi(argv[1])==s1[i])
		{
			break;
			
		}
	}	
	printf("%d",s1[i]);
}