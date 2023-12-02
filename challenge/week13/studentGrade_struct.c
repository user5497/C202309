#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void classifyStudents(struct Student* st,char target, int index);
int sumScores(struct Student*st, int num_student);
double averageScores(struct Student* st, int num_student);
void printRanks(struct Student* st, int num_student);

// �л� �̸��� ������ ������ ����ü.
struct Student {
	char *name;
	int score;
};


int main() {
	// 1. �л� �� �Է¹ޱ�. 
	int num_student = 0;
	printf("�л� ���� �Է��� �ּ���. ");
	scanf_s("%d", &num_student);

	// ����ü �迭 �Ҵ�. 
	struct Student* st = (struct Student*)malloc(sizeof(struct Student) * num_student);

	// 2. �л� �̸� & ���� �Է¹ޱ�. 
	for (int i = 0; i < num_student; i++) {

		// 2-1. �̸� �Է¹ޱ�. 
		printf("%d ��° �л��� �̸��� �Է��� �ּ���. ",i+1);
		char temp[100]; // �̸� ����� �ӽ� �迭. 
		scanf_s("%s", temp, (int)sizeof(temp)); 
		(st+i)->name = (char*)malloc((strlen(temp) + 1) * sizeof(char));
		strcpy_s((st+i)->name, strlen(temp) + 1, temp);

		// 2-2. ���� �Է¹ޱ�. 
		printf("�ش� �л��� ������ �Է��� �ּ���. ");
		scanf_s("%d", &st[i].score);
	}
	
	char ch = getchar();

	// Ÿ�� ���� ���ϱ� 
	char target;
	printf("Ư�� ����(A,B,C,D,F)�� �Է��Ͻÿ�: ");
	scanf_s("%c", &target, 1);
	printf("�л� ���� �з�:\n");
	for (int i = 0; i < num_student; i++) {
		int index = i; // ���� �����
		classifyStudents(&st[i], target,index);
	}

	// �հ� ���ϱ� 
	int sum = sumScores(st, num_student);

	// ��� ���ϱ� 
	double average = averageScores(st, num_student);
	printf("�л��� ������ �� ���� %d�̰�, ��� ���� %lf�Դϴ�.\n", sum, average);

	printRanks(st, num_student);

	// �޸� ����
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
		printf("%d �л��� %c ������ �޾ҽ��ϴ�. ", index + 1, target);
	}
}


int sumScores(struct Student*st, int num_student) {
	int sum = 0;
	for (int i = 0; i < num_student; i++) {
		sum += st[i].score; 
	}
	return sum;
}

// �������� ����� ���ϴ� �Լ�. 
double averageScores(struct Stugksrdent* st, int num_student) {
	int sum = sumScores(st, num_student); // �Լ� sumScores���� ������ �����ɴϴ�.
	double average = (double)sum / (double)num_student; // �м� ���� ������ ���� Ÿ���� double�� ���� �������ݴϴ�. 
	return average;
}


// �������� ������ ���ϴ� �Լ�.
void printRanks(struct Student* st, int num_student) {
	int* ranks = (int*)malloc(num_student * sizeof(int)); // ������ �����ص� �迭
	for (int i = 0; i < num_student; i++) {
		ranks[i] = 1; // ó�� ���� ������ 1�� ����
		for (int j = 0; j < num_student; j++) {
			if (st[j].score >st[i].score) {
				ranks[i]++; 
			}
		}
		printf("%d�л��� ������ %d�Դϴ�. \n", i + 1, ranks[i]);
	}
	
	free(ranks);
	
}