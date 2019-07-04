#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int height;
	double s_weight;

	printf("키를 알려주세요. ");
	scanf("%d", &height);

	s_weight = (height - 100) * 0.9;

	printf("표준 체중: .1lf", s_weight);

	return 0;
}
