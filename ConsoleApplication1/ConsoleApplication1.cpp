// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
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

