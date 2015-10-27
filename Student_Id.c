#include <stdio.h>
#include <stdlib.h>
int main()
{
	//學號
	char id[8]="01370152";
	int i=0,sum=0;
	
	//計算學號所有數字相加
	
	for(i=0;i<8;i++)
	{
		sum=(id[i]-'0')+sum;
	}
	
	//檢驗結果，若超過九就將其個位與十位相加
	
	while(sum>9)
	{
		sum=sum/10+sum%10;
	}
	printf("%d",sum);

}