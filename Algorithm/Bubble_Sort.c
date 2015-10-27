//氣泡排序法
#include <stdio.h>
#include <stdlib.h>
void Swap(int* a,int* b);

int main()
{
	int i=0,j=0;
	int Arr1[5]={2,25,88,1,58};
	int Temp=0;
	
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{	
			if(Arr1[j]<Arr1[i])
			{
			
				Swap(&Arr1[j],&Arr1[i]);
			}
			
		}
	}
	//列印結果
	for(i=0;i<5;i++)
	{
		printf(" %d",Arr1[i]);
		
		
	}
}

void Swap(int* a,int* b)
{
	int Temp;
	Temp=*a;
	*a=*b;
	*b=Temp;	
}