#include <stdio.h>
#include <stdlib.h>
int main()
{
	//�Ǹ�
	char id[8]="01370152";
	int i=0,sum=0;
	
	//�p��Ǹ��Ҧ��Ʀr�ۥ[
	
	for(i=0;i<8;i++)
	{
		sum=(id[i]-'0')+sum;
	}
	
	//���絲�G�A�Y�W�L�E�N�N��Ӧ�P�Q��ۥ[
	
	while(sum>9)
	{
		sum=sum/10+sum%10;
	}
	printf("%d",sum);

}