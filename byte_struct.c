#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	//�C�|�줸�|�sĶ�b�e��
	unsigned lo:4;
	unsigned hi:4;
	
}byte;
int main()
{
	byte s1={ .hi=0x0F, .lo=0x0C};
	unsigned char *bp=(unsigned char*)&s1;
	printf("byte=%02x\n",*bp);
	
	

}