#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100
#define STR "hello bit"
#define print printf("hehe")
// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
#define DEBUG_PRINT printf("file:%s\tline:%d\t \
date:%s\ttime:%s\n" ,\
__FILE__,__LINE__ ,\
__DATE__,__TIME__ )

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	for (size_t i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main() {
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen:");
//		return EXIT_FAILURE;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s: line = %d, date = %s,time = %s. i = %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main() {
	printf("%d\n", MAX);
	printf("%s\n", STR);
	print;

}