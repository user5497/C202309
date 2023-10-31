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

// scores���� ���ϴ� ������ �ϴ� �Լ�. 
int sumScores(int scores[]) {
	int sum = 0;
	for (int i = 0; i < STUDENTS; i++) {
		sum += scores[i]; // sum�� �迭 scores�� ���� �ϳ��� ���� ���� ���մϴ�. 
	}
	return sum;
}

// �������� ����� ���ϴ� �Լ�. 
double averageScores(int scores[]) {
	int sum = sumScores(scores); // �Լ� sumScores���� ������ �����ɴϴ�.
	double average = (double)sum / (double)STUDENTS; // �м� ���� ������ ���� Ÿ���� double�� ���� �������ݴϴ�. 
	return average;
}


// �������� ������ ���ϴ� �Լ�.
void printRanks(int scores[]) {
	int ranks[STUDENTS]; // ������ �����ص� �迭 ����. 
	for (int i = 0; i < STUDENTS; i++) {
		ranks[i] = 1; // ó�� ���� ������ 1�� �����մϴ�. 
		for (int j = 0; j < STUDENTS; j++) {
			if (scores[j] > scores[i]) {
				ranks[i]++; // i�� �����Ǿ��� �� j�� ���� ��� ���� ���ϸ鼭, �� ū �ٸ� ��Ұ� ������ ������ �����մϴ�. 
			}
		}
		printf("%d�л��� ������ %d�Դϴ�. \n", i+1, ranks[i]);
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

	char ch = getchar(); // ���͸� ����� ���� ���� �ӽ� ���� �Լ�. 

	char target;
	printf("Ư�� ����(A,B,C,D,F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = averageScores(scores);
	printf("�л��� ������ �� ���� %d�̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	printRanks(scores);

	return 0;
}
