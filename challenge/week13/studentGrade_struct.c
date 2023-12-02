#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void classifyStudents(struct Student* st,char target, int index);
int sumScores(struct Student*st, int num_student);
double averageScores(struct Student* st, int num_student);
void printRanks(struct Student* st, int num_student);

// 학생 이름과 점수를 저장할 구조체.
struct Student {
	char *name;
	int score;
};


int main() {
	// 1. 학생 수 입력받기. 
	int num_student = 0;
	printf("학생 수를 입력해 주세요. ");
	scanf_s("%d", &num_student);

	// 구조체 배열 할당. 
	struct Student* st = (struct Student*)malloc(sizeof(struct Student) * num_student);

	// 2. 학생 이름 & 점수 입력받기. 
	for (int i = 0; i < num_student; i++) {

		// 2-1. 이름 입력받기. 
		printf("%d 번째 학생의 이름을 입력해 주세요. ",i+1);
		char temp[100]; // 이름 저장용 임시 배열. 
		scanf_s("%s", temp, (int)sizeof(temp)); 
		(st+i)->name = (char*)malloc((strlen(temp) + 1) * sizeof(char));
		strcpy_s((st+i)->name, strlen(temp) + 1, temp);

		// 2-2. 점수 입력받기. 
		printf("해당 학생의 점수를 입력해 주세요. ");
		scanf_s("%d", &st[i].score);
	}
	
	char ch = getchar();

	// 타겟 점수 구하기 
	char target;
	printf("특정 점수(A,B,C,D,F)를 입력하시오: ");
	scanf_s("%c", &target, 1);
	printf("학생 성적 분류:\n");
	for (int i = 0; i < num_student; i++) {
		int index = i; // 순서 저장용
		classifyStudents(&st[i], target,index);
	}

	// 합계 구하기 
	int sum = sumScores(st, num_student);

	// 평균 구하기 
	double average = averageScores(st, num_student);
	printf("학생들 점수의 총 합은 %d이고, 평균 값은 %lf입니다.\n", sum, average);

	printRanks(st, num_student);

	// 메모리 해제
	for (int i = 0; i < num_student; i++) {
		free(st[i].name);
	}
	free(st);
	return 0;
}

void classifyStudents(struct Student*st,char target, int index) {
	char grade = ' ';
	
	if (st->score >= 90) {
		grade = 'A';
	}
	else if (st->score >= 80) {
		grade = 'B';
	}
	else if (st->score >= 70) {
		grade = 'C';
	}
	else if ((st->score) >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
	if (target == grade) {
		printf("%d 학생은 %c 점수를 받았습니다. ", index + 1, target);
	}
}


int sumScores(struct Student*st, int num_student) {
	int sum = 0;
	for (int i = 0; i < num_student; i++) {
		sum += st[i].score; 
	}
	return sum;
}

// 성적들의 평균을 구하는 함수. 
double averageScores(struct Stugksrdent* st, int num_student) {
	int sum = sumScores(st, num_student); // 함수 sumScores에서 총합을 가져옵니다.
	double average = (double)sum / (double)num_student; // 분수 값을 가지기 위해 타입을 double로 직접 지정해줍니다. 
	return average;
}


// 성적들의 순위를 구하는 함수.
void printRanks(struct Student* st, int num_student) {
	int* ranks = (int*)malloc(num_student * sizeof(int)); // 순위를 저장해둘 배열
	for (int i = 0; i < num_student; i++) {
		ranks[i] = 1; // 처음 값의 순위를 1로 설정
		for (int j = 0; j < num_student; j++) {
			if (st[j].score >st[i].score) {
				ranks[i]++; 
			}
		}
		printf("%d학생의 순위는 %d입니다. \n", i + 1, ranks[i]);
	}
	
	free(ranks);
	
}