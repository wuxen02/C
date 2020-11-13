#include "stdio.h"
#include<stdlib.h>
void printHello(void);

int main(void) {
	printHello();
	return 0;
}

void printHello()
{
	printf("hello world!\n");
	system("pause");
}