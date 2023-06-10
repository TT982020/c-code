#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
int main() {
    for (int i = 10000; i <= 99999; i++) {
        int sum = 0;
        for (int j = 10; j <= 10000; j *= 10) {
            sum += (i % j) * (i / j);
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
}
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