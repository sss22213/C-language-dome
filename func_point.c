#include <stdio.h>
#include <stdlib.h>
int func1(int a,int b)
{
	return a+b;
	
}
int func2(int a,int b)
{
	return a*b;
	
}

int main()
{
	int (*op)(int a,int b);
	op=func1;
	printf("%d\n",op(1,2));
	op=func2;
	printf("%d\n",op(1,2));

}