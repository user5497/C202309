#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

// ���������� ���ø�� ����̸��� ������ �迭�� �����մϴ�. 
char cities[NUMCITY][10];
char names[NUMPEOPLE][10];

void calculateTravelDays();

int main() {
	// ����ڷκ��� ���� �̸� �Է¹ޱ�
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���. \n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	// ����ڷκ��� ��� �̸� �ޱ�
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���.\n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	// �Լ� ȣ��
	calculateTravelDays(names);

	return 0;
}

void calculateTravelDays() {
	int travelDays[NUMCITY][NUMPEOPLE];

	// �� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	// �� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int sum = 0;
		float average = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			sum += travelDays[i][j];
		}
		average = (float)sum / (float)NUMPEOPLE;
		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� ��: %.2f\n", cities[i], sum,average);
	}
}