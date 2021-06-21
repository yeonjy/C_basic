#include <stdio.h>
int main(void)
{
	// 정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);    /* %d 는 어떤 정수형 값을 출력하라는 뜻. 그 값은 ,(콤마) 뒤에 나오는 값들이 순서대로 들어가게 됨. */
	/*age = 13;
	printf("%d\n", age);*/

	// 실수형 변수에 대한 예제
	/*float f = 46.5f;        // float(실수)를 쓸 떄는 숫자 뒤에 f를 써줘야 함!
	printf("%f\n", f);      // \n은 줄바꿈 입력할려고 쓰는거임 
	printf("%.2f\n", f);    // %.2f 는 f의 소수점 뒤 자리수가 2개이도록 만들기 위함
	double d = 4.428;
	printf("%.2lf\n", d);*/   // double을 출력할 때: lf, 소수점 둘째 자리까지 출력 -> 셋째 자리에서 반올림 됨

	/*const int YEAR = 2000;    // const 를 했기 때문에 YEAR는 상수 -> 바꿀 수 없음!
	printf("태어난 년도 : %d\n", YEAR);*/


	// printf
	// 연산
	/*int add = 3 + 7;                // 10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);
	printf("%d x %d = %d\n", 30, 79, 30 * 79);*/


	// scanf
	// 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);             // & : input이 정의된 곳에 값을 입력받겠다는 의미
	printf("입력값 : %d\n", input);*/
	

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 ; ");     // 스페이스로 구분됨
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값: %d\n", one);
	printf("두번째 값: %d\n", two);
	printf("세번째 값: %d\n", three);*/

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[256];                            // char c 와 같은 문자를 256개 만든다는 의미
	scanf_s("%s", str, sizeof(str));          // sizeof(str) -> 256개 이내의 문자열만 받겠다는 의미, 문자열을 입력받을 때는 &표시를 안해도 됨!
	printf("%s\n", str);*/                      // 띄어쓰기 하면 띄어쓰기 전에거만 출력됨
	


	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?
	char name[256];
	printf("이름이 뭐예요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이예요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg 이예요? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm 이예요? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));

	// 조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름        : %s\n", name);
	printf("나이        : %d\n", age);
	printf("몸무게      : %.2f\n", weight);
	printf("키          : %.2lf\n", height);
	printf("범죄        : %s\n", what);


	return 0;
}