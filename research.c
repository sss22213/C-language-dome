#include <stdio.h>
#include <stdlib.h>

int main()
{
	int f;
	while(1)
	{
		printf("請選擇想要觀看的部分:\n");
		printf("1.遙控車控制(STM32)\n");
		printf("2.使用者介面(Raspberry PI B+)\n");
		printf("3.家電控制(8051)\n");
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