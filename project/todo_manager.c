#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

int main() {
	char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ��� ����� 2���� �迭
	int taskCount = 0; // �� ���� ���� �����ϱ� ���� ����

	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

		// ����ڿ��� �޴��� ����ϰ�, �޴��� �Է¹ޱ�
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");;
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // ���Ḧ ���� flag
		int delIndex = -1;  // �� �� ������ ���� index ���� ����
		int changeIndex = -1; // �� �� ������ ���� index ���� ����
		char ch; // �� �� ������ ���۸� �ޱ� ���� ���� ����

		// �Է¿� ���� ��� ����
		switch (choice) {
		case 1: // �� �� �߰�
			printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
			scanf_s("%s", tasks[taskCount], (int)sizeof(tasks[taskCount]));
			printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks[taskCount]);
			taskCount++; // �� ���� �� ����
			break;
		case 2: // �� �� ���� 
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);
			// ���� ��ȣ�� �����Ϸ� ���� �� ���� x
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
			}
			else {
				printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);

				// tasks[delIndex - 1]�ڸ��� ""�� �־� ����(���� ����)
				strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");

				// Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� �� ������ �ű��
				for (int i = delIndex; i < taskCount + 1; i++) {
					strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
				}
				taskCount -= 1;
			}
			break;
		case 3: // ��� ����
			printf("�� �� ���\n");
			for (int i = 0; i < taskCount; i++) {
				printf("%d. %s \n", i + 1, tasks[i]);
			}
			printf("\n");
			break;
		case 4: // ��ü ����
			terminate = 1; // terminate�� �̿��Ͽ� while�� Ż��
			break;

		case 5: // �� �� ����
			printf("������ ���� ��ȣ�� �˷��ּ���.");
			scanf_s("%d", &changeIndex);
			ch = getchar(); // �ε������� �Է¹��� ���� ���� 
			printf("���� �� ���� �˷��ּ���.");
			scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1])); // tasks�� �� �� �� ���� 
			printf("�� ���� ����Ǿ����ϴ�: %d %s\n", changeIndex, tasks[changeIndex - 1]);
			break;


		default: // ���� ���� ��ȣ �Է� 
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (taskCount == 10) { // �� ���� 10���� �Ǹ� while���� Ż��
			terminate == 1;
			printf("�� ���� �� á���ϴ�. ���α׷��� �����մϴ�. ");
		}

		// terminate�� �̿��� �ݺ��� Ż�� 
		if (terminate == 1) {
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}


	}
}