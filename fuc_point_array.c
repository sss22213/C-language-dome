#include <stdio.h>
#include <stdlib.h>

void func1(void);
void func2(void);
void func3(void);

int main()
{
	int i=0;
	void (*ptr[])(void)={func1,func2,func3};
	for(i=0;i<3;i++)
	{
		ptr[i]();
	}
	return 0;
}
void func1()
{
	printf("i am first\n");
	
}
void func2()
{
	
	printf("i am second\n");
}
void func3()
{
	printf("i am third\n");
	
}
