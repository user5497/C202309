#include <stdio.h>

int main()
{
	// 정수형 변수 x,y,z를 각각 선언
	int x; 
	int y; 
	int z; 

	// 변수 x,y에 값 부여 
	x = 1;
	y = 2; 

	// 앞서 부여한 x,y 기반으로 z 값이 결정
	z = x + y; 

	// printf로 z를 출력, 정수 출력이라 %d 사용
	printf("%d", z); 

	return 0;
}