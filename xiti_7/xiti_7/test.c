#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����������
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
//����������
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

//X��ͼ��
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
//��б��
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
//��б��ͼ��
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
//����ͼ��
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
//K��ͼ��
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
//����ͼ��
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
//��ת������ͼ��
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
//��תֱ��������
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