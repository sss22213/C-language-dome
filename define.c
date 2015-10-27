#include <stdio.h>
#include <stdlib.h>

#define max(a,b)(a<b?a:b);

int main()
{
	int x=max(3,5);
	printf("%d",x);

}