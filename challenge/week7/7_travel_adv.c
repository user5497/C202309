#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

// ���������� ���ø�� ����̸��� ������ �迭�� �����մϴ�. 
char cities[NUMCITY][10];
char names[NUMPEOPLE][10];

void calculateTravelDays();
int getSum(int numArray[]);
double getAverage(int numArray[]);
void getFamousCity(double dayArray[]);

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
	double averageDays[NUMCITY];
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� ��: %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	getFamousCity(averageDays,NUMCITY);
}

// �� ���ÿ��� ���� �� �ϼ��� ����մϴ�.
int getSum(int numArray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	return totalDays; // totalDays�� return�մϴ�. 
}

// �� ���ÿ��� ���� ��� �ϼ��� ����մϴ�. 
double getAverage(int numArray[], int length) {
	int totalDays = 0;
	for (int i = 0; i < length; i++) {
		totalDays += numArray[i];
	}
	// ���ϴ� ���� ���� double�� ����մϴ�. 
	double averageDays = (double)totalDays / length;
	return averageDays;
}

// ���� �� �ӹ� ��� �ϼ��� ������� ���� �α��ִ� ���ø� ����մϴ�. 
void getFamousCity(double dayArray[], int length) {
	double maxDay = 0;
	int maxDayIndex = 0;
	for (int i = 0; i < length; i++) {
		if (dayArray[i] > maxDay) {
			maxDay = dayArray[i];
			maxDayIndex = i;
		}
	}
	printf("����� �������� ���� �α��־��� ���ô� %s�Դϴ�. (��ոӹ���: %.2f)\n", cities[maxDayIndex],maxDay);
}