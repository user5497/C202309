#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int scores[], char targetGrade) {
	printf("�л� ���� �з�:\n");

	// ������ ������ char grade�� �����մϴ�. 
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) {
		// if-else if�� ����Ͽ� �Է¹��� ������ ������ ������ grade�� ����Ǵ� ���� �����ϰ� �մϴ�. 
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
			printf("%d �л��� %c ������ �޾ҽ��ϴ�. ", i + 1, targetGrade);
		}
	}
}

int sumScores(int scores[]) {
	int sumScore = 0;
	for (int i = 1; i < STUDENTS; i++) {
		sumScore += scores[i];
	}
	printf("�л� ������ �� ���� %d�Դϴ�.\n", sumScore);
}

double averageScores(int scores[]) {
	double averageScore;
	averageScore =  sumScore/ STUDENTS;
	printf("�л� ������ ��� ���� averageScore�Դϴ�.");
}

void printRanks(int scores[]) {
	for (int i = 0; i < STUDENTS; i++) {
		
	}
	
}


int main() {
	// STUDENTSĭ�� ���� �迭 scores�� �����մϴ�. 
	int scores[STUDENTS];

	// 4���� �л��� ������ �Է¹޽��ϴ�.
	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); // ���� �ӽ� ���� ����, ���� ����� ���ؼ�

	// char target�� �����մϴ�. 
	char target;
	printf("Ư�� ����(A,B,C,D,F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);

	return 0;
}