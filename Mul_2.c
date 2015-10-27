#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0;
	int j=0;
	int C1=0;
	int C2=0;
	scanf("%d %d",&C1,&C2);
	
	for(i=0;i<=C1;i++)
	{
		for(j=0;j<=C1;j++)
		{
			printf(" %dX%d=%d",i,j,i*j);
		}
	printf("\n");
	}
	system("PAUSE");
}