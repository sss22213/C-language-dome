#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc,char* argv[])
{
	int i=0;
	for(i=0;i<=atoi(argv[1]);i++)
	{
		int sqrt_i=sqrt(i);
		if(sqrt_i*sqrt_i==i)
		{
			printf("%d=",i);
			printf(" �O�����\n");
			
		}
		else
		{
			printf("%d=",i);
			printf(" ���O�O�����\n");
			
		}
		
		
	}
	

}