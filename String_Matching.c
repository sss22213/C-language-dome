#include <stdio.h>
#include <stdlib.h>
int main()
{
	char s1[17]="I am handsome boy";
	char s2[4]="am h";
	int i=0,j=0;
	int match=1;
	for(i=0;i<17;i++)
	{
		match=1;
		for(j=0;j<4;j++)
		{
			if(s1[i+j]!=s2[j])
			{
				match=0;
				
			}
			
		}
		if(match==1)
		{
			
			break;
		}
		
	}
	printf("¦b²Ä%d­Ó",i);

}