#include <stdio.h>

int main()
{
	int how_many_days = 0;
	int flight_cost = 0;
	int hotel_cost = 0;
	int one_day_money = 0;

	printf("������ ����ΰ���?: ");
	scanf_s("%d", &how_many_days);

	printf("�װ��� ����: ");
	scanf_s("%d", &flight_cost);

	printf("ȣ�� 1�� ����: ");
	scanf_s("%d", &hotel_cost);

	printf("�Ϸ翡 �ʿ��� �뵷: ");
	scanf_s("%d", &one_day_money);

	int total = how_many_days * hotel_cost + one_day_money * (how_many_days + 1) + flight_cost;

	printf("=============================\n");
	printf("�� ���� ���: %d \n", total);
	printf("=============================");

	return 0;
}