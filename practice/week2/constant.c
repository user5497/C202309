#include <stdio.h>

// define���� ��� X�� PI�� �����Ѵ�, ��ӿ� ���� �빮�ڷ� �����Ѵ�. 
# define X 1
# define PI 3.141592 

int main()
{
	// ���� z�� �����Ѵ�.
	double z;

	// �ռ� ������ X�� PI�� ������� z�� ���� �����ȴ�.
	z = X + PI;

	// z�� ����Ѵ�, ��µǴ� z�� �Ҽ��̱� ������ %f�� ����Ѵ�. 
	printf("%f", z);

	return 0;
}