#include <stdio.h>
#include <stdlib.h>
int main()
{
	//�ŧi��
	int n=0,m=0,i=0;
	double n_sum=1,m_sum=1,answer=0;
	while(n==0 || m==0 || m>n)
	{	
		printf("�п�Jn:");
		scanf("%d",&n);
		printf("�п�Jm:");
		scanf("%d",&m);
		if(n==0 || m==0 || m>n)
		{
			printf("��J���Ʀr���~\n");
			
		}
	}
	//�p���
	//���l
	for(i=1;i<=m;i++)
	{
		n_sum=i*n_sum;
	}
	//����
	for(i=1;i<=m;i++)
	{
		m_sum=n*m_sum;
		n--;
	}
	answer=m_sum/n_sum;
	printf("%e\n",answer);
	system("pause");
}

