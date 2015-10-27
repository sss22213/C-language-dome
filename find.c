#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	int a1[3][5]={3,6,9,-8,1,2,4,6,8,10,11,7,5,3,2};
	int i=0,j=0,flag=0;
	for(i=0;i<3;i++)
	{	
		for(j=0;j<5;j++)
		{
			if(atoi(argv[1])==a1[i][j])
			{
				flag=1;
				break;
			}
			
		}
		if(flag==1)
		{
			break;
		}
	}
	printf("%d",a1[i][j]);
}