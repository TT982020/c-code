#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//序列合并
int main() {
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    int i = 0;
    int j = 0;
    int n = 0, m = 0;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i++]);
        }
        else {
            printf("%d ", arr2[j++]);
        }
    }
    if (i == n) {
        for (; j < m; j++) {
            printf("%d ", arr2[j]);
        }
    }
    else {
        for (; i < n; i++) {
            printf("%d ", arr1[i]);
        }
    }
}
//序列中整数去重
//int main() {
//    int n = 0;
//    int arr[1000] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++) {
//        int j = 0;
//        for (j = i + 1; j < n; j++) {
//            if (arr[j] == arr[i]) {
//                int k = 0;
//                for (k = j; k < n - 1; k++) {
//                    arr[k] = arr[k + 1];
//                }
//                j--;
//                n--;
//            }
//        }
//    }
//    for (i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//}
//序列中删除指定数字
//int main() {
//    int n = 0;
//    int arr[50] = { 0 };
//    int del = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &del);
//    int j = 0;
//    for (i = 0; i < n; i++) {
//        if (arr[i] != del) {
//            arr[j++] = arr[i];
//        }
//    }
//    for (i = 0; i < j; i++) {
//        printf("%d ", arr[i]);
//    }
//}
//有序序列判断
//int main() {
//    int n = 0;
//    int arr[50] = { 0 };
//    int flag1 = 0;//升序
//    int flag2 = 0;//降序
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//        if (i > 0) {
//            if (arr[i] > arr[i - 1]) {
//                flag1 = 1;
//            }
//            else {
//                flag2 = 1;
//            }
//        }
//    }
//    if (flag1 + flag2 == 1) {
//        printf("sorted\n");
//    }
//    else {
//        printf("unsorted\n");
//    }
//}
//最高分和最低分之差
//int main() {
//    int n = 0;
//    int max = 0;
//    int min = 10000;
//    int num = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &num);
//        if (num > max) {
//            max = num;
//        }
//        if (num < min) {
//            min = num;
//        }
//    }
//    printf("%d\n", max - min);
//}
//正数和负数的个数
//int main() {
//    int n = 0;
//    int pos = 0;
//    int neg = 0;
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &n);
//        if (n > 0) {
//            pos++;
//        }
//        if (n < 0) {
//            neg++;
//        }
//    }
//    printf("positive:%d\n", pos);
//    printf("negative:%d\n", neg);
//}
//逆序输出
//int main() {
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++) {
//        scanf("%d", &arr[9 - i]);
//    }
//    for (i = 0; i < 10; i++) {
//        printf("%d ", arr[i]);
//    }
//}
//矩阵计算
//int main() {
//    int n = 0, m = 0;
//    int a = 0;
//    int sum = 0;
//    scanf("%d%d", &n, &m);
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &a);
//            if (a > 0) {
//                sum += a;
//            }
//        }
//    }
//    printf("%d\n", sum);
//}
//密码验证
//int main() {
//    char p1[20] = { 0 };
//    char p2[20] = { 0 };
//    while (~scanf("%s %s", p1, p2)) {
//        if (strcmp(p1, p2) == 0) {
//            printf("same\n");
//        }
//        else {
//            printf("different\n");
//        }
//    }
//}

// 统计成绩
//int main() {
//    int n = 0;
//    float sum = 0.0;
//    float max = 0.0;
//    float min = 100.0;
//    float score = 0.0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        scanf("%f", &score);
//        sum += score;
//        if (score > max) {
//            max = score;
//        }
//        if (score < min) {
//            min = score;
//        }
//    }
//    printf("%.2f %.2f %.2f", max, min, sum / n);
//}
