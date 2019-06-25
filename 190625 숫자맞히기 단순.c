#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
		int begin = 1;
		int end = 16 ;
		int computer;
		int user, total=0, count=0;
	
		srand(time(NULL));  // 현재 시간을 씨드로 사용하기
		computer = rand()%end+begin;

		do
		{			
			printf("\n컴퓨터가 숨긴 수(%d~%d)는 얼마일까요? ", begin, end, computer);
			scanf("%d", &user);	

			if (user==computer) 
			{
				printf("맞추었습니다.");				
			}
			else
			{
				printf("틀렸습니다. \n");							
			}

			count++;		
		} while (user != computer);
		
		printf ("\n총 %d번 만에 맞추었습니다.\n", count);

		return 0;
}
