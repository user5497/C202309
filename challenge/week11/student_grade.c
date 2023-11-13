#include <stdio.h>
#define STUDENTS 5

void classifyStudents(int* scores, int size, char targetGrade) {
	printf("�л� ���� �з�:\n");

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
			printf("%d �л��� %c ������ �޾ҽ��ϴ�. ", i + 1, targetGrade);
		}
	}
}

// scores���� ���ϴ� ������ �ϴ� �Լ�. 
int sumScores(int* scores, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(scores + i); // sum�� �迭 scores�� ���� �ϳ��� ���� ���� ���մϴ�. 
	}
	return sum;
}

// �������� ����� ���ϴ� �Լ�. 
double averageScores(int* scores, int size) {
	int sum = sumScores(scores, STUDENTS); // �Լ� sumScores���� ������ �����ɴϴ�.
	double average = (double)sum / (double)STUDENTS; // �м� ���� ������ ���� Ÿ���� double�� ���� �������ݴϴ�. 
	return average;
}


// �������� ������ ���ϴ� �Լ�.
void printRanks(int* scores, int size) {
	int ranks[STUDENTS]; // ������ �����ص� �迭
	for (int i = 0; i < size; i++) {
		ranks[i] = 1; // ó�� ���� ������ 1�� ����
		for (int j = 0; j < size; j++) {
			if (*(scores + j) > *(scores + i)) {
				ranks[i]++; // i�� �����Ǿ��� �� j�� ���� ��� ���� ���ϸ鼭, �� ū �ٸ� ��Ұ� ������ ������ �����մϴ�. 
			}
		}
		printf("%d�л��� ������ %d�Դϴ�. \n", i + 1, ranks[i]);
	}

}


int main() {
	int scores[STUDENTS];

	for (int i = 0; i < STUDENTS; i++) {
		printf("�л� %d�� ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &scores[i]);
	}

	char ch = getchar(); // ���͸� ����� ���� ���� �ӽ� ���� �Լ�. 

	char target;
	printf("Ư�� ����(A,B,C,D,F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);

	classifyStudents(scores, STUDENTS, target);

	int sum = sumScores(scores, STUDENTS);
	double average = averageScores(scores, STUDENTS);
	printf("�л��� ������ �� ���� %d�̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	printRanks(scores, STUDENTS);

	return 0;
}