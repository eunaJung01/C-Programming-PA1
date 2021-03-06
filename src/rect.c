// 202011365 정은아, C프로그래밍(0450), 사각 테이블 배치 문제 (rect.c), 작성일 : 2020년 4월 27일

#include <stdio.h>

int main(void)
{
	int r_length, r_width, t_length, t_width, space, people, all;

	printf("What are the length and width of the room (in meters)?\n");
	scanf("%d %d", &r_length, &r_width);

	printf("What are the length and width of each table (in meters)?\n");
	scanf("%d %d", &t_length, &t_width);

	printf("How much space is required between tables (in meters)?\n");
	scanf("%d", &space);

	printf("How many people does each table seat?\n");
	scanf("%d", &people);

	all = ((r_length - space) / (t_length + space)) * (((r_width - space) / (t_width + space)) * people);
	/* 전체 하객 수 = 전체 테이블 수 * 한 테이블 당 앉을 수 있는 사람 수
	전체 테이블 수 = 가로로 수용 가능한 테이블 수 * 세로로 수용 가능한 테이블 수 */

	printf("This arrangement seats %d people.", all);

	return 0;
}