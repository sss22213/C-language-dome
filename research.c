#include <stdio.h>
#include <stdlib.h>

int main()
{
	int f;
	while(1)
	{
		printf("叫匡拒稱璶芠场だ:\n");
		printf("1.换北ó北(STM32)\n");
		printf("2.ㄏノざ(Raspberry PI B+)\n");
		printf("3.產筿北(8051)\n");
		scanf("%d",&f);
		switch(f)
		{
			case 1:
				system("start https://github.com/sss22213/STM32-Remote-control-car");
				break;
			case 2:
				system("start https://github.com/sss22213/WebUI");
				break;
			case 3:
				system("start https://github.com/sss22213/8051_Home_Appliances");
				break;
		}
	}
	return 0;
}