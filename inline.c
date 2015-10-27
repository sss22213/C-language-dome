#include <stdio.h>
#include <stdlib.h>

inline int max(a,b)
{
	return (a>b?a:b);
	
}
int main()
{
	int x=max(3,5);
	printf("%d",x);

}