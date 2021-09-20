// 202011365 ������, C���α׷���(0450), ���� �浹 �ð� ��� ���� (train.c), �ۼ��� : 2020�� 4�� 27��

#include <stdio.h>
#define HOUR_TO_SEC 3600	// 1�ð� = 3600��
#define HOUR_TO_MIN 60		// 1�ð� = 60��
#define MIN_TO_SEC 60		// 1�� = 60��

int main(void)
{
	double km, v1, v2, h, total_min, total_sec;
	int min, sec;

	printf("�� ���� ������ �Ÿ��� �Է��Ͻÿ� :\n");
	scanf("%lf", &km);

	printf("ù ��° ������ �ӵ� (km/h)�� �Է��Ͻÿ� :\n");
	scanf("%lf", &v1);

	printf("�� ��° ������ �ӵ� (km/h)�� �Է��Ͻÿ� :\n");
	scanf("%lf", &v2);

	h = km / (v1 + v2);						// �ð� = �Ÿ� / �ӵ�
	total_min = h * HOUR_TO_MIN;			// �� ���� ��ü �ð� = �� ���� ��ü �ð� * 60��
	total_sec = total_min * MIN_TO_SEC;		// �� ���� ��ü �ð� = �� ���� ��ü �ð� * 60��

	min = (int)total_sec % HOUR_TO_SEC / MIN_TO_SEC;		// n�� = (�� ���� ��ü �ð� / 60)�� ��
	sec = (int)total_sec % MIN_TO_SEC;						// n�� = (�� ���� ��ü �ð� / 60)�� ������

	printf("\n�浹���� �� %.3f �� (%d �ð� %d �� %d ��)�� �ҿ�˴ϴ�.\n", total_min, (int)h, min, sec);
	printf("ù ��° ������ ���� �Ÿ��� �� %.2f (km) �Դϴ�.\n", v1 * h);
	printf("�� ��° ������ ���� �Ÿ��� �� %.2f (km) �Դϴ�.\n", v2 * h);

	return 0;
}