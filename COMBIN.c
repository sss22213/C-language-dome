#include <stdio.h>
#include <stdlib.h>
int main()
{
	//宣告區
	int n=0,m=0,i=0;
	double n_sum=1,m_sum=1,answer=0;
	while(n==0 || m==0 || m>n)
	{	
		printf("請輸入n:");
		scanf("%d",&n);
		printf("請輸入m:");
		scanf("%d",&m);
		if(n==0 || m==0 || m>n)
		{
			printf("輸入的數字錯誤\n");
			
		}
	}
	//計算區
	//分子
	for(i=1;i<=m;i++)
	{
		n_sum=i*n_sum;
	}
	//分母
	for(i=1;i<=m;i++)
	{
		m_sum=n*m_sum;
		n--;
	}
	answer=m_sum/n_sum;
	printf("%e\n",answer);
	system("pause");
}

