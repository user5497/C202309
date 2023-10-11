#include <stdio.h>

// ��� STUDENTS�� �����մϴ�.
#define STUDENTS 5


// scores�� targetGrade�� �޴� �Լ� classifyStudents�� �����մϴ�. 
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

		return 0;
	}
		
	
