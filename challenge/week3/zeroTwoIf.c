#include <stdio.h>

int main() {
	// ���� num�� �����ϰ�, scanf_s�� �Է¹޽��ϴ�. 
	int num = 0;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	// num�� 0~2�϶����� ������ �����ؼ� if, else if�� �����մϴ�. 
	// if�� �̿��Ͽ� num�� 0�� �� zero�� ����մϴ�. 
	if (num == 0) {
		printf("zero");
	}
	// else if�� ����Ͽ� num�� 1,2�϶� ���� one, two�� ����մϴ�. 
	else if (num == 1) {
		printf("one");
	}
	else if (num == 2) {
		printf("two");
	}
	// else�� �̿��Ͽ� 0~2�� �ƴ� �ٸ� ���� �Է��Ͽ��� �� ����� ���� ���մϴ�. 
	else {
		printf("not 0~2");
	}
	return 0;
}