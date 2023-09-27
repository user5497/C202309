#include <stdio.h>

int main() {
	// 쌓을 층을 뜻할 변수 floor를 선언하고 입력받습니다.
	int floor;
	printf("몇 층을 쌓겠습니까? (5~100)");
	scanf_s("%d", &floor);

	// 역피라미드 형태로 쌓아야 하기 때문에, 변수 i가 1씩 줄어들게 합니다. 
	for (int i = floor; i > 0; i--) {
		// S는 늘어나야 하므로, 변수 k를 처음에 0으로 선언하고 ++를 이용합니다. 
		// 조건을 floor-i로 잡아 k가 0부터 시작해 하나씩 늘어날 수 있도록 합니다. 
		for (int k = 0; k < floor - i; k++) {
			printf("S");
		}
		// *은 줄어야 하므로, 처음 나와야 할 수만큼 변수를 설정하고 (floor*2-1) 하나씩 줄여갑니다.
		// 홀수개씩 출력될 수 있도록 j가 (floor-i)*2보다 클때만 출력되도록 합니다. 
		for (int j = floor * 2-1; j > (floor-i)*2; j--) {
			printf("*");
		}
 		printf("\n");
	}
	return 0;
}