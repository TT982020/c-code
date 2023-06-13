#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//直角三角形图案
int main() {
    int n = 0;
    while (~scanf("%d", &n)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i + 1; j++) {
                printf("%c ", '*');
            }
            printf("\n");
        }
    }
}

//正方形图案
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                printf("%c ", '*');
//            }
//            printf("\n");
//        }
//    }
//}
//线段图案
//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        for (int i = 0; i < n; i++) {
//            printf("%c", '*');
//        }
//        printf("\n");
//    }
//}
//简单计算器
//int main() {
//	double n1 = 0.0, n2 = 0.0;
//	char op = 0;
//	while (~scanf("%lf %c %lf", &n1, &op, &n2)) {
//		switch (op)
//		{
//		case '+':
//			printf("%.4lf%c%.4lf=%.4lf\n", n1, '+', n2, n1 + n2);
//			break;
//		case '-':
//			printf("%.4lf%c%.4lf=%.4lf\n", n1, '-', n2, n1 - n2);
//			break;
//		case '*':
//			printf("%.4lf%c%.4lf=%.4lf\n", n1, '*', n2, n1 * n2);
//			break;
//		case '/':
//			if (n2==0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else {
//				printf("%.4lf%c%.4lf=%.4lf\n", n1, '/', n2, n1 / n2);
//			}
//			break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}
//获得月份的天数
//int main() {
//	int year = 0, month = 0;
//	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (~scanf("%d %d", &year, &month))
//	{
//		int day = days[month - 1];
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			if (month==2)
//			{
//				day += 1;
//			}
//		}
//		printf("%d\n", day);
//	}
//}
//计算一元二次方程
//int main() {
//	float a = 0.0, b = 0.0, c = 0.0;
//	while (scanf("%f %f %f", &a, &b, &c) != EOF) {
//		if (a==0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else {
//			float delta = 0.0;
//			delta = b * b - 4 * a * c;
//			if (delta == 0.0)
//			{
//				printf("x1=x2=%.2f\n", (-b) / (2 * a) + 0);//加0消除负0
//			}
//			else if (delta > 0.0) {
//				printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(delta)) / (2 * a),
//					(-b + sqrt(delta)) / (2 * a));
//			}
//			else
//			{
//				float real = -b / (2 * a);
//				float img = sqrt(-delta) / (2 * a);
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", real, img, real, img);
//			}
//		}
//	}
//}

//判断人体胖瘦程度
//int main() {
//	double w = 0, h = 0;
//	double bmi = 0;
//	while (scanf("%lf %lf", &w, &h) != EOF)
//	{
//		bmi = w / (h / 100.0) / (h / 100.0);
//		if (bmi < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (bmi >= 18.5 && bmi <= 23.9) {
//			printf("Normal\n");
//		}
//		else if (bmi > 23.9 && bmi <= 27.9) {
//			printf("Overweight\n");
//		}
//		else {
//			printf("Obese\n");
//		}
//	}
//}
//三角形判断
//int main() {
//	int a = 0, b = 0, c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a + b > c && a + c > b && b + c > a) {
//			if (a==b && b==c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b && a!=c) || (a == c && a!=b) || (b == c && b!=a)) {
//				printf("Isosceles triangle!\n");
//			}
//			else {
//				printf("Ordinary triangle!");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//}