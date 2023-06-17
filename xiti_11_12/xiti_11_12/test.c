#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//KiKi定义电子日历类
//#include <iostream>
//using namespace std;
//class TDate
//{
//private:
//    int year;
//    int month;
//    int day;
//public:
//    TDate(int y = 0, int m = 0, int d = 0) {
//        year = y;
//        month = m;
//        day = d;
//    }
//    void print() {
//        cout << day << '/' << month << '/' << year << endl;
//    }
//};
//int main() {
//    int year = 0, month = 0, day = 0;
//    cin >> year >> month >> day;
//    TDate date(year, month, day);
//    date.print();
//}
struct node {
    int data;
    struct node* next;
};
//KiKi学结构体和指针
int main() {
    int n = 0;
    scanf("%d", &n);
    int data = 0;
    int del = 0;
    struct node* list = NULL;
    struct node* tail = NULL;
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        struct node* pd = (struct node*)malloc(sizeof(struct node));
        pd->data = data;
        pd->next = NULL;
        if (list == NULL) {
            list = pd;
            tail = pd;
        }
        else {
            tail->next = pd;
            tail = pd;
        }
    }
    scanf("%d", &del);
    struct node* cur = list;
    struct node* prev = NULL;
    while (cur) {
        if (cur->data == del) {
            struct node* pn = cur;
            if (cur == list) {
                list = list->next;
                cur = list;
            }
            else {
                prev->next = cur->next;
                cur = prev->next;
            }
            free(pn);
            n--;
        }
        else {
            prev = cur;
            cur = cur->next;
        }
    }
    printf("%d\n", n);
    cur = list;
    while (cur) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    //释放列表
    cur = list;
    struct node* d = NULL;
    while (cur) {
        d = cur;
        cur = cur->next;
        free(d);
    }
    list = NULL;
}
//KiKi去重整数并排序
//int main() {
//    int n = 0;
//    int arr[1001] = { 0 };
//    int num = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &num);
//        arr[num] = 1;
//    }
//    for (int i = 1; i <= 1000; i++) {
//        if (arr[i]) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//小乐乐计算函数
//int max3(int a, int b, int c) {
//    int max = a;
//    max = a > b ? a : b;
//    max = max > c ? max : c;
//    return max;
//}
//int main() {
//    int a = 0, b = 0, c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    float m = 1.0 * max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
//    printf("%.2f\n", m);
//}
//小乐乐与字符串
//int main() {
//    char arr[8000] = { 0 };
//    scanf("%s", arr);
//    long long c = 0;
//    long long ch = 0;
//    long long chn = 0;
//    char* p = arr;
//    while (*p) {
//        if (*p == 'C') {
//            c++;
//        }
//        else if (*p == 'H') {
//            ch += c;
//        }
//        else if (*p == 'N') {
//            chn += ch;
//        }
//        p++;
//    }
//    printf("%lld\n", chn);
//}
//小乐乐与序列
//int main() {
//    int n = 0;
//    int arr[100001] = { 0 };
//    int num = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &num);
//        arr[num] = 1;
//    }
//    for (int i = 1; i <= n; i++) {
//        if (arr[i]) {
//            printf("%d ", i);
//        }
//    }
//}
//小乐乐走台阶
//int main() {
//    int n = 0;
//    int arr[31] = { 0 };
//    scanf("%d", &n);
//    arr[0] = 0;
//    arr[1] = 1;
//    arr[2] = 2;
//    for (int i = 3; i <= n; i++) {
//        arr[i] = arr[i - 1] + arr[i - 2];
//    }
//    printf("%d\n", arr[n]);
//    return 0;
//}
//小乐乐改数字
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int time = 1;
//    int sum = 0;
//    while (n) {
//        int r = n % 10;
//        if (r % 2 == 0) {
//            sum = sum + time * 0;
//        }
//        else {
//            sum = sum + time * 1;
//        }
//        time *= 10;
//        n /= 10;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//小乐乐与欧几里得
//int main() {
//    //最大公约数，辗转相除法
//    long long n = 0, m = 0;
//    long long n1 = 0, m1 = 0;
//    long long max = 0, min = 0;
//    scanf("%lld%lld", &n, &m);
//    long long r = 0;
//    n1 = n;
//    m1 = m;
//    while (m % n) {
//        r = m % n;
//        m = n;
//        n = r;
//    }
//    max = n;
//    //最小公倍数是 m*n/最大公约数
//    min = n1 * m1 / max;
//    printf("%lld\n", min + max);
//}
//小乐乐排电梯
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int k = n / 12;
//    printf("%d\n", k * 4 + 2);
//    return 0;
//}
//小乐乐定闹钟
//int main() {
//    int h = 0, m = 0, k = 0;
//    scanf("%d:%d %d", &h, &m, &k);
//    scanf("%d", &k);
//    h = ((m + k) / 60 + h) % 24;
//    m = (m + k) % 60;
//    printf("%02d:%02d\n", h, m);
//}
//小乐乐求和
//int main() {
//    long long n = 0;
//    scanf("%lld", &n);
//    printf("%lld\n", (1 + n) * n / 2);
//}
//小乐乐与进制转换
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[40] = { 0 };
//    int i = 0;
//    while (n) {
//        arr[i] = n % 6;
//        i++;
//        n /= 6;
//    }
//    for (i--; i >= 0; i--) {
//        printf("%d", arr[i]);
//    }
//}