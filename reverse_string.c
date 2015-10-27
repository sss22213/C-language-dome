//は锣﹃_猅羭猭
#include <stdio.h>
#include <stdlib.h>
void Swap(char*,char*);
int main()
{
	char s2[12]="Hellow Would";
	int i=0;
	//ユ传碞单р场じユ传
	for(i=0;i<(12/2);i++)
	{
		Swap(&s2[i],&s2[11-i]);
	}	
	
	for(i=0;i<12;i++)
	{
		printf("%c",s2[i]);
	}
		
}
void Swap(char *a,char *b)
{
	int Temp;
	Temp=*a;
	*a=*b;
	*b=Temp;
	
}