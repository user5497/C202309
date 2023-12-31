#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int* scores, int size, char targetGrade) {
	printf("학생 성적 분류:\n");

	char grade = ' ';
	for (int i = 0; i < size; i++) {
		if (*(scores + i) >= 90) {
			grade = 'A';
		}
		else if (*(scores + i) >= 80) {
			grade = 'B';
		}
		else if (*(scores + i) >= 70) {
			grade = 'C';
		}
		else if (*(scores + i) >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}
		if (targetGrade == grade) {
			printf("%d 학생은 %c 점수를 받았습니다. ", i + 1, targetGrade);
		}
	}
}

// scores들을 더하는 역할을 하는 함수. 
int sumScores(int* scores, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(scores + i); // sum에 배열 scores의 수를 하나씩 더해 합을 구합니다. 
	}
	return sum;
}

// 성적들의 평균을 구하는 함수. 
double averageScores(int* scores, int size) {
	int sum = sumScores(scores, STUDENTS); // 함수 sumScores에서 총합을 가져옵니다.
	double average = (double)sum / (double)STUDENTS; // 분수 값을 가지기 위해 타입을 double로 직접 지정해줍니다. 
	return average;
}


// 성적들의 순위를 구하는 함수.
void printRanks(int* scores, int size) {
	int ranks[STUDENTS]; // 순위를 저장해둘 배열
	for (int i = 0; i < size; i++) {
		ranks[i] = 1; // 처음 값의 순위를 1로 설정
		for (int j = 0; j < size; j++) {
			if (*(scores + j) > *(scores + i)) {
				ranks[i]++; // i가 고정되었을 때 j가 돌며 모든 값을 비교하면서, 더 큰 다른 요소가 있으면 순위가 증가합니다. 
			}
		}
		printf("%d학생의 순위는 %d입니다. \n", i + 1, ranks[i]);
	}

}


int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("학생 %d의 성적을 입력하세요: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); // 엔터를 지우기 위한 버퍼 임시 저장 함수. 

	char target;
	printf("특정 점수(A,B,C,D,F)를 입력하시오: ");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, STUDENTS, target);

	int sum = sumScores(scores, STUDENTS);
	double average = averageScores(scores, STUDENTS);
	printf("학생들 점수의 총 합은 %d이고, 평균 값은 %lf입니다.\n", sum, average);

	printRanks(scores, STUDENTS);

	return 0;
}