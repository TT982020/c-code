#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N_VALUES 5
//��������
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
//���ַ�������
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
//������������룬���ص�ָ��������
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