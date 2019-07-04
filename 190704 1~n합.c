#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, sum;	// 변수 선언
  
	printf("1~얼마까지의 합? ");
	scanf("%d", &n);

	sum = 0;
	i = 1;

	while (i <= n)
	{
		sum = sum + i;
		i = i + 1;
	}
  
	printf("1~%d의 합= %d", n, sum);
  
	return 0;
}
