#include<stdio.h>

//ctrl + k, ctrl + c : �� �ּ� �� ���� �ޱ�
//ctrl + k, ctrl + u : �� �ּ� �� ���� ���ֱ�





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


	// ++ �ܻ�
	/*
	int a = 10;
	printf("a�� %d/n", a);            // a�� 10 ���
	a++;
	printf("a�� %d/n", a);            // a�� 11 ���
	a++;
	printf("a�� %d/n", a);         // a�� 12 ���
	*/

	/*
	int b = 20;
	// ++b�� b = b + 1
	printf("b�� %d/n", ++b);          // ++b (++�� �տ� ���� ��): ++������ ���� �����ϰ� ���
	printf("b�� %d/n", b++);          // b++ (++�� �ڿ� ���� ��): ���� b�� ����ϰ� ���� ���� �Ѿ �� ++���� ����   
	printf("b�� %d/n", b);
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


	// �ݺ���
	// for, while, do while

	// for (����; ����; ����) {  }
	/*
	for (int i = 1; i <= 10; i++)                 // ; ����°���
	{
		printf("Hello World %d\n", i);
	}
	*/


	// while ��
	// while (����) {  }
	/*
	int i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i++);
		//i++;
	}
	*/


	// do {  } while (����);
	//int i = 1;
	//do {
	//	printf("Hello World %d\n", i++);
	//} while (i <= 10);


	//2�� �ݺ��� (for���� ��ġ�� ��)
	/*for (int i = 1; i <= 3; i++)
	{
		printf("ù ��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("    �� ��° �ݺ��� : %d\n", j);
		}
	}*/


	// ������
	// 2�� ~ 9��
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d�� ���\n", i);
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
	// ���� �����
	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// ������ ���
	//for (int i = 0; i < 5; i++)        // �� ��Ȱ� �ٸ� �κ�
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


	// �Ƕ�̵带 �׾ƶ� ������Ʈ
/*
    *
   ***
  *****
 *******
*********
*/
	int floor;
	printf("�� ������ �װڴ���?");
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