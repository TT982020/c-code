#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//争夺前五名
void bubble_sort(int arr[], int n) {
	int tmp = 0;
	for (int i = 1; i <= n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < n-i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				flag = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag)
		{
			break;
		}
	}
}
int cmp_int(const void* elem1, const void* elem2) {
	return *(int*)elem2 - *(int*)elem1;
}
int main() {
	int n = 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//bubble_sort(arr, n);
	qsort(arr, n, 4, cmp_int);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

}
/*
* void qsort( void *base, 
			size_t num, 
			size_t width, 
			int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
*/


//写一个关机程序
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("您的电脑要关机，输入我是猪\n");
//	while (1)
//	{
//		scanf("%s", &input);
//		if (strcmp(input, "我是猪")==0)
//		{
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("您的电脑要关机，输入我是猪\n");
//		}
//	}
//}
//找出只出现一次的数字
//int main() {
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		a = a ^ arr[i];
//	}
//	printf("%d\n", a);
//	return 0;
//}
//进制A+B
//int main() {
//	int a = 0, b = 0;
//	scanf("%x %o", &a, &b);
//	printf("%d\n", a + b);
//	printf("%#x %#o\n", a + b, a + b);
//}


////打印平均成绩
//int main() {
//	int num = 0;
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &num);
//		sum += num;
//	}
//	printf("%.1lf", sum / 5.0);
//
//	return 0;
//}
//输出学生信息
//int main() {
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man");
//	return 0;
//}
//kiki和酸奶
//int main() {
//	int n = 0, h = 0, m = 0;
//	while (scanf("%d %d %d", &n, &h, &m) != EOF) {
//		int x = m / h;
//		if (m % h > 0)
//		{
//			x++;
//		}
//		printf("%d\n", n - x);
//	}
//	return 0;
//}
//总成绩和平均分计算
//int main() {
//	double sum = 0, score = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%lf", &score);
//		sum += score;
//	}
//	printf("%.2lf %.2lf", sum, sum / 3);
//}
//时间转换
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int hour = 0, min = 0, sec = 0;
//	hour = n / 3600;
//	n = n % 3600;
//	min = n / 60;
//	n = n % 60;
//	sec = n;
//	printf("%d %d %d", hour, min, sec);
//}
//int main() {
//    for (int i = 10000; i <= 99999; i++) {
//        int sum = 0;
//        for (int j = 10; j <= 10000; j *= 10) {
//            sum += (i % j) * (i / j);
//        }
//        if (sum == i) {
//            printf("%d ", i);
//        }
//    }
//}
//#define PI 3.1415926
//int main() {
//	double r = 0;
//	scanf("%lf", &r);
//	printf("%.3lf", 4 / 3 * PI * r * r * r);
//}
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//}