#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char *name;
	int age;
	
}s1;
int main()
{
	 s1 n1={
				.name="bohung",
				.age=20
			};
	printf("name: %s\nage: %d",n1.name,n1.age);
	

}