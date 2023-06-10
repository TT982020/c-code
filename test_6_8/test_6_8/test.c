#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "add.h"
//青蛙跳台阶问题
// 剑指offer

//汉诺塔问题
void move(char a, char b) {
	printf("%c-----%c\n", a, b);
}
void Hanoi(int n, char a, char b, char c) {
	if (n==1)
	{
		move(a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);
		move(a, c);
		Hanoi(n - 1, b, a, c);
	}
}
int main() {
	Hanoi(3, 'A', 'B', 'C');
}
//斐波那契数列
//int fab(int n) {
//	if (n<=2)
//	{
//		return 1;
//	}
//	return fab(n - 1) + fab(n - 2);
//}

//int fab2(int n) {
//	int a = 1, b = 1;
//	int c = 0;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int res = fab2(n);
//	printf("res=%d\n", res);
//}

////求n的阶乘
//int Fac(int n) {
//	if (n>1)
//	{
//		return n * Fac(n - 1);
//	}
//	return 1;
//}
//int main() {
//	int n = 0, ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("res = %d\n", ret);
//}
//求字符串长度
//int getlen(const char* str) {
//	if (*str!='\0')
//	{
//		return 1 + getlen(str+1);
//	}
//	return 0;
//}
//int main() {
//	char arr[] = "bit";
//	int len = getlen(arr);
//	printf("%d\n", len);
//}
//递归，按顺序打印数字 1234 -> 1 2 3 4
//void print(int n) {
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//}
//打印金字塔
//int main() {
//    int ch = 0;
//    ch = getchar();
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 4 - i; j++) {
//            printf(" ");
//        }
//        for (int j = 0; j < i + 1; j++) {
//            printf("%c ", ch);
//        }
//        printf("\n");
//    }
//}
//int main() {
//	printf("%15d", 0xABCDEF);
//}
//int main() {
//	int a = 10, b = 20;
//	printf("%d\n", add(a, b));
//}
//void swap(int* pa, int* pb) {
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main() {
//	int a = 10, b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//}
//int main() {
//	char arr[] = "hello,world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//}
//int main() {
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//}