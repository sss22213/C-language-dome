#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	struct lgone *next;
	
	
}s1;
void list(s1 *node)
{
	s1 *p;
	for(p=node;p!=NULL;p=p->next)
	{
		printf("%p-->", p);
		
	}
	
}
int main()
{
	s1 n1,n2,n3;
	n1.next=&n2;
	n2.next=&n3;
	n3.next=NULL;
	list(&n1);
	
	

}