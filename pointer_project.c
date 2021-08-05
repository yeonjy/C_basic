// long 이란?
// int와 동일(32비트 운영체제에서만!!)
// int는 운영체제의 크기와 똑같게 설정되지만, long은 운영체제의 크기에 상관 없이 32비트로 고정


#include <stdio.h>
#include <time.h>

int level;
int arrayFish[6];
int* cursor;

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);

// 물고기가 6마리가 있다.
// 이들은 어항에 살고 있는데, 사막이에요.
// 사막이 너무 덥고 건조해서 물이 아주 빨리 증발을 해요.
// 물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고기를 살려주세요~~
// 물고기는 시간이 지날수록 점점 커져서... 나중에는.. 냠냠

int main_pointer_project(void)
{
	long startTime = 0;                                    // 게임 시작 시간
	long totalElapsedTime = 0;                             // 총 경과 시간
	long prevElapsedTime = 0;                              // 직전 경과 시간 (최근에 물을 준 시간 간격)

	int num;                                               // 몇 번 어항에 물을 줄 것인지 (최근에 물을 준 시간 간격)
	initData();

	cursor = arrayFish;                                    // cursor[0] ... cursor[1] ...

	startTime = clock();                                   // 현재 시간을 millisecond (1000분의 1초) 단위로 반환
	while (1)
	{
		printfFishes();
		printf("몇 번 어항에 물을 주시겠어요? ");
		scanf_s("%d", &num);

		//입력값 체크
		if (num < 1 || num > 6)
		{
			printf("\n입력값이 잘못되었습니다.\n");
			continue;
		}

		// 총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // 초 단위로 바꿔주는 역할(6000millisecond -> 6초)
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		// 직전 물 준 시간 ( 마지막으로 물 준 시간) 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);

		// 어항의 물을 감소 (증발)
		decreaseWater(prevElapsedTime);

		// 사용자가 입력한 어항에 물을 준다
		// 1. 어항의 물이 0 이면? 물을 주지 안는다... 이미 물고기 죽음..
		if (cursor[num - 1] <= 0)
		{
			printf("%d 번 물고기는 이미 죽었습니다.. 물을 주지 않습니다.\n", num);
		}
		// 2. 어항의 물이 0 이 아닌 경우? 물을 준다 ! 100을 넘지 않는지 체크
		// 현재 어항의 물 + 1 <= 100 체크
		else if (cursor[num - 1] + 1 <= 100)
		{
			// 물을 준다
			printf("%d 번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1;
		}

		// 레벨업을 할 건지 확인 (레벨업은 20초마다 한 번씩 수행)
		if (totalElapsedTime / 20 > level - 1)              // 19초 : 0.XX = 0    20초 : 1.XX > 0       long은 정수를 
		{
			level++;                                        // level : 1 -> level : 2
			printf(" *** 축 레벨업! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n\n\n", level - 1, level);

			// 최종 레벨 : 5
			if (level == 5)
			{
				printf("\n\n축하합니다. 최고 레벨을 달성하였습니다. 게임을 종료합니다.");
				exit(0);
			}
		}

		// 모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			// 물고기 모두 쥬금
			printf("모든 물고기가 쥬금.. ㅠㅠ 흑흑...\n");
			exit(0);
		}
		else
		{
			// 최소 한 마리 이상의 물고기는 살아 있음
			printf("물고기가 아직 살아있어요!\n");
		}
		prevElapsedTime = totalElapsedTime;

		// 10초 -> 15초 (5초 : prevElapsedTime) -> 25초 가 되어서 물을 주면 15초를 빼서 10초가 되어야 함.
		// 근데 15초를 저장할 공간이 없음 -> prevElapsedTime에 저장
	}

	

	return 0;
}

void initData()
{
	level = 1;                                              // 게임 레벨( 1 - 5 )
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100;                                 // 어항의 물 높이 ( 0 - 100 )
	}
}

void printfFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);      // %3d : 3칸, 번 : 2칸, 스페이스 : 1칸  => 총 6칸
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);                                      // 스페이스 * 2 : 2칸, %4d : 4칸  => 총 6칸
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)             // 배열은 주소로 접근하지 않아도 변경 가능하니까..
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime);  // 3 : 난이도 조절을 위한 값
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)                              // arrayFish[i] 가 모두 0보다 커야지 return 0 으로 넘어가는 건가..? -> 한 번 0으로 반환되면 for문을 탈출하게 되는 듯
			return 1;                                      // 참 True
	}
	return 0;
}
