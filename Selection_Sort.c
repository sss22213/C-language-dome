//��ܱƧǪk
#include <stdio.h>
#include <stdlib.h>
void Swap(int*,int*);
int main()
{
	int i=0,j=0,min=0;
	int num[5]={52,28,15,32,3};
	for(i=0;i<5;i++)
	{	
		//�q�|���ƧǪ��Ʀr������i�p���Ʀr
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(num[j]<num[min])
			{
				min=j;
				
			}
			Swap(&num[min],&num[i]);
			
		}
	}
	for(i=0;i<5;i++)
	{
		printf(" %d",num[i]);
	}
	
	
}
void Swap(int* a,int* b)
{
	int Temp;
	Temp=*a;
	*a=*b;
	*b=Temp;
	
}
