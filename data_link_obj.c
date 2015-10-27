#include <stdio.h>
#include <stdlib.h>
typedef struct lnode{
	struct lnode *next;	
}node;

typedef struct{
	char name[5];
	int age;
}p1;

int main()
{
	p1 pa,pb,pc;
	pa={
		.name="YA",
		.age=15
	};
	node jnode={.obj=&YA,.next=NULL};
	

}