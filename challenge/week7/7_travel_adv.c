#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

// 2차원 배열 names와 cities 생성
char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculateTravelDays();
int getSum(int numArray[], int people);
double getAverage(int numArray[]);
void getFamousCity(double dayArray[]);

int main() {

	//사용자로부터 도시 이름 입력받기
	// NUMCITY 수만큼 cities에 도시 이름을 입력받습니다.
	printf("%d개의 도시명을 차례대로 입력해주세요.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}

	// 사용자로부터 사람 이름 받기
	printf("%d개의 여행자 이름을 차례대로 입력해주세요.\n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));
	}

	// 함수 호출
	calculateTravelDays();

	return 0;
}




void calculateTravelDays() {
	extern int travelDays[NUMCITY][NUMPEOPLE];

	// 각 도시에서 각 사람이 보낸 일 수 입력받기
	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("도시 %s에서 사람 %s가 보낸 일 수를 입력하세요: ", cities[i], names[j]);
			scanf_s("%d", &travelDays[i][j]);
		}
	}

	double averageDays[NUMCITY];
	//각 도시별 총 일 수 및 평균 일 수 계산 및 출력
	for (int i = 0; i < NUMCITY; i++) {
		int totalDay = getSum(travelDays[i], NUMPEOPLE);
		double averageDay = getAverage(travelDays[i], NUMPEOPLE);
		printf("도시 %s에서 보낸 총 일수: %d, 평균 일 수: %.2f\n", cities[i], totalDay, averageDay);
		averageDays[i] = averageDay;
	}
	getFamousCity(averageDays, NUMCITY);
}

// 각 도시에서 보낸 총 일수 계산
int getSum(int numArray[],int people) {
	int totalDays = 0;
	for (int i = 0; i < people; i++) {
		totalDays += numArray[i];
	}
	return totalDays;
}

// 각 도시에서 보낸 평균 일수 계산
double getAverage(int numArray[],int people) {
	int totalDays = 0;
	for (int i = 0; i < people; i++) {
		totalDays += numArray[i];
	}
	double averageDay = (double)totalDays / (double)people;
	return averageDay;
}

// 도시 별 머문 평균 일수를 기반으로 가장 인기있는 도시를 출력. 
void getFamousCity(double dayArray[],int city) {

}