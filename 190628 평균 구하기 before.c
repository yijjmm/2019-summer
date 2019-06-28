#include <stdio.h>

int main( )
{
 // 변수 선언
 int kor, math, music;
 double avg;

 avg = sum / 3.0;
 sum = kor + math + music;

 // 자료 입력
 printf("국어는? "); scanf("%d”, &kor);
 printf("수학은? "); scanf("%d”, &math)
 printf("음악은? "); scanf("%d”, &music);
 
 printf("-------------\n");
 printf("평균 %5.1lf\n", avg);
 printf("성적 처리 결과\n");
 printf("수학 %5d\n", kor);
 printf("국어 %5d\n", kor);
 printf("음악 %5d\n", kor);
 

 return 0;
}
