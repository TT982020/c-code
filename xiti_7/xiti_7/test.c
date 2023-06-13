#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//空心三角形
int main() {
    int n = 0;
    while (~scanf("%d", &n)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == 0 || i == n - 1 || i == j) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
}
//空心正方形
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        for (int i = 0; i < 5; i++) {
//            for (int j = 0; j < 5; j++) {
//                if (i == 0 || j == 0) {
//                    printf("* ");
//                }
//                else {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//}

//X型图案
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                if (i == j || i + j == n - 1) {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//}
//正斜线
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                if (i + j == n - 1) {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//}
//反斜线图案
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < i; j++) {
//                printf(" ");
//            }
//            printf("*");
//            for (int j = 0; j < n - i; j++) {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//}
//箭形图案
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n - i; j++) {
//                printf("  ");
//            }
//            for (int j = 0; j < i + 1; j++) {
//                printf("*");
//            }
//            printf("\n");
//        }
//
//        for (int i = 0; i < n + 1; i++) {
//            for (int j = 0; j < i; j++) {
//                printf("  ");
//            }
//            for (int j = 0; j < n - i + 1; j++) {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//}
//K型图案
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0;
//        for (i = 0; i < n; i++) {
//            int j = 0;
//            for (j = 0; j < n + 1 - i; j++) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n + 1; i++) {
//            for (int j = 0; j < i + 1; j++) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//}
//菱形图案
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        for (int i = 0; i < n; i++) {
//            int j = 0;
//            for (j = 0; j < n-i; j++) {
//                printf(" ");
//            }
//            for (j = 0; j < i + 1; j++) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < n + 1; i++) {
//            for (int j = 0; j < i; j++) {
//                printf(" ");
//            }
//            for (int j = 0; j < n + 1 - i; j++) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//}
//翻转金字塔图案
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        for (int i = 0; i < n; i++) {
//            int j = 0;
//            for (j = 0; j < i; j++) {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++) {
//                printf("* ");
//            }
//            for (j = 0; j < i; j++) {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//}
//翻转直角三角形
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 0; j <= n - i; j++) {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//}