#include <stdio.h>

int main(void) {
	int i = 0;
	// ó�� i�� 0���� ����
	do {
		// do�� i++�� �־� ó�� ������ ���� ���ƿ� �� ���� i�� 1�� ���Ѵ�. 
		i++;
		// i�� ¦���� �� ������� �ʰ� �������� ���ư���. 
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello world%d\n", i);
		// while�� ���� i�� 10���� ���� �������� �Լ��� �����Ѵ�. 
	} while (i < 10);
	return 0;
}