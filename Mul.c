#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
	int i=0;
	int j=0;

	for(i=0;i<=atoi(argv[1]);i++)
	{
		for(j=0;j<=atoi(argv[2]);j++)
		{
			printf(" %dX%d=%d",i,j,i*j);
		}
	printf("\n");
	}
}