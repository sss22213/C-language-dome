//字母小寫轉換，一次轉換
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char s1[12]="Hellow wouLd";
	int i;
	for(i=0;i<12;i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
		{
			s1[i]=s1[i]+('a'-'A');
			
		}	
		
		
	}	
	for(i=0;i<12;i++)
	{
		printf("%c",s1[i]);
	}

}