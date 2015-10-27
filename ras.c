/*
1. 任取兩個質數 p, q ，令 N = p*q
2. 設定 r 為 (p-1, q-1) 兩數的公倍數，通常直接使用 r=(p-1)*(q-1)。
3. 取一個與 r 互質的數 e 做為加密密鑰。
4. 找出 e 在 mod r 下的反元素 d，使得 e*d = 1 mod r，也就是1 = (e*d) % r;
5. 以 (N, e) 為私鑰，(N, d) 為公鑰，將 (N, d) 公開給解密者，但 (N, e) 則需自己留著保密。
6. 假如明文的某個區塊為 m，加密時透過 m 與 e 計算出 c=m^e mod N 得到密文。
7. 解密者用 m2 = c^d mod N 的方式解出 c 的密文 m2，該 m2 必然會是原本的訊息 m，也就是 m2=m。
*/
#include <stdio.h>
#include <stdlib.h>
int Ciphertext(int Plaintext,int N,int E);
int Plaintext(int Ciphertext,int N,int D);
int *key_calue(int p,int q);
int inv(int e,int r);
int Pow_mod(int a,int k,int n);
int main()
{
	int Private_key[2];
	int Public_key[2];
	//
	int C;
	int P;
	//Key_List
	Private_key[0]=*key_calue(5,23);
	Private_key[1]=*(key_calue(5,23)+1);
	Public_key[0]=*(key_calue(5,23)+2);
	Public_key[1]=*(key_calue(5,23)+3);
	
	//
	C=Ciphertext(110,*Private_key,*(Private_key+1));
	P=Plaintext(C,*Public_key,*(Public_key+1));
	//Display
	
	printf("C=%d P=%d",C,P);
	
}
int *key_calue(int p,int q)
{
	static int key[4];
	/*RAS 加密參數*/
	int N=p*q;
	int r=(p-1)*(q-1);
	int e=17;
	int d=inv(e,r);
	//公鑰
	key[0]=N;key[1]=e;
	//私鑰
	key[2]=N;key[3]=d;
	return key;
}
int inv(int e,int r)
{
	int i=0;
	for(i=2;i<r;i++)
	{
		int re=(e*i) % r;
		if(re==1)
		{
			return i;
		}
	}
	
}
int Pow_mod(int a,int k,int n)
{
	int p=1,i;
	for (i=1; i<=k; i++) { 
    p = (p*a)%n;
	}
		return p;
	
}
int Ciphertext(int Plaintext,int N,int E)
{
	return Pow_mod(Plaintext,E,N);
}
int Plaintext(int Ciphertext,int N,int D)
{
	return Pow_mod(Ciphertext, D, N);
}