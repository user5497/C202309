#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

// 2���� �迭 names�� cities ����
char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();
int getSum(int numArray[], int people);
double getAverage(int numArray[]);
void getFamousCity(double dayArray[]);

int main() {

	//����ڷκ��� ���� �̸� �Է¹ޱ�
	// NUMCITY ����ŭ cities�� ���� �̸��� �Է¹޽��ϴ�.
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	// ����ڷκ��� ��� �̸� �ޱ�
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���.\n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	// �Լ� ȣ��
	calculateTravelDays();

	return 0;
}




void calculateTravelDays() {
	extern int travelDays[NUMCITY][NUMPEOPLE];

	// �� ���ÿ��� �� ����� ���� �� �� �Է¹ޱ�
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s�� ���� �� ���� �Է��ϼ���: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	double averageDays[NUMCITY];
	//�� ���ú� �� �� �� �� ��� �� �� ��� �� ���
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("���� %s���� ���� �� �ϼ�: %d, ��� �� ��: %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	getFamousCity(averageDays, NUMCITY);
}

// �� ���ÿ��� ���� �� �ϼ� ���
int getSum(int numArray[],int people) {
	int totalDays = 0;
	for (int i = 0; i < people; i++) {
		totalDays += numArray[i];
	}
	return totalDays;
}

// �� ���ÿ��� ���� ��� �ϼ� ���
double getAverage(int numArray[],int people) {
	int totalDays = 0;
	for (int i = 0; i < people; i++) {
		totalDays += numArray[i];
	}
	double averageDay = (double)totalDays / (double)people;
	return averageDay;
}

// ���� �� �ӹ� ��� �ϼ��� ������� ���� �α��ִ� ���ø� ���. 
void getFamousCity(double dayArray[],int city) {

}