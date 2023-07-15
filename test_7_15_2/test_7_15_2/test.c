#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main() {
//	int* p = malloc(40);
//	if (p==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL; //p free之后 还保存着地址值，需要赋值为NULL ，避免使用野指针
//	return 0;
////}
//int main() {
//	int a = 10;
//	int* p = &a;
//	//p = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}

// calloc = malloc + memset
//int main() {
//	int* p = (int*)calloc(10, 4);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int main() {
	int* p = (int*)malloc(40);
	for (int i = 0; i < 10; i++) {
		*(p + i) = i;
	}

	int* ptr = realloc(p, 80);//80 是扩容后的大小
	if (ptr != NULL)
	{
		p = ptr;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;

}