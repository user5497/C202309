#include <stdio.h>

// multif함수가 main()보다 밑에 있기 때문에 함수의 원형을 선언합니다.
long multif(int value);

// 세 가지 경우를 출력할 main()을 선언합니다. 
int main() {
	printf("1부터 2까지의 곱은 %ld\n", multif(2));
	printf("1부터 3까지의 곱은 %ld\n", multif(3));
	printf("1부터 5까지의 곱은 %ld\n", multif(5));
	return 0;
}

// 팩토리얼 연산을 수행할 함수 multif()를 선언합니다. 
long multif(int value) {
	long i;
	// 변수를 선언하는데, 곱을 저장하기 위해 초기 값을 0이 아닌 1로 선언합니다. 
	long multi = 1;

	// i가 value보다 작거나 같을 때만 실행되도록 합니다. 
	// i를 1씩 늘려 곱하며 multi에 저장해 반환합니다. 
	for (i = 1; i <= value; i++) {
		multi = multi * i;
	}
	return multi;
}
