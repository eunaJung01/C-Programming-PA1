// 202011365 ������, C���α׷���(0450), �簢 ���̺� ��ġ ���� (rect.c), �ۼ��� : 2020�� 4�� 27��

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
	/* ��ü �ϰ� �� = ��ü ���̺� �� * �� ���̺� �� ���� �� �ִ� ��� ��
	��ü ���̺� �� = ���η� ���� ������ ���̺� �� * ���η� ���� ������ ���̺� �� */

	printf("This arrangement seats %d people.", all);

	return 0;
}