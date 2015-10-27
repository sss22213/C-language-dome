#include <stdio.h>
#include <stdlib.h>
int main()
{
	char question[5]="4128";
	char answer[5]="0000";
	int flag=1;
	int i=0;
	while(flag)
	{
		for(i=0;i<5;i++)
		{
			if(question[i]==answer[i])
			{
				flag=0;
				
			}
			else
			{
				answer[i]++;
				flag=1;
				break;
			}
			
		}
	}
	printf("%s",answer);
}