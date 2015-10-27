//¦r¥À²Î­p
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char s1[]="hellow would";
	int s2[26]={0};
	int i;
	int num;
	//search
	for(i=0;i<sizeof(s1);i++)
	{
		num=s1[i]-97;
		s2[num]=s2[num]+1;
		
	}
	//print
	for(i=0;i<26;i++)
	{
		printf("%d",s2[i]);
		
	}

}