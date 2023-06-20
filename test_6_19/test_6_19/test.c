#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
#include <assert.h>
int Add(int x, int y) {
	return x + y;
}
void calc(int(*pf)(int, int)) {
	int a = 3, b = 5;
	int ret = pf(a, b);
	printf("%d\n", ret);
}
int main() {
	int arr[5] = { 0 };
	int (*p)[5] = &arr;

	printf("%p\n", Add);
	printf("%p\n", &Add);

	int (*pf)(int, int) = &Add;
	int ret = (*pf)(2, 3);
	ret = pf(2, 3);
	printf("%d\n", ret);
	calc(Add);
}
//void print(int arr[3][5],int r,int c) {
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int r, int c) {
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++) {
//			printf("%d ", *(*(p + i) + j));//p是第一行的地址，*p取出的是第一行的地址，也就是数组名
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print2(arr, 3, 5);
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));// p是指向数组的，*p其实就相当于数组名，数组名又是数组首元素的地址，所以*p本质上是数组首元素的地址
//	}
//}
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int(*p2)[10] = &arr;//数组指针 -》 存放数组的地址
//
//
//	char* arr1[5] = { 0 };
//	char* (*p3)[5] = &arr1;
//	printf("%p\n", p);
//	printf("%p\n", p2);
//	printf("%p\n", p3);
//}
//int main() {
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1==p2)
//	{
//		printf("p1==p2\n");
//	}
//	else {
//		printf("p1!=p2\n");
//	}
//	if (arr1==arr2)
//	{
//		printf("arr1==arr2\n");
//	}
//	else {
//		printf("arr1!=arr2\n");
//	}
//}
//有序序列合并
//int main() {
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[100] = { 0 };
//    int arr2[100] = { 0 };
//    int arr3[200] = { 0 };
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr1[i]);
//    }
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &arr2[i]);
//    }
//    int i = 0, j = 0, k = 0;
//    while (i < n && j < m) {
//        if (arr1[i] < arr2[j]) {
//            arr3[k++] = arr1[i++];
//        }
//        else {
//            arr3[k++] = arr2[j++];
//        }
//    }
//    if (i == n) {
//        while (j < m) {
//            arr3[k++] = arr2[j++];
//        }
//    }
//    if (j == m) {
//        while (i < n) {
//            arr3[k++] = arr1[i++];
//        }
//    }
//    for (int i = 0; i < m + n; i++) {
//        printf("%d ", arr3[i]);
//    }
//}
//调整数组顺序，使所有奇数位于数组前半部分
//void move_odd_even(int arr[], int sz) {
//	int left = 0, right = sz - 1;
//	while (left < right)
//	{
//		//如果没有 left<right 条件，会产生越界
//		while ((left < right) && (arr[left] % 2 == 1)) {
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left<right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//int main() {
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	move_odd_even(arr, sz);
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//strlen strcpy的实现
//int my_strlen(char* arr) {
//	int count = 0;
//	while (*arr!='\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//char* my_strcpy(char* dest, const char* src) {
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main() {
//	char arr[20] = "hello,bit~";
//	char arr1[20] = { 0 };
//	printf("%d\n", my_strlen(arr));
//	my_strcpy(arr1, arr);
//	printf("%s\n", arr1);
//}
//int main() {
//	int n = 9;
//	float* pFloat = (float*) & n;
//	printf("%d\n", n);
//	printf("%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *pFloat);
//}
//int main() {
//	unsigned int i = 0;
//	for (i = 9; i >= 0 ; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//}
//int main() {
//	// -128 ~ 127
//	char a = 128;
//	printf("%u\n", a);
//	printf("%d\n", a);
//	// 00000000 00000000 00000000 10000000
//	// 11111111 11111111 11111111 10000000
//}
//int main() {
//	char a = -128;
//	printf("%u\n", a);
//	// 10000000
//	//11111111 11111111 11111111 10000000
//}
//int main() {
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	return 0;
//}
//int main() {
//	int i = 1;
//	char* p = (char*)&i;
//	if (*p==1)
//	{
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}
//}
//void test(void) {
//	printf("hehe\n");
//}
//int main() {
//	test(1);
//	return 0;
//}