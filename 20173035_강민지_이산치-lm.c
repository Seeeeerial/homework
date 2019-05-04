#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
void main() {
	int i, j, input, root, result = 0;				//반복문,입력값,루트값,소수판별결과
	scanf("%d", &input);							//입력받음
	printf("%d 이하의 소수는 ", input);				//출력용
	for (i = 2; i <= input; i++) {					//2부터 input까지 값 확인
		root = (int) sqrt(i);						//루트는 i의 루트값
		for (j = root; i % j; j--);					//약수찾기
		if (j == 1)	result = 1;						//1까지 돌면 소수맞음
		else result = 0;							//아니면 0이다
		if (result)	printf("%d ", i);				//소수면 출력
	}
}