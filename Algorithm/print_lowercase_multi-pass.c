//字母小寫轉換，多次轉換
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
		char s1[]="Hellow Would";
		char s2[20];
		int i=0;
		//複製字串
		strcpy(s2,s1);
		//轉換小寫
		for(i=0;i<20;i++)
		{
			if(s2[i]>='A' && s2[i]<='Z')
			{
				s2[i]=s2[i]+('a'-'A');
				
			}
		}
		//print
		printf("%s",s2);
}