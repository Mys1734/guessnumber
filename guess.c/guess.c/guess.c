 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("1.play\n2.exit\n");
}

void game()
{
	int a = 0;
	a = rand()%100+1;
	int guess = 0;
	printf("请输入\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess > a)
		{
			printf("大了");
			printf("请输入:\n");
		}
		else if (guess < a)
		{
			printf("小了");
			printf("请输入:\n");
		}
		else if (guess == a)
		{
			printf("答对了:\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	//scanf("%d", &input);
	do
	{
		//printf("扣1进入游戏\n");
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			   
			   game(); 
			   break;
		case 2:
			    break;
	    defalut:
				printf("请重新选择"); break;
		}
	} while (input);
	//printf("%d", b);
	return 0;
}
