// 5의 배수 개수가 틀리게 나오는 오류를 수정하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()								// main 함수 정의
{
	int i, n, sum, cnt3, cnt5;

	printf("1부터 얼마까지의 3의 배수와 5의 배수 개수?");		// print
	scanf("%d", &n);					// input

	cnt3 = 0;
	cnt5 = 0;
	i = 1;

	while (i <= n)
	{
		if (i % 3 == 0)				// 3으로 나눈 나머지가 0과 같다면(==)
		{
			cnt3 = cnt3 + 1;
			i = i + 1;
		}
		if (i % 5 == 0)
		{
			cnt5 = cnt5 + 1;
			i = i + 1;
		}
		else						
			i = i + 1;
	}

	printf("1~%d까지 3의 배수 개수 : %d \n", n, cnt3);	// print 3의 배수 개수
	printf("1~%d까지 5의 배수 개수 : %d \n", n, cnt5);	// print 5의 배수 개수

	return 0;
}
