#include <stdio.h>

int main() {
	// ���� �� floor�� �����ϰ� �Է¹޽��ϴ�.
	int floor;
	printf("�� ������ �������? (5~100)");
	scanf_s("%d", &floor);

	// i�� floor���� ���� ���� for���� ���ư����� ������ �����մϴ�. 
	for (int i = 0; i < floor; i++) {
		// S�� �Է��ϱ� ���� ���� j�� �����ϰ�, ���ǿ� -i�� �������� ��µǴ� S�� ���� �ϳ��� �پ��ϴ�. 
		for (int j = 0; j < floor - i-1; j++) {
			printf("S");
		}
		// k�� Ȧ������ �Էµ� �� �ֵ��� i*2+1�� ������ �����մϴ�. 
		for (int k = 0; k < i*2+1; k++) {
			printf("*");
		}
		// i�� ���� �� �鿩���⸦ �� �� ���ݴϴ�. 
		printf("\n");
	}
	return 0;
}