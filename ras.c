/*
1. ������ӽ�� p, q �A�O N = p*q
2. �]�w r �� (p-1, q-1) ��ƪ������ơA�q�`�����ϥ� r=(p-1)*(q-1)�C
3. ���@�ӻP r ���誺�� e �����[�K�K�_�C
4. ��X e �b mod r �U���Ϥ��� d�A�ϱo e*d = 1 mod r�A�]�N�O1 = (e*d) % r;
5. �H (N, e) ���p�_�A(N, d) �����_�A�N (N, d) ���}���ѱK�̡A�� (N, e) �h�ݦۤv�d�۫O�K�C
6. ���p���媺�Y�Ӱ϶��� m�A�[�K�ɳz�L m �P e �p��X c=m^e mod N �o��K��C
7. �ѱK�̥� m2 = c^d mod N ���覡�ѥX c ���K�� m2�A�� m2 ���M�|�O�쥻���T�� m�A�]�N�O m2=m�C
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
	/*RAS �[�K�Ѽ�*/
	int N=p*q;
	int r=(p-1)*(q-1);
	int e=17;
	int d=inv(e,r);
	//���_
	key[0]=N;key[1]=e;
	//�p�_
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