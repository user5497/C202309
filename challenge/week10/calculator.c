#include <stdio.h>

void summation(double *a, double *b, double *result);
void substraction(double* a, double* b, double* result);
void multiflication(double* a, double* b, double* result);
void division(double* a, double* b, double* result);

int main() {
	double a = 2, b = 3;
	double result;
	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf\n", a, b, result);

	substraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf\n", a, b, result);

	multiflication(&a, &b, &result);
	printf("%.0lf * %.0lf = %.2lf\n", a, b, result);

	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf\n", a, b, result);

	return 0;
}

// �������� �̿��� ���� ������ �����ϴ� �Լ�
void summation(double* a, double* b, double* result) {
	*result = *a + *b;
}

// �������� �̿��� ���̳ʽ� ������ �����ϴ� �Լ�
void substraction(double* a, double* b, double* result) {
	*result = *a - *b;
}

// �������� �̿��� ������ ������ �����ϴ� �Լ�
void multiflication(double* a, double* b, double* result) {
	*result = *a * *b;
}

// �������� �̿��� ���ϱ� ������ �����ϴ� �Լ�
void division(double* a, double* b, double* result) {
	*result = *a / *b;
}
