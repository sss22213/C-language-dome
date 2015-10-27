#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int answer=0,flag=0,question=0;
	srand(time(NULL));
	question=(rand()%20)+1;
	while(flag==0)
	{
		printf("請猜數字 \n");
		scanf("%d",&answer);
		if(answer==question)
		{
			flag=1;
			
		}
		else
		{
			printf("你猜錯囉!!\n");
			
			
		}
	}
	printf("你猜對囉!!\n");
}