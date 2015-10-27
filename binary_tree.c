#include <stdio.h>
#include <stdlib.h>
int tree[5+1]={0,1,2,3,4,5};
int left_child(int index){return index*2;}
int right_child(int index){return index*2+1;}

int main()
{
	int i=0;
	
		printf("tree: %d\n",tree[1]);
		printf("Left: %d\n",tree[left_child(1)]);
		printf("Right: %d\n",tree[right_child(1)]);
	

}