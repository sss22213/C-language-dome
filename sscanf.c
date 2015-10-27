#include <stdio.h>
#include <stdlib.h>
int main()
{
	char s1[30]="I am handsome boy";
	char s1_div1[10];
	char s1_div2[2];
	char s1_div3[8];
	char s1_div4[10];
	
	
	sscanf(s1,"%s%s%s%s",s1_div1,s1_div2,s1_div3,s1_div4);
	
	printf("%s,%s,%s,%s",s1_div1,s1_div2,s1_div3,s1_div4);
}