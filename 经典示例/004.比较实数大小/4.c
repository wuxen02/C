/* ������������������������еĴ��� */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	float x, y, c;				/* �������� */
	printf("Please input x and y:\n");	/* ��ʾ�û��������� */
	scanf_s("%f%f", &x, &y);
	c = x > y ? x : y;				/* ����c=max(x,y) */
	printf_s("MAX of (%f,%f) is %f\n", x, y, c);	/* ���c */
	system("pause");
	return 0;
}