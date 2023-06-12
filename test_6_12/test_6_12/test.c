#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	char a = 1;
	int c = 1;
	printf("%u\n", sizeof(a));
	printf("%u\n", sizeof(+a));
	printf("%u\n", sizeof(!a));//逻辑反
	printf("%d\n", c + --c);
}
//int main() {
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//}
//int main() {
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//	
//}
//统计num的补码中有几个1
//int main() {
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == (n>>i & 1)) count++;
//	}
//	printf("%d\n", count);
//}
//int main() {
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}