#include <stdio.h>
#include <stdlib.h>
int solution[100];    // 用來存放一組可能的答案
int used[100];       //紀錄數字是否使用過，用過為 true。
void enumerate_permutations(int);
void backtrack(int,int);

int main()
{
	int n=0;
	printf("請輸入n\n");
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
        //印出一組可能的數據
        for (i=0;i<n2; i++)
            printf("%d",solution[i]);
		
		printf("\n");
 
        //return;
    }
	
	for(i=1;i<=n2;i++)
	{
		if (!used[i])
        {
			used[i] = 1;     //紀錄用過的數字
		
			solution[n] = i;   //第 n 格填入數字i
			backtrack(n+1,n2);    //繼續枚舉之後的維度
 
			used[i] = 0;    //回收用完的數字
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
