// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdlib.h>

int add(int a,int b) {
	int aa = 10;
	aa += a + b;
	return aa;
}

int main()
{
	int bb = 0;

	bb = add(1, 2);

	printf("bb = %d\n", bb);

    return 0;
}

