#include <stdio.h>

int main() {
	int choice;

	// ����ڿ��� �������� �˷��ְ� scanf_s�� choice�� �Է¹޽��ϴ�. 
	printf("1. ���� ����\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����.\n");
	scanf_s("%d", &choice);

	// if�� else if�� ����ϸ�, choice�� ���� ���� ��µǴ� ����� �ٲߴϴ�. 
	// choice�� 1�� �� ��µǴ� ����Դϴ�. 
	if (choice == 1) {
		printf("������ �����մϴ�.");
	}
	// �Ʒ��� else if�� �̿��Ͽ� choice�� 1�� �ƴ��� �����Ǿ��� ��, 
	// ������ Ȯ���� ���׵�� �־����ϴ�. (choice�� 2�� 3����)
	else if (choice == 2) {
		printf("���� ���� �ݽ��ϴ�.");
	}
	else if (choice == 3) {
		printf("�����մϴ�.");
	}
	// �� ��� ������ ����, choice�� 1,2,3 ��� �ƴ� �� ����ϱ� ���� else�� ����մϴ�. 
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}
	return 0;
}