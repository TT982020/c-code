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
//ʹ������������в���
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
	//����
	MyStruct* ptr = realloc(ps, sizeof(MyStruct) + 20 * sizeof(int));
	if (ptr==NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	ps = ptr;
	ptr = NULL;

	//�ͷ�
	free(ps);
	ps = NULL;
	
	return 0;
}

//��һ��ʹ�÷�ʽ
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
//	//ҵ����
//	for (int i = 0; i < 10; i++) {
//		ps->p[i] = i;
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", ps->p[i]);
//	}
//
//	//����
//	ptr = (int*)malloc(sizeof(int) * 20);
//	if (ptr == NULL)
//	{
//		return;
//	}
//	ps->p = ptr;
//	ptr = NULL;
//
//	//�ͷ�
//	free(ps->p);
//	ps->p = NULL;
//	free(ps);
//	ps = NULL;
//	return;
//}