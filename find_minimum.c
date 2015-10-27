#include <stdio.h>
#include <stdlib.h>
void swap(int*,int*);
int main()
{
	int num[5]={2,-5,96,88,52};
	int i=0,j=0,min=0;
	for(j=0;j<5;j++)
	{
		min=num[j];
		for(i=j;i<5;i++)
		{
			if(num[i]<min)
			{
				swap(&num[i],&num[j]);
				
			}
		}
	}
	for(j=0;j<5;j++)
	{
		printf(" %d",num[j]);
	}
}
void swap(int *a,int *b)
{
	int Temp=0;
	Temp=*a;
	*a=*b;
	*b=Temp;
	
}