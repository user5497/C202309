#include <stdio.h>

int main() {
	int choice;

	// 사용자에게 선택지를 알려주고 scanf_s로 choice를 입력받습니다. 
	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료.\n");
	scanf_s("%d", &choice);

	// if와 else if를 사용하며, choice의 값에 따라 출력되는 결과를 바꿉니다. 
	// choice가 1일 때 출력되는 결과입니다. 
	if (choice == 1) {
		printf("파일을 저장합니다.");
	}
	// 아래는 else if를 이용하여 choice가 1이 아님이 결정되었을 때, 
	// 다음에 확인할 사항들로 주어집니다. (choice가 2나 3인지)
	else if (choice == 2) {
		printf("저장 없이 닫습니다.");
	}
	else if (choice == 3) {
		printf("종료합니다.");
	}
	// 위 모든 과정을 거쳐, choice가 1,2,3 모두 아닐 때 출력하기 위해 else를 사용합니다. 
	else {
		printf("잘못 입력하셨습니다.");
	}
	return 0;
}