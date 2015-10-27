#include <stdio.h>
#include <stdlib.h>
int Successione_di_Fibonacci(int n);
int main(int argc,char* argv[])
{
	int i=0;
	int n=0;
	n=atoi(argv[1]);
	for(i=0;i<10;i++)
	{
		printf("%d\n",Successione_di_Fibonacci(i));
	}
}
int Successione_di_Fibonacci(int n)
{
	if(n==0)
	{
		return 0;
		
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		//n-2與n-1來維持將n減少
		return (Successione_di_Fibonacci(n-2)+Successione_di_Fibonacci(n-1));
		
		
	}
	
}