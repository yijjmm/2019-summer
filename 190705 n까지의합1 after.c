#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()		// main 함수 정의
{
	int i, n, sum;

	n = 0;
	sum = 0;
	i = 1;

	printf("1부터 얼마까지의 합?");		// print
	scanf("%d", &n);					// input

	while (i <= n)
	{
		sum = sum + i;

		i = i + 1;
	}

	printf("1~%d까지의 합: %d\n", n, sum);	// print

	return 0;
}
