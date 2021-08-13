#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

#define MAX 10000                                 // MAX �� ��𿡼��� ���� 10000�� �ǹ��ϰ� ��

int lotto();



int main_file(void)
{
	// ���� �����
	// ���Ͽ� � �����͸� ����
	// ���Ͽ� ����� �����͸� �ҷ�����

	srand(time(NULL));

	// fputs, fgets �� -> ���ڿ� ����
	char line[MAX];                               // char line[10000]

	//���Ͽ� ����
	FILE* file = fopen("c:\\test1.txt", "wb");    // \\ �� �� ���� ���� -> Ż�⹮��
												  // r(ead)   w(rite)   a(ppend)   +   t(ext)   b(inary data)
	if (file == NULL)                             // ������ ���� �� �ϸ�...       // ������ �� ���Ⱦ��� -> visual studio�� ������ �������� �ϱ�
	{
		printf("���� ���� ����\n");
		return 1;
	}

	fputs("fputs �� �̿��ؼ� ���� ����Կ�\n", file);
	fputs("�� �������� Ȯ���� �ּ���\n", file);


	// ���� �б�
	FILE* file = fopen("c:\\test1.txt", "rb");    // \\ �� �� ���� ���� -> Ż�⹮��
												  // r(ead)   w(rite)   a(ppend)   +   t(ext)   b(inary data)
	if (file == NULL)                             // ������ ���� �� �ϸ�...       // ������ �� ���Ⱦ��� -> visual studio�� ������ �������� �ϱ�
	{
		printf("���� ���� ����\n");
		return 1;
	}

	while (fgets(line, MAX, file) != NULL)                 // fgets(���� �� ��, ������, ���� ������)
	{
		printf("%s", line);
	}

	// ������ ���� ���� ���� ���� ���¿��� � ���α׷��� ������ �����?
	// ������ �ս� �߻� ����! -> �׻� ������ �ݾ��ִ� ������ ���̱�

	//fclose(file);


	// fprintf, fscanf ��
	// printf(%d %d %s ...")
	// scanf("%d %d", &num1, ...)

	// ����
	int num[6] = { 0, 0, 0, 0, 0, 0 };               // ��÷ ��ȣ
	int bonus = 0;                                   // ���ʽ� ��ȣ
	char str1[MAX];
	char str2[MAX];
	FILE* file = fopen("c:\\test2.txt", "wb");
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}


	// �ζ� ��÷ ��ȣ ����
	fprintf(file, "%s % d % d % d % d % d % d\n", "��÷��ȣ",lotto(), lotto(), lotto(), lotto(), lotto(), lotto());
	fprintf(file, "%s %d\n", "���ʽ���ȣ", lotto());


	fclose(file);

	return 0;
}


int lotto()
{
	int lotto = rand() % 45 + 1;
	return lotto;
}