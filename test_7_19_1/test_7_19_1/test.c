#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int num = 0;
	scanf("%d", &num);
	int a = 1, b = 1;
	int cur = 0;
	while (1)
	{
		cur = a + b;
		if (num<=cur)
		{
			break;
		}
		a = b;
		b = cur;
	}
	printf("%d\n", (cur-num) < (num-b)? (cur-num): (num - b));
}