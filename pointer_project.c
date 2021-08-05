// long �̶�?
// int�� ����(32��Ʈ �ü��������!!)
// int�� �ü���� ũ��� �Ȱ��� ����������, long�� �ü���� ũ�⿡ ��� ���� 32��Ʈ�� ����


/*#include <stdio.h>
#include <time.h>

int level;
int arrayFish[6];
int* cursor;

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);

// ����Ⱑ 6������ �ִ�.
// �̵��� ���׿� ��� �ִµ�, �縷�̿���.
// �縷�� �ʹ� ���� �����ؼ� ���� ���� ���� ������ �ؿ�.
// ���� �� �����ϱ� ���� �������� ���׿� ���� �༭ ����⸦ ����ּ���~~
// ������ �ð��� �������� ���� Ŀ����... ���߿���.. �ȳ�

int main_pointer_project(void)
{
	long startTime = 0;                                    // ���� ���� �ð�
	long totalElapsedTime = 0;                             // �� ��� �ð�
	long prevElapsedTime = 0;                              // ���� ��� �ð� (�ֱٿ� ���� �� �ð� ����)

	int num;                                               // �� �� ���׿� ���� �� ������ (�ֱٿ� ���� �� �ð� ����)
	initData();

	cursor = arrayFish;                                    // cursor[0] ... cursor[1] ...

	startTime = clock();                                   // ���� �ð��� millisecond (1000���� 1��) ������ ��ȯ
	while (1)
	{
		printfFishes();
		printf("�� �� ���׿� ���� �ֽðھ��? ");
		scanf_s("%d", &num);

		//�Է°� üũ
		if (num < 1 || num > 6)
		{
			printf("\n�Է°��� �߸��Ǿ����ϴ�.\n");
			continue;
		}

		// �� ��� �ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // �� ������ �ٲ��ִ� ����(6000millisecond -> 6��)
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);

		// ���� �� �� �ð� ( ���������� �� �� �ð�) ���ķ� �帥 �ð�
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapsedTime);

		// ������ ���� ���� (����)
		decreaseWater(prevElapsedTime);

		// ����ڰ� �Է��� ���׿� ���� �ش�
		// 1. ������ ���� 0 �̸�? ���� ���� �ȴ´�... �̹� ����� ����..
		if (cursor[num - 1] <= 0)
		{
			printf("%d �� ������ �̹� �׾����ϴ�.. ���� ���� �ʽ��ϴ�.\n", num);
		}
		// 2. ������ ���� 0 �� �ƴ� ���? ���� �ش� ! 100�� ���� �ʴ��� üũ
		// ���� ������ �� + 1 <= 100 üũ
		else if (cursor[num - 1] + 1 <= 100)
		{
			// ���� �ش�
			printf("%d �� ���׿� ���� �ݴϴ�.\n\n", num);
			cursor[num - 1] += 1;
		}

		// �������� �� ���� Ȯ�� (�������� 20�ʸ��� �� ���� ����)
		if (totalElapsedTime / 20 > level - 1)              // 19�� : 0.XX = 0    20�� : 1.XX > 0  ???????? ������ �׷���...
		{
			level++;                                        // level : 1 -> level : 2
			printf(" *** �� ������! ���� %d �������� %d ������ ���׷��̵� ***\n\n\n", level - 1, level);

			// ���� ���� : 5
			if (level == 5)
			{
				printf("\n\n�����մϴ�. �ְ� ������ �޼��Ͽ����ϴ�. ������ �����մϴ�.");
				exit(0);
			}
		}

		// ��� ����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			// ����� ��� ���
			printf("��� ����Ⱑ ���.. �Ф� ����...\n");
			exit(0);
		}
		else
		{
			// �ּ� �� ���� �̻��� ������ ��� ����
			printf("����Ⱑ ���� ����־��!\n");
		}
		prevElapsedTime = totalElapsedTime;

		// 10�� -> 15�� (5�� : prevElapsedTime) -> 25�� �� �Ǿ ���� �ָ� 15�ʸ� ���� 10�ʰ� �Ǿ�� ��.
		// �ٵ� 15�ʸ� ������ ������ ���� -> prevElapsedTime�� ����
	}

	

	return 0;
}

void initData()
{
	level = 1;                                              // ���� ����( 1 - 5 )
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100;                                 // ������ �� ���� ( 0 - 100 )
	}
}

void printfFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);      // %3d : 3ĭ, �� : 2ĭ, �����̽� : 1ĭ  => �� 6ĭ
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);                                      // �����̽� * 2 : 2ĭ, %4d : 4ĭ  => �� 6ĭ
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)             // �迭�� �ּҷ� �������� �ʾƵ� ���� �����ϴϱ�..
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime);  // 3 : ���̵� ������ ���� ��
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
		if (arrayFish[i] > 0)                              // arrayFish[i] �� ��� 0���� Ŀ���� return 0 ���� �Ѿ�� �ǰ�..? -> �� �� 0���� ��ȯ�Ǹ� for���� Ż���ϰ� �Ǵ� ��
			return 1;                                      // �� True
	}
	return 0;
}*/