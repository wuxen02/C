/* Input two numbers, output the product */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int x, y, m;				/* �������ͱ���x��y��m */
	printf("Please input x and y\n");	/* �����ʾ��Ϣ */
	scanf_s("%d%d", &x, &y);			/* ������������������x��y���� */
	m = x * y;					/* �������������Ļ�����������m */
	printf("%d * %d = %d\n", x, y, m);		/* ������ */
	system("pause");
	return 0;
}