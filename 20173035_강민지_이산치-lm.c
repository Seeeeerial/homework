#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
void main() {
	int i, j, input, root, result = 0;				//�ݺ���,�Է°�,��Ʈ��,�Ҽ��Ǻ����
	scanf("%d", &input);							//�Է¹���
	printf("%d ������ �Ҽ��� ", input);				//��¿�
	for (i = 2; i <= input; i++) {					//2���� input���� �� Ȯ��
		root = (int) sqrt(i);						//��Ʈ�� i�� ��Ʈ��
		for (j = root; i % j; j--);					//���ã��
		if (j == 1)	result = 1;						//1���� ���� �Ҽ�����
		else result = 0;							//�ƴϸ� 0�̴�
		if (result)	printf("%d ", i);				//�Ҽ��� ���
	}
}