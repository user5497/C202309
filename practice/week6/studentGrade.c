#include <stdio.h>

// 상수 STUDENTS를 선언합니다.
#define STUDENTS 5


// scores와 targetGrade를 받는 함수 classifyStudents를 선언합니다. 
void classifyStudents(int scores[], char targetGrade) {
	printf("학생 성적 분류:\n");

	// 성적을 저장할 char grade를 선언합니다. 
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		// if-else if를 사용하여 입력받은 성적의 구간을 나누어 grade에 저장되는 값을 결정하게 합니다. 
		if (scores[i] >= 90) {
			grade = 'A';
		}
		else if (scores[i] >= 80) {
			grade = 'B';
		}
		else if (scores[i] >= 70) {
			grade = 'C';
		}
		else if (scores[i] >= 60) {
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
	int main() {
		// STUDENTS칸을 가진 배열 scores를 선언합니다. 
		int scores[STUDENTS];

		// 4명의 학생의 성적을 입력받습니다.
		for (int i = 0; i < STUDENTS; i++) {
			printf("학생 %d의 성적을 입력하세요: ", i + 1);
			scanf_s("%d", &scores[i]);
		}

		char ch = getchar(); // 버퍼 임시 저장 변수, 엔터 지우기 위해서

		// char target을 선언합니다. 
		char target;
		printf("특정 점수(A,B,C,D,F)를 입력하시오: ");
		scanf_s("%c", &target, 1);

		classifyStudents(scores, target);

		return 0;
	}
		
	
