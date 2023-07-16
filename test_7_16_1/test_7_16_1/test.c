#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//char* GetMemory(void)
//{
//	//返回栈空间地址的问题
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}

//忘记free str， 会导致内存泄漏
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}

//产生野指针的问题，注意在free之后，记得吧str置为NULL
void Test(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}