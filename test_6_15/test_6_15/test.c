#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//������������ż��λ������λ,�ֱ����
int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 30; i >=0 ; i-=2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (int i = 31; i >= 1; i-=2)
	{
		printf("%d ", (n >> i) & 1);
	}
}
//��������������λ��ͬ����
//int main() {
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = m ^ n;
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	printf("%d\n", count);
//}
//int main() {
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1)) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//�ж�һ�����ǲ���2��n�η�
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	if ((num & (num - 1)) == 0)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//}
//ͳ��һ������������1�ĸ���
//int main() {
//	// n & (n-1) ����ȥ�����ұߵ�1
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	printf("%d\n", count);
//
//}
//int main() {
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}