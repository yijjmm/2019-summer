#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100000

// 59s
// 44s
// 30s


int main()
{
	int age[SIZE] = { 30, 29, 25, 30, 20, 19 }, i, pass, temp;
	int swap;

	printf("정렬 전 :");
	for (i = 0; i < SIZE; i++)		// 정렬 전 배열 출력
		printf("%3d ", age[i]);
	printf("\n");

	// 버블 정렬(오름차순)
	for (pass = 1; pass < SIZE; pass++) // (원소수-1) 번 반복
	{
		swap = 0;
		for (i = 0; i < SIZE - pass; i++)	// 이웃 두 원소끼리 정렬
		{
			if (age[i] > age[i + 1])
			{
					temp = age[i];
					age[i] = age[i + 1];
					age[i + 1] = temp;
					swap = 1;
					
			}
				
		}
		if (swap == 0)
		{
			break;
		}

			// 안쪽 for
	}	// 바깥 for	

	printf("정렬 결과 :");
	for (i = 0; i < SIZE; i++)		// 정렬 결과 출력
		printf("%3d ", age[i]);
	printf("\n");

	return 0;
}
