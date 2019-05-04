#include <stdio.h>
#pragma warning(disable : 4996)
void main() {
	int i, j, input, count = 0;				//반복문,입력값, 소수판별
	scanf("%d", &input);					//입력받음
	printf("%d 이하의 소수는 ", input);		//출력용
	for (i = 2; i <= input; i++) {			//2부터 input까지 값 확인
		count = 0;							//0으로 초기화
		for (j = 2; j*j <= i; j++){
			if (i % j == 0) {				//나눠지면 count는 1이되고 종료
				count++;
				break;
			}
		}
		if (count == 0)	printf("%d ", i);	//소수면 출력
	}
}