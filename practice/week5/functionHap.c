#include <stdio.h>

// hapf�Լ��� main()���� �ؿ� �ֱ� ������ �Լ��� ������ �����մϴ�. 
int hapf(int vlaue);

// �� ���� ��츦 ����� main()�� �����մϴ�. 
void main() {
	printf("1���� 10������ ���� %d\n", hapf(10));
	printf("1���� 100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));
}

// ���ϱ� ������ ������ hap �Լ��� �����մϴ�. int�� �޽��ϴ�. 
int hapf(int value) {
	int i = 0;
	int hap = 0;

	// i�� value���� �۰ų� ���� ���� �����ϰ� �մϴ�. 
	// ���� ������ i�� 1�� �þ�� �Ͽ� hap�� �����մϴ�. 
	while (i <= value) {
		hap += i;
		i++;
	}
	return hap;
}