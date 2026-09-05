//*************************************************
//제목 : 주소를 출력하는 방법
//날짜 : 2026.09.02
//작성자 : 2401486 신재명
//**************************************************

#include <stdio.h>

int main(void)
{
	char a = 'A';
	int b = 36;
	double c = 3.141592;

	char* pa = &a;
	int* pb = &b;
	double* pc = &c;


	printf("char형 변수 a의 주소: %p\n", (void*)pa);
	printf("int형 변수 b의 주소: %p\n", (void*)pb);
	printf("double형 변수 c의 주소: %p\n", (void*)pc);

	return 0;
}