/*
1. 任取兩個質數 p, q ，令 N = p*q
2. 設定 r 為 (p-1, q-1) 兩數的公倍數，通常直接使用 r=(p-1)*(q-1)。
3. 取一個與 r 互質的數 e 做為加密密鑰。
4. 找出 e 在 mod r 下的反元素 d，使得 e*d = 1 mod r
5. 以 (N, e) 為私鑰，(N, d) 為公鑰，將 (N, d) 公開給解密者，但 (N, e) 則需自己留著保密。
6. 假如明文的某個區塊為 m，加密時透過 m 與 e 計算出 c=m^e mod N 得到密文。
7. 解密者用 m2 = c^d mod N 的方式解出 c 的密文 m2，該 m2 必然會是原本的訊息 m，也就是 m2=m。
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int M=235; //明文
	/*RAS 加密參數*/
	int p=5,q=23;
	int N=p*q;
	int r=(p-1)*(q-1);
	int e=17;
	int d=e%r;
	int c=M^e%N;
	
	printf("%d\n",c);//加密
	printf("%d",c^d%N);//解密
	
}