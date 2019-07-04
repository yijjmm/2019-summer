#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 1~n까지의 홀수 합

*/

int main()
{
	int i, n, sum;

	printf("1~n 까지의 홀수의 합. n = ");
	scanf("%d", &n);

	sum = 0;
	i = 1;

	while (i <= n)
	{
		sum = sum + i;
		i = i + 2;
	}

	printf("1~%d의 홀수의 합 = %d", n, sum);
	return 0;
}
