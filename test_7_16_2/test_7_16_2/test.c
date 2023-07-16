#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
typedef struct MyStruct
{
	int i;
	int a[0];
}MyStruct;

typedef struct S {
	int i;
	int* p;
}S;
//使用柔性数组进行操作
int main() {
	MyStruct* ps = (MyStruct*)malloc(sizeof(MyStruct) + 10 * sizeof(int));
	if (ps==NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	

	for (int i = 0; i < 10; i++) {
		ps->a[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", ps->a[i]);
	}
	//扩容
	MyStruct* ptr = realloc(ps, sizeof(MyStruct) + 20 * sizeof(int));
	if (ptr==NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	ps = ptr;
	ptr = NULL;

	//释放
	free(ps);
	ps = NULL;
	
	return 0;
}

//另一种使用方式
//int main() {
//	S* ps = (S*)malloc(sizeof(S));
//	if (ps==NULL)
//	{
//		return;
//	}
//	ps->i = 100;
//	int* ptr = (int*)malloc(sizeof(int) * 10);
//	if (ptr==NULL)
//	{
//		return;
//	}
//	ps->p = ptr;
//
//	//业务处理
//	for (int i = 0; i < 10; i++) {
//		ps->p[i] = i;
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", ps->p[i]);
//	}
//
//	//扩容
//	ptr = (int*)malloc(sizeof(int) * 20);
//	if (ptr == NULL)
//	{
//		return;
//	}
//	ps->p = ptr;
//	ptr = NULL;
//
//	//释放
//	free(ps->p);
//	ps->p = NULL;
//	free(ps);
//	ps = NULL;
//	return;
//}