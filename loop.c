#include<stdio.h>

//ctrl + k, ctrl + c : 줄 주석 한 번에 달기
//ctrl + k, ctrl + u : 줄 주석 한 번에 없애기





int main(void)
{
	/*
	printf("Hello World");
	printf("Hello World");
	printf("Hello World");
	printf("Hello World");
	printf("Hello World");
	printf("Hello World");
	printf("Hello World");
	printf("Hello World");
	printf("Hello World");
	printf("Hello World");
	*/


	// ++ 쁠쁠
	/*
	int a = 10;
	printf("a는 %d/n", a);            // a는 10 출력
	a++;
	printf("a는 %d/n", a);            // a는 11 출력
	a++;
	printf("a는 %d/n", a);         // a는 12 출력
	*/

	/*
	int b = 20;
	// ++b는 b = b + 1
	printf("b는 %d/n", ++b);          // ++b (++이 앞에 있을 때): ++동작을 먼저 수행하고 출력
	printf("b는 %d/n", b++);          // b++ (++이 뒤에 있을 때): 원래 b를 출력하고 다음 동작 넘어갈 때 ++동작 수행   
	printf("b는 %d/n", b);
	*/

	/*
	int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	*/


	// 반복문
	// for, while, do while

	// for (선언; 조건; 증감) {  }
	/*
	for (int i = 1; i <= 10; i++)                 // ; 안찍는거임
	{
		printf("Hello World %d\n", i);
	}
	*/


	// while 문
	// while (조건) {  }
	/*
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
		//i++;
	}
	*/


	// do {  } while (조건);                 // while 줄 다음에 ; 필수!
	//int i = 1;
	//do {
	//	printf("Hello World %d\n", i++);
	//} while (i <= 10);


	//2중 반복문 (for문을 겹치는 것)
	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("    두 번째 반복문 : %d\n", j);
		}
	}*/


	// 구구단
	// 2단 ~ 9단
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++)
			printf(" %d x %d = %d\n", i, j, i * j);
	}*/


	/*
	*
	**
	***
	****
	*****
	*/
	// 내가 만든거
	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// 출제자 답안
	//for (int i = 0; i < 5; i++)        // 내 답안과 다른 부분
	//{
	//	for (int j = 0; j <= i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	/*
	    *
	   **
	  ***
	 ****
	*****
	*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5 - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/


	// 피라미드를 쌓아라 프로젝트
/*
    *
   ***
  *****
 *******
*********
*/
	int floor;
	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
