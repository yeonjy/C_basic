#include <stdio.h>
int main(void)
{
	// ������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);    /* %d �� � ������ ���� ����϶�� ��. �� ���� ,(�޸�) �ڿ� ������ ������ ������� ���� ��. */
	/*age = 13;
	printf("%d\n", age);*/

	// �Ǽ��� ������ ���� ����
	/*float f = 46.5f;        // float(�Ǽ�)�� �� ���� ���� �ڿ� f�� ����� ��!
	printf("%f\n", f);      // \n�� �ٹٲ� �Է��ҷ��� ���°��� 
	printf("%.2f\n", f);    // %.2f �� f�� �Ҽ��� �� �ڸ����� 2���̵��� ����� ����
	double d = 4.428;
	printf("%.2lf\n", d);*/   // double�� ����� ��: lf, �Ҽ��� ��° �ڸ����� ��� -> ��° �ڸ����� �ݿø� ��

	/*const int YEAR = 2000;    // const �� �߱� ������ YEAR�� ��� -> �ٲ� �� ����!
	printf("�¾ �⵵ : %d\n", YEAR);*/


	// printf
	// ����
	/*int add = 3 + 7;                // 10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);
	printf("%d x %d = %d\n", 30, 79, 30 * 79);*/


	// scanf
	// Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);             // & : input�� ���ǵ� ���� ���� �Է¹ްڴٴ� �ǹ�
	printf("�Է°� : %d\n", input);*/
	

	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� ; ");     // �����̽��� ���е�
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° ��: %d\n", one);
	printf("�ι�° ��: %d\n", two);
	printf("����° ��: %d\n", three);*/

	// ����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[256];                            // char c �� ���� ���ڸ� 256�� ����ٴ� �ǹ�
	scanf_s("%s", str, sizeof(str));          // sizeof(str) -> 256�� �̳��� ���ڿ��� �ްڴٴ� �ǹ�, ���ڿ��� �Է¹��� ���� &ǥ�ø� ���ص� ��!
	printf("%s\n", str);*/                      // ���� �ϸ� ���� �����Ÿ� ��µ�
	


	// ������Ʈ
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �̸�? ����? ������? Ű? ���˸�?
	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg �̿���? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm �̿���? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������? ");
	scanf_s("%s", what, sizeof(what));

	// ���� ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�        : %s\n", name);
	printf("����        : %d\n", age);
	printf("������      : %.2f\n", weight);
	printf("Ű          : %.2lf\n", height);
	printf("����        : %s\n", what);


	return 0;
}