#include <stdio.h>
#include <stdlib.h>

typedef int(*OP)(int,int);
int add(int a,int b)
{
	
	return a+b;
	
}
int mul(int a,int b)
{
	
	return a*b;
	
}

int main()
{
	OP op=add;
	printf("%d\n",op(2,3));
	op=mul;
	printf("%d",op(2,3));	

}