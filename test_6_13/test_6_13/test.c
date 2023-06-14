#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N_VALUES 5
//遍历数组
int main() {
	int arr[] = { 1,2,3,4,5 };
	int* p = arr;
	for (p = &arr[N_VALUES] ; p > &arr[0];  )
	{
		*--p = 0;
	}
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);

}
//求字符串长度
//int my_strlen(char* str) {
//	char* start = str;
//	char* end = str;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main() {
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//}
//以下是问题代码，返回的指针已销毁
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = test();
//	printf("%d", *p);
//	return 0;
//
//}