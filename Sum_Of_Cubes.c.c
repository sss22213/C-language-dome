#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
	int i=0;
	int sum=0;
	for(i=1;i<argv[1];i++)
	{
		sum=i*i*i+sum;
		
	}
	printf("%d",sum);

}