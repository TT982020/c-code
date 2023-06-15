#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//二进制序列中偶数位和奇数位,分别输出
int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 30; i >=0 ; i-=2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (int i = 31; i >= 1; i-=2)
	{
		printf("%d ", (n >> i) & 1);
	}
}
//两个整数二进制位不同个数
//int main() {
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = m ^ n;
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	printf("%d\n", count);
//}
//int main() {
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1)) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//判断一个数是不是2的n次方
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if ((num & (num - 1)) == 0)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//}
//统计一个二进制数中1的个数
//int main() {
//	// n & (n-1) 可以去除最右边的1
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	printf("%d\n", count);
//
//}
//int main() {
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}