#include <stdio.h>

int main()
{
	// 변수 x,y,z를 선언한다. 
	//x와 y에는 값을 부여하고, z는 값 없이 선언만 한다.
	int x = 4;
	int y = 2;
	int z;

	// +연산자를 이용하여 x 와 y를 더한 z를 출력한다. 
	// 출력하고자 하는 z가 정수여서 %d가 사용되었다.
	z = x + y;
	printf("z = x + y = %d\n", z);
	// - 연산자를 사용하여 x와 y의 차 z를 출력한다. 
	z = x - y;
	printf("z = x - y = %d\n", z);
	//* 연산자를 사용하여 x와 y의 곱 z를 출력한다.
	z = x * y;
	printf("z = x * y = %d\n", z);
	// /연산자를 사용하여 x에서 y를 나눈 값 z를 출력한다.
	z = x / y;
	printf("z = x / y = %d\n", z);

	return 0;
}