#include <stdio.h>
#include <stdlib.h>
int solution[100];    // �ΨӦs��@�եi�઺����
int used[100];       //�����Ʀr�O�_�ϥιL�A�ιL�� true�C
void enumerate_permutations(int);
void backtrack(int,int);

int main()
{
	int n=0;
	printf("�п�Jn\n");
	scanf("%d",&n);
	 enumerate_permutations(n);
	 system("pause");
}
void backtrack(int n,int n2)
{
    // it's a solution
	int i=0;
    if (n == n2)
    {
        //�L�X�@�եi�઺�ƾ�
        for (i=0;i<n2; i++)
            printf("%d",solution[i]);
		
		printf("\n");
 
        //return;
    }
	
	for(i=1;i<=n2;i++)
	{
		if (!used[i])
        {
			used[i] = 1;     //�����ιL���Ʀr
		
			solution[n] = i;   //�� n ���J�Ʀri
			backtrack(n+1,n2);    //�~��T�|���᪺����
 
			used[i] = 0;    //�^���Χ����Ʀr
		}	
	}
	
   
}
 
void enumerate_permutations(int k)
{
	int i=0;
    for (i=0; i<5; i++) // initialization
    used[i] = 0;
 
    backtrack(0,k);   
}
