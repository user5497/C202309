#include <stdio.h>

int main() {
	// 쌓을 층 floor를 정의하고 입력받습니다.
	int floor;
	printf("몇 층으로 쌓을까요? (5~100)");
	scanf_s("%d", &floor);

	// i가 floor보다 작을 때만 for문이 돌아가도록 조건을 설정합니다. 
	for (int i = 0; i < floor; i++) {
		// S를 입력하기 위한 변수 j를 선언하고, 조건에 -i를 넣음으로 출력되는 S의 수가 하나씩 줄어듭니다. 
		for (int j = 0; j < floor - i-1; j++) {
			printf("S");
		}
		// k가 홀수개만 입력될 수 있도록 i*2+1로 조건을 설정합니다. 
		for (int k = 0; k < i*2+1; k++) {
			printf("*");
		}
		// i가 변할 때 들여쓰기를 한 번 해줍니다. 
		printf("\n");
	}
	return 0;
}