#include <stdio.h>

// hapf함수가 main()보다 밑에 있기 때문에 함수의 원형을 선언합니다. 
int hapf(int vlaue);

// 세 가지 경우를 출력할 main()을 선언합니다. 
void main() {
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
}

// 더하기 연산을 수행할 hap 함수를 선언합니다. int로 받습니다. 
int hapf(int value) {
	int i = 0;
	int hap = 0;

	// i가 value보다 작거나 같을 때만 수행하게 합니다. 
	// 범위 내에서 i가 1씩 늘어나게 하여 hap에 저장합니다. 
	while (i <= value) {
		hap += i;
		i++;
	}
	return hap;
}