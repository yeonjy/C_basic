#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_random(void)
{
	/*srand(time(NULL));           // 난수 초기화
	//int num = rand() % 3;      // 0 ~ 2 사이의 랜덤 수 출력
	int num = rand() % 3 + 1*/     // 1 ~ 3 사이의 랜덤 수 출력

	printf("난수 초기화 이전..\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 10);

	srand(time(NULL));              // 난수 초기화
	printf("\n\n난수 초기화 이후..\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 10);
	// 난수 초기화를 하지 않으면 계속 같은 수만 나옴


	return 0;
}
