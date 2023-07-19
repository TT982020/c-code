#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//找到距离最近的Fibonacci数
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int a = 1, b = 1;
//	int cur = 0;
//	while (1)
//	{
//		cur = a + b;
//		if (num<=cur)
//		{
//			break;
//		}
//		a = b;
//		b = cur;
//	}
//	printf("%d\n", (cur-num) < (num-b)? (cur-num): (num - b));
//}

//替换空格 把空格替换成%20
int main() {
    char s[100] = "we are happy.";
    char* str = s;
    int len = strlen(s);
    int space_count = 0;
    while (*str) {
        if (*str == ' ') {
            space_count++;
        }
        str++;
    }
    int end1 = len - 1;
    int end2 = len - 1 + space_count*2;
    while (end1 != end2) {
        if (s[end1] != ' ') {
            s[end2--] = s[end1--];
        }
        else {
            end1--;
            s[end2--] = '0';
            s[end2--] = '2';
            s[end2--] = '%';
        }
    }
    printf("%s\n", s);
}

//替换空格
//char* replaceSpace(char* s) {
//    char* p = malloc(10000);
//    int i = 0;
//    while (*s) {
//        if (*s == ' ')
//        {
//            p[i++] = '%';
//            p[i++] = '2';
//            p[i++] = '0';
//        }
//        else
//        {
//            p[i++] = *s;
//        }
//        s++;
//    }
//    p[i] = '\0';
//    return  p;
//}