#include <stdio.h>

int main(void) {
	int i = 0;
	// ó�� i�� 0���� ����
	// i�� 10 ���� ���� �� ��� �۵�.
	while (i < 10) {
		//���ƿö����� i�� +1 �۵�.
		i++;
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello World %d\n",i);
	}
	return 0;
}