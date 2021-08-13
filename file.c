#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

#define MAX 10000                                 // MAX 는 어디에서나 숫자 10000을 의미하게 됨

int lotto();



int main_file(void)
{
	// 파일 입출력
	// 파일에 어떤 데이터를 저장
	// 파일에 저장된 데이터를 불러오기

	srand(time(NULL));

	// fputs, fgets 쌍 -> 문자열 저장
	char line[MAX];                               // char line[10000]

	//파일에 쓰기
	FILE* file = fopen("c:\\test1.txt", "wb");    // \\ 두 개 적는 이유 -> 탈출문자
												  // r(ead)   w(rite)   a(ppend)   +   t(ext)   b(inary data)
	if (file == NULL)                             // 파일을 열지 못 하면...       // 파일이 안 열렸었음 -> visual studio를 관리자 권한으로 하기
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	fputs("fputs 를 이용해서 글을 적어볼게요\n", file);
	fputs("잘 적히는지 확인해 주세요\n", file);


	// 파일 읽기
	FILE* file = fopen("c:\\test1.txt", "rb");    // \\ 두 개 적는 이유 -> 탈출문자
												  // r(ead)   w(rite)   a(ppend)   +   t(ext)   b(inary data)
	if (file == NULL)                             // 파일을 열지 못 하면...       // 파일이 안 열렸었음 -> visual studio를 관리자 권한으로 하기
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	while (fgets(line, MAX, file) != NULL)                 // fgets(저장 될 곳, 사이즈, 파일 포인터)
	{
		printf("%s", line);
	}

	// 파일을 열고 나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면?
	// 데이터 손실 발생 가능! -> 항상 파일은 닫아주는 습관을 들이기

	//fclose(file);


	// fprintf, fscanf 쌍
	// printf(%d %d %s ...")
	// scanf("%d %d", &num1, ...)

	// 복권
	int num[6] = { 0, 0, 0, 0, 0, 0 };               // 추첨 번호
	int bonus = 0;                                   // 보너스 번호
	char str1[MAX];
	char str2[MAX];
	FILE* file = fopen("c:\\test2.txt", "wb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}


	// 로또 추첨 번호 저장
	fprintf(file, "%s % d % d % d % d % d % d\n", "추첨번호",lotto(), lotto(), lotto(), lotto(), lotto(), lotto());
	fprintf(file, "%s %d\n", "보너스번호", lotto());


	fclose(file);

	return 0;
}


int lotto()
{
	int lotto = rand() % 45 + 1;
	return lotto;
}