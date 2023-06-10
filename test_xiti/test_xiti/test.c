#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main() {
	int ch = 0;
	
	while ((ch = getchar())!=EOF)
	{
		printf("%c\n", ch + 32);
		getchar();
	}
}
//四位数字倒序输出
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//}
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，您的电脑将在一分钟之后关机，输入我是猪取消关机\n");
//
//
//	scanf("%s", &input);
//	if (strcmp(input, "我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//猜数字游戏
//RAND_MAX=32767

//void menu() {
//	printf("###################################\n");
//	printf("#####   1. play    0. exit    #####\n");
//	printf("###################################\n");
//}
//
//void game() {
//	printf("猜数字\n");
//	int ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	int guess = 0;
//	
//	while (guess!=ret)
//	{
//		printf("请输入数字\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret) {
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("游戏结束\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}
//打印乘法口诀表
//int main() {
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for ( j = 1; j <= i ; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//10个数求最大值
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//}

//int main() {
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <=100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum=%lf\n", sum);
//}
//计算1-100中9的个数
//int main() {
//	int count = 0;
//	for (int i = 1; i <=100 ; i++)
//	{
//		if (i%10==9)
//		{
//			count++;
//		}
//		if (i/10==9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//打印素数
//int main() {
//	int i = 0, j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("count=%d", count);
//}
//打印闰年
//int main() {
//	int cnt = 0;
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if ((year%4==0&&year%100!=0)||year%400==0)
//		{
//			cnt++;
//			printf("%d ", year);
//		}
//	}
//	printf("cnt=%d", cnt);
//}
//求两个数的最大公约数
//辗转相除法
//int main() {
//	int m = 24, n = 18;
//	int r = 0;
//	int tmp = 0;
//	scanf("%d%d", &m, &n);
//	if (m<n)
//	{
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	while (m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//}
//输入三个数，按由大到小排序
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a<c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b<c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//}
