// 202011365 정은아, C프로그래밍(0450), 기차 충돌 시간 계산 문제 (train.c), 작성일 : 2020년 4월 27일

#include <stdio.h>
#define HOUR_TO_SEC 3600	// 1시간 = 3600초
#define HOUR_TO_MIN 60		// 1시간 = 60분
#define MIN_TO_SEC 60		// 1분 = 60초

int main(void)
{
	double km, v1, v2, h, total_min, total_sec;
	int min, sec;

	printf("두 기차 사이의 거리를 입력하시오 :\n");
	scanf("%lf", &km);

	printf("첫 번째 기차의 속도 (km/h)를 입력하시오 :\n");
	scanf("%lf", &v1);

	printf("두 번째 기차의 속도 (km/h)를 입력하시오 :\n");
	scanf("%lf", &v2);

	h = km / (v1 + v2);						// 시간 = 거리 / 속도
	total_min = h * HOUR_TO_MIN;			// 분 단위 전체 시간 = 시 단위 전체 시간 * 60분
	total_sec = total_min * MIN_TO_SEC;		// 초 단위 전체 시간 = 분 단위 전체 시간 * 60초

	min = (int)total_sec % HOUR_TO_SEC / MIN_TO_SEC;		// n분 = (초 단위 전체 시간 / 60)의 몫
	sec = (int)total_sec % MIN_TO_SEC;						// n초 = (초 단위 전체 시간 / 60)의 나머지

	printf("\n충돌까지 총 %.3f 분 (%d 시간 %d 분 %d 초)가 소요됩니다.\n", total_min, (int)h, min, sec);
	printf("첫 번째 기차의 운행 거리는 총 %.2f (km) 입니다.\n", v1 * h);
	printf("두 번째 기차의 운행 거리는 총 %.2f (km) 입니다.\n", v2 * h);

	return 0;
}