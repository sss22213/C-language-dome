#include <stdio.h>
#include <stdlib.h>
int main()
{
	int s1[5]={3, 6, 1, 7, 2};
	int i=0,j=0;
	int sum=0;
	for(i=0,j=-1;j<5;)
	{
		//小於，右邊伸長
		if(sum<10)
		{
			j++;
			sum+=s1[j];
			
		}
		else if(sum==10)
		{
			j++;
			sum+=s1[j];
			
		}
		//大於，左邊縮短
		else if(sum>10)
		{
			sum-=s1[i];
			i++;
			
		}
		if(sum==10)
		{
			printf("%d,%d\n",i,j);
			
		}
		
	}
	
}