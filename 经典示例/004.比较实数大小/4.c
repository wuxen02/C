/* 输入两个浮点数，输出它们中的大数 */
#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	float x, y, c;				/* 变量定义 */
	printf("Please input x and y:\n");	/* 提示用户输入数据 */
	scanf_s("%f%f", &x, &y);
	c = x > y ? x : y;				/* 计算c=max(x,y) */
	printf_s("MAX of (%f,%f) is %f\n", x, y, c);	/* 输出c */
	system("pause");
	return 0;
}