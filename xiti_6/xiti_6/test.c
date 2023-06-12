#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//获得月份的天数
int main() {

}
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