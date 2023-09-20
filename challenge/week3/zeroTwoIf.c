#include <stdio.h>

int main() {
	// 변수 num을 선언하고, scanf_s로 입력받습니다. 
	int num = 0;
	printf("숫자를 입력하시오: ");
	scanf_s("%d", &num);

	// num이 0~2일때까지 경우들을 가정해서 if, else if로 설정합니다. 
	// if를 이용하여 num이 0일 때 zero를 출력합니다. 
	if (num == 0) {
		printf("zero");
	}
	// else if를 사용하여 num이 1,2일때 각각 one, two를 출력합니다. 
	else if (num == 1) {
		printf("one");
	}
	else if (num == 2) {
		printf("two");
	}
	// else를 이용하여 0~2가 아닌 다른 값을 입력하였을 때 출력할 말을 정합니다. 
	else {
		printf("not 0~2");
	}
	return 0;
}