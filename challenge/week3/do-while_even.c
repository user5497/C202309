#include <stdio.h>

int main(void) {
	int i = 0;
	// 처음 i를 0으로 선언
	do {
		// do에 i++를 넣어 처음 시작할 때와 돌아올 때 마다 i에 1을 더한다. 
		i++;
		// i가 짝수일 때 출력하지 않고 시작으로 돌아간다. 
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello world%d\n", i);
		// while을 통해 i가 10보다 작을 때까지만 함수를 실행한다. 
	} while (i < 10);
	return 0;
}