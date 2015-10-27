#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv)
{
	int n1=argv[1];
	int n2=argv[2];
	int i,j;
	int *ptr=malloc(n1*n2*sizeof(int));
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			*(ptr+n1*i+j)=i+j;
			
			
		}
		
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d",*(ptr+n1*i+j));
			
			
		}
		
	}
}