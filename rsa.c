/*
1. ������ӽ�� p, q �A�O N = p*q
2. �]�w r �� (p-1, q-1) ��ƪ������ơA�q�`�����ϥ� r=(p-1)*(q-1)�C
3. ���@�ӻP r ���誺�� e �����[�K�K�_�C
4. ��X e �b mod r �U���Ϥ��� d�A�ϱo e*d = 1 mod r
5. �H (N, e) ���p�_�A(N, d) �����_�A�N (N, d) ���}���ѱK�̡A�� (N, e) �h�ݦۤv�d�۫O�K�C
6. ���p���媺�Y�Ӱ϶��� m�A�[�K�ɳz�L m �P e �p��X c=m^e mod N �o��K��C
7. �ѱK�̥� m2 = c^d mod N ���覡�ѥX c ���K�� m2�A�� m2 ���M�|�O�쥻���T�� m�A�]�N�O m2=m�C
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int M=235; //����
	/*RAS �[�K�Ѽ�*/
	int p=5,q=23;
	int N=p*q;
	int r=(p-1)*(q-1);
	int e=17;
	int d=e%r;
	int c=M^e%N;
	
	printf("%d\n",c);//�[�K
	printf("%d",c^d%N);//�ѱK
	
}