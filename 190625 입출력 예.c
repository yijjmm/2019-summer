// p.190 예제 #4 사용자가 정수를 입력하면 짝수인지 홀수인지를 출력한다.

#include <stdio.h>							// printf, scanf 라이브러리 함수 사용에 꼭 필요

int main()									// main이라는 함수를 정의
{
	int x;									// 변수 x의 메모리를 확보하는 선언문

	printf("정수를 입력하시오: ");	// ← print "정수를 입력하시오: " 
	scanf("%d", &x);				// ← input x			

	//if (x % 2 != 0) 				// ← if x mod 2 ≠ 0 then
	//	printf("홀수");				// ←	 print "홀수"
	//else							// ← else 
	//	printf("짝수");				// ←    print "짝"
									// ← endif
	//printf("\n");					// 줄 바꿈 문자를 출력(\은 원이 아니라 백슬래쉬임)

	return 0;						// 순서도의 끝(종료)에 해당
}

/* 실행 결과 예1
정수를 입력하시오. 5
홀수
*/

/* 실행 결과 예2
정수를 입력하시오. 2
짝수
*/
