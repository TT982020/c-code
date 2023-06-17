#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//井字棋
int main() {
    char arr[3][3] = { 0 };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %c", &arr[i][j]);
        }
    }
    char flag = 'O';
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != 'O') {
            flag = arr[i][0];
            break;
        }
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != 'O') {
            flag = arr[0][i];
            break;
        }
    }
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] != 'O') {
        flag = arr[0][0];
    }
    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != 'O') {
        flag = arr[0][2];
    }
    if (flag == 'O') {
        printf("No winner!\n");
    }
    else if (flag == 'K') {
        printf("KiKi wins!\n");
    }
    else if (flag == 'B') {
        printf("BoBo wins!\n");
    }
}
//杨辉三角
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[30][30] = { 0 };
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (j == 0 || i == j) {
//                arr[i][j] = 1;
//            }
//            else {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j <= i; j++) {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//矩阵交换
//int main() {
//    int n = 0, m = 0;
//    int arr[10][10] = { 0 };
//    int i = 0, j = 0;
//    scanf("%d%d", &n, &m);
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    char t = 0;
//    int a = 0, b = 0;
//    scanf("%d", &k);
//    for (i = 0; i < k; i++) {
//        scanf(" %c %d %d", &t, &a, &b);
//        if (t == 'r') {
//            for (j = 0; j < m; j++) {
//                int tmp = arr[a-1][j];
//                arr[a-1][j] = arr[b-1][j];
//                arr[b-1][j] = tmp;
//            }
//        }
//        else if (t == 'c') {
//            for (j = 0; j < n; j++) {
//                int tmp = arr[j][a-1];
//                arr[j][a-1] = arr[j][b-1];
//                arr[j][b-1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//判断上三角矩阵
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int num = 0;
//    int flag = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            scanf("%d", &num);
//            if (i > j) {
//                if (num != 0) {
//                    printf("NO\n");
//                    return 0;
//                }
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}
//序列重组矩阵
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//矩阵元素定位
//int main() {
//    int n = 0, m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int x = 0, y = 0;
//    scanf("%d%d", &x, &y);
//    printf("%d\n", arr[x - 1][y - 1]);
//    return 0;
//}
//班级成绩输入输出
//int main() {
//    int i = 0;
//    float score[5] = { 0 };
//    for (i = 0; i < 5; i++) {
//        int j = 0;
//        float sum = 0.0;
//        for (j = 0; j < 5; j++) {
//            scanf("%f", &score[j]);
//            sum += score[j];
//        }
//        for (j = 0; j < 5; j++) {
//            printf("%.1f ", score[j]);
//        }
//        printf("%.1f\n", sum);
//    }
//    return 0;
//}