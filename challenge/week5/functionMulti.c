#include <stdio.h>

// multif�Լ��� main()���� �ؿ� �ֱ� ������ �Լ��� ������ �����մϴ�.
int multif(int value);

// �� ���� ��츦 ����� main()�� �����մϴ�. 
void main() {
	printf("1���� 2������ ���� %d\n", multif(2));
	printf("1���� 3������ ���� %d\n", multif(3));
	printf("1���� 5������ ���� %d\n", multif(5));
}

// ���丮�� ������ ������ �Լ� multif()�� �����մϴ�. 
int multif(int value) {
	long i;
	// ������ �����ϴµ�, ���� �����ϱ� ���� �ʱ� ���� 0�� �ƴ� 1�� �����մϴ�. 
	long multi = 1;

	// i�� value���� �۰ų� ���� ���� ����ǵ��� �մϴ�. 
	// i�� 1�� �÷� ���ϸ� multi�� ������ ��ȯ�մϴ�. 
	for (i = 1; i <= value; i++) {
		multi = multi * i;
	}
	return multi;
}