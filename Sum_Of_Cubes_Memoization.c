#include <stdio.h>
#include <stdlib.h>
int sum_of_cubes(int n)
{
	static int answer[10+1]={};
	int i=0,sum=0;
	if(answer[n]==0)
	{
		for(i=0;i<=n;i++)
		{
			sum=i*i*i+sum;
			
		}
		answer[n]=sum;
		
	}
	return answer[n];
	
}
int main(int argc,char* argv[])
{
	
	printf("%d",sum_of_cubes(atoi(argv[1])));

}