// 논리 오류가 두 개 있음

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()		// main 함수 정의
{
	int i, n, sum;

	printf("1부터 얼마까지의 합?");		// print
	scanf("%d", &n);					// input

	i = 0;
	sum = 0;

	while (i < n)
	{
		i = i + 1;
		sum = sum + i;
	}

	printf("1~%d까지의 합: %d\n", n, sum);	// print

	return 0;
}
