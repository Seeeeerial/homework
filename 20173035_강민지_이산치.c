#include <stdio.h>
#pragma warning(disable : 4996)
void main() {
	int i, j, input, count = 0;				//�ݺ���,�Է°�, �Ҽ��Ǻ�
	scanf("%d", &input);					//�Է¹���
	printf("%d ������ �Ҽ��� ", input);		//��¿�
	for (i = 2; i <= input; i++) {			//2���� input���� �� Ȯ��
		count = 0;							//0���� �ʱ�ȭ
		for (j = 2; j*j <= i; j++){
			if (i % j == 0) {				//�������� count�� 1�̵ǰ� ����
				count++;
				break;
			}
		}
		if (count == 0)	printf("%d ", i);	//�Ҽ��� ���
	}
}