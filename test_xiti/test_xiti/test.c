#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main() {
	int ch = 0;
	
	while ((ch = getchar())!=EOF)
	{
		printf("%c\n", ch + 32);
		getchar();
	}
}
//��λ���ֵ������
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//}
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬���ĵ��Խ���һ����֮��ػ�������������ȡ���ػ�\n");
//
//
//	scanf("%s", &input);
//	if (strcmp(input, "������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//��������Ϸ
//RAND_MAX=32767

//void menu() {
//	printf("###################################\n");
//	printf("#####   1. play    0. exit    #####\n");
//	printf("###################################\n");
//}
//
//void game() {
//	printf("������\n");
//	int ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	int guess = 0;
//	
//	while (guess!=ret)
//	{
//		printf("����������\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret) {
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}
//��ӡ�˷��ھ���
//int main() {
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for ( j = 1; j <= i ; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//10���������ֵ
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//}

//int main() {
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <=100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum=%lf\n", sum);
//}
//����1-100��9�ĸ���
//int main() {
//	int count = 0;
//	for (int i = 1; i <=100 ; i++)
//	{
//		if (i%10==9)
//		{
//			count++;
//		}
//		if (i/10==9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//��ӡ����
//int main() {
//	int i = 0, j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("count=%d", count);
//}
//��ӡ����
//int main() {
//	int cnt = 0;
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if ((year%4==0&&year%100!=0)||year%400==0)
//		{
//			cnt++;
//			printf("%d ", year);
//		}
//	}
//	printf("cnt=%d", cnt);
//}
//�������������Լ��
//շת�����
//int main() {
//	int m = 24, n = 18;
//	int r = 0;
//	int tmp = 0;
//	scanf("%d%d", &m, &n);
//	if (m<n)
//	{
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	while (m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//}
//���������������ɴ�С����
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a<c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b<c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//}
