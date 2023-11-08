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

// 역참조를 이용해 덧셈 연산을 시행하는 함수
void summation(double* a, double* b, double* result) {
	*result = *a + *b;
}

// 역참조를 이용해 마이너스 연산을 시행하는 함수
void substraction(double* a, double* b, double* result) {
	*result = *a - *b;
}

// 역참조를 이용해 나누기 연산을 시행하는 함수
void multiflication(double* a, double* b, double* result) {
	*result = *a * *b;
}

// 역참조를 이용해 곱하기 연산을 시행하는 함수
void division(double* a, double* b, double* result) {
	*result = *a / *b;
}
