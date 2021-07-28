#include <stdio.h>
int main_condition(void)
{
	// 버스를 탄다고 가정. 학생/ 일반인으로 구분 (일반인 : 20세)
	int age = 15;
	// if (조건) {   } else {   }
	if (age >= 20)
	{
		("일반인 입니다.\n");
	}
	else
	{
		printf("학생입니다.\n");
	}

	// 초등학생(8-13) / 중학생(14-16) / 고등학생(17-19)으로 나누면?
	// if / else if/ else
	int age = 21;
	if (age >= 8 && age <= 13)          // &&의 뜻: 양 옆 변의 조건이 모두 만족할 때 (age >=8 이면서 age <= 13 일 때)
	{
		printf("초등학생입니다\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("고등학생입니다.\n");
	}
	else
		printf("학생이 아닌가봐요");


	// break / continue
	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요\n");
			break;
		}
		printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
	}

	// 1번 부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;                                         // continue를 만나면 그 뒤에 코드들을 실행하지 않고 다음 반복으로 넘어감
			}
			printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
		}
	}

	// &&  ||
	int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b && c == d)
	{
		printf("a와 b는 같고, c 와 b도 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다르네요.\n");
	}

	if (a == b || c == d)
	{
		printf("a와 b 혹은 c와 d의 값이 같습니다..\n");
	}
	else
	{
		printf("값이 서로 다르네요.\n");
	}

	return 0;
}
