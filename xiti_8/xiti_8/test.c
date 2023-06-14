#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//奇偶统计
int main() {
	int n = 0;
	scanf("%d", &n);
	if (n%2==0)
	{
		printf("%d %d\n", n / 2, n / 2);
	}
	else {
		printf("%d %d\n", n / 2 + 1, n / 2);
	}
}
//包含9的个数
//int main() {
//    int i = 1;
//    int count = 0;
//    int num = 0;
//    for (i = 1; i <= 2019; i++) {
//        num = i;
//        while (num) {
//            if (num % 10 == 9) {
//                count++;
//                break;
//            }
//            else {
//                num /= 10;
//            }
//        }
//    }
//    printf("%d\n", count);
//}
//登陆验证
//int main() {
//    char name[20] = { 0 };
//    char password[20] = { 0 };
//    while (~scanf("%s%s", name, password)) {
//        if (strcmp(name, "admin") == 0 && strcmp(password, "admin") == 0) {
//            printf("Login Success!");
//        }
//        else {
//            printf("Login Fail!");
//        }
//    }
//}
//图像相似度
//int main() {
//    int m = 0, n = 0;
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    scanf("%d%d", &m, &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    int count = 0;
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//            if (arr1[i][j] == arr2[i][j]) {
//                count++;
//            }
//        }
//    }
//    printf("%.2lf\n", 100 * count * 1.0 / (m * n));
//}
//筛选法求素数2~n之间
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int arr[101] = { 0 };
//        for (int i = 2; i <= n; i++) {
//            arr[i] = i;
//        }
//        int j = 0;
//        for (j = 2; j <= n; j++) {
//            int k = 0;
//            for (k = j + 1; k <= n; k++) {
//                if (arr[k] % j == 0) {
//                    arr[k] = 0;
//                }
//            }
//        }
//        int i = 0;
//        int count = 0;
//        for (i = 2; i <= n; i++) {
//            if (arr[i] != 0) {
//                printf("%d ", arr[i]);
//            }
//            else {
//                count++;
//            }
//        }
//        printf("\n%d\n", count);
//    }
//}
//试除法求素数 2~n之间
//int main() {
//	int n = 0;
//	while (~scanf("%d",&n))
//	{
//		int i = 0;
//		int count = 0;
//		for ( i = 2; i <= n ; i++)
//		{
//			int j = 2;
//			for ( j = 2; j <= i-1; j++)
//			{
//				if (i % j == 0) {
//					count++;
//					break;
//				}
//			}
//			if (j==i)
//			{
//				printf("%d ", i);
//			}
//		}
//		printf("\n%d\n", count);
//	}
//}

//有序序列插入一个整数
//int main() {
//	int n = 0;
//	int arr[51] = { 0 };
//	int num = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &num);
//	int i = 0;
//	for (i = n-1; i >= 0; i--)
//	{
//		if (arr[i] > num) {
//			arr[i + 1] = arr[i];
//		}
//		else {
//			arr[i + 1] = num;
//			break;
//		}
//	}
//	if (i < 0)
//	{
//		arr[0] = num;
//	}
//	for (int i = 0; i < n+1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//公务员面试
//int main() {
//	int arr[7] = { 0 };
//	while (~scanf("%d%d%d%d%d%d%d",&arr[0],&arr[1], &arr[2]
//		, &arr[3], &arr[4], &arr[5], &arr[6]))
//	{
//		int sum = 0;
//		int max = 0;
//		int min = 100;
//		for (int i = 0; i < 7; i++)
//		{
//			sum += arr[i];
//			if (arr[i]<min)
//			{
//				min = arr[i];
//			}
//			if (arr[i]>max)
//			{
//				max = arr[i];
//			}
//		}
//		printf("%.2f\n", (sum - max - min) / 5.0);
//	}
//}
//数字三角形
//int main() {
//	int n = 0;
//	while (~scanf("%d",&n))
//	{
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//}
//http状态码
//int main() {
//    int code = 0;
//    while (~scanf("%d", &code)) {
//        switch (code) {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        default:
//            break;
//        }
//    }
//}
//五个人的平均身高
//int main() {
//    int i = 0;
//    float h = 0;
//    float sum = 0.0;
//    for (i = 0; i < 5; i++) {
//        scanf("%f", &h);
//        sum += h;
//    }
//    printf("%.2f\n", sum / 5);
//}