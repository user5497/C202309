#include <stdio.h>

int main(void) {
	int i = 0;
	// 처음 i를 0으로 선언
	// i가 10 보다 작을 때 계속 작동.
	while (i < 10) {
		//돌아올때마다 i에 +1 작동.
		i++;
		if (i % 2 == 0) {
			continue;
		}
		printf("Hello World %d\n",i);
	}
	return 0;
}