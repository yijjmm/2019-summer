#include <stdio.h>
#define SIZE 6

int main()
{	
	int age[SIZE] = {30, 29, 25, 30, 20, 19}, i, pass, temp;
	int swap;

	printf("정렬 전 :");
	for (i=0; i<SIZE; i++)		// 정렬 전 배열 출력
		printf("%3d ", age[i]);
	printf("\n");

	// 버블 정렬(오름차순)
	for (pass=1; pass<SIZE; pass++) // (원소수-1) 번 반복
	{		
		for (i=0; i<SIZE-1; i++)	// 이웃 두 원소끼리 정렬
		{
			if (age[i] > age[i+1])	
			{
				temp = age[i];
				age[i] = age[i+1];
				age[i+1] = temp;
			}
		}	// 안쪽 for
	}	// 바깥 for	
		
	printf("정렬 결과 :");
	for (i=0; i<SIZE; i++)		// 정렬 결과 출력
		printf("%3d ", age[i]);
	printf("\n");

	return 0;
}
