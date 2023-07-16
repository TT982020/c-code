#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main() {
//	int* p = (int *)malloc(40);
//	if (p==NULL)
//	{
//		return 1;
//	}
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}

//判断下列代码的问题，分析，并修改

void GetMemory(char* p)
{
	//存在内存泄漏，GetMemory(str);进行调用时，p时str的一个拷贝，
	//那么p在获得分配到的地址之后，随着GetMemory的结束，会被回收，那么就产生了内存泄露
	p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	//GetMemory(str);之后，str返回还是NULL，那么strcpy的时候会导致解引用错误
	GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
}
//修改版本1
void GetMemory1(char** p)
{
	*p = (char*)malloc(100);
}
void Test1(void)
{
	char* str = NULL;
	GetMemory1(&str);
	strcpy(str, "hello world");
	printf(str);
}

//修改版本2
char* GetMemory2()
{
	char* p = (char*)malloc(100);
	return p;
}
void Test2(void)
{
	char* str = NULL;
	str = GetMemory2();
	strcpy(str, "hello world");
	printf(str);
}

int main() {
	Test2();
	return 0;
}