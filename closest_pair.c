#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float point[10][2] =
    {
        {3, 3}, {1, 5}, {4, 6}, {2, 8}, {9, 9},
        {2, 1}, {7, 2}, {6, 5}, {9, 4}, {5, 9}
    };
	float short_distant=1e7,x=0.0,y=0.0,xy=0.0;
	int i=0,j=0;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			x=point[i][0]-point[j][0];
			y=point[i][1]-point[j][1];
			xy=sqrt((pow(x,2)+pow(y,2)));
			if(short_distant>xy)
			{
				short_distant=xy;
			}
		}
	}
	printf("%f",short_distant);
}