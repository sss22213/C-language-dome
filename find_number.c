#include <stdio.h>
#include <stdlib.h>
int main()
{
	int array[15] =
    {
        2, 3, 5, 7, 11,
        13, 17, 19, 23, 29,
        31, 37, 41, 43, 47
    };
	int mid=0;
	int left=0,right=15-1;
	while(array[mid]!=29)
	{
		mid=(left+right)/2;
		if(array[mid]>29)
		{
			right=mid-1;
			
		}
		else if(array[mid]<29)
		{
			left=mid+1;
			
			
		}
		
		
	}
	printf("%d",array[mid]);

}