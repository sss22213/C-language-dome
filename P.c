#include <stdio.h>
#include <stdlib.h>
int step(int);

int main()
{
	//�ŧi��
	int n,m=0;
	printf("�п�Jn\n");
	scanf("%d",&n);
	printf("�п�Jm\n");
	scanf("%d",&m);
	//�p���
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