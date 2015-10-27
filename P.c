#include <stdio.h>
#include <stdlib.h>
int step(int);

int main()
{
	//宣告區
	int n,m=0;
	printf("請輸入n\n");
	scanf("%d",&n);
	printf("請輸入m\n");
	scanf("%d",&m);
	//計算區
	printf("%d",step(n)/step(n-m));
}
int step(int k)
{
	int i=0;
	int sum=1;
	for(i=1;i<=k;i++)
	{
		sum=i*sum;
		
		
	}
	
	return sum;
}