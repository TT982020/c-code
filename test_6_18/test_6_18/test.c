#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
void reverse(char* p, char* q) {
	assert(p && q);
	while (p<q)
	{
		char tmp = *p;
		*p = *q;
		*q = tmp;
		p++;
		q--;
	}
}
//倒置字符串
int main() {
	char arr[101] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	
	char* start = arr;
	char* end = start;
	while (*start)
	{
		while (*end != ' ' && *end!='\0') {
			end++;
		}
		reverse(start, end - 1);
		if (*end!='\0')
		{
			end++;
		}
		start = end;
	}
	printf("%s\n", arr);
	return 0;

}
//求a和b的最小公倍数
//int main() {
//	int  n = 0, m = 0;
//	int n1 = 0, m1 = 0;
//	scanf("%d%d", &n, &m);
//	n1 = n;
//	m1 = m;
//	while (m % n)
//	{
//		int tmp = m % n;
//		m = n;
//		n = tmp;
//	}
//	printf("%d\n", n);
//	printf("%d", n1 * m1 / n);
//}
//字符串逆序
//int main() {
//	char arr[20] = { 0 };
//	gets(arr);
//	int left = 0, right = strlen(arr) - 1;
//	while (left<=right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//}

//void test2() {
//	printf("hehe");
//}
//void test1() {
//	test2();
//}
//void test() {
//	test1();
//}
//int main() {
//	test();
//}
//反汇编查看
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//查看寄存器
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	printf("%d\n", c);
//}


//死循环-调试发现
//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	for (i = 0; i <= 12 ; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//}
//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src; 
//}

//char* my_strcpy(char* dest, const char* src) {
//	//断言
//	assert(src && dest);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main() {
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main() {
//	const int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", *p);
//}