#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	int input=atoi(argv[1]);
	int temp=0;
	while(input!=1)
	{
		if(input%2==1)
		{
			input=3*input+1;
			
		}
		else
		{
			input/=2;
			
			
		}
	}
	printf("%d",input);
}
//�W��:3n+1 �q�Q
//���:20150411
//�@��:�߳ն�