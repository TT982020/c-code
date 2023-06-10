#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//发布会信息
int main() {
	
	int ch = 0;
	while (scanf("%c",&ch)!=EOF)
	{
		ch = ch + 32;
		getchar();
		printf("%c\n", ch);
	}
}
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