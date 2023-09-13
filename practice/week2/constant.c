#include <stdio.h>

// define으로 상수 X와 PI를 선언한다, 약속에 따라 대문자로 정의한다. 
# define X 1
# define PI 3.141592 

int main()
{
	// 변수 z를 선언한다.
	double z;

	// 앞서 선언한 X와 PI를 기반으로 z의 값이 결정된다.
	z = X + PI;

	// z를 출력한다, 출력되는 z가 소수이기 때문에 %f로 출력한다. 
	printf("%f", z);

	return 0;
}