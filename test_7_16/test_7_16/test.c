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

//�ж����д�������⣬���������޸�

void GetMemory(char* p)
{
	//�����ڴ�й©��GetMemory(str);���е���ʱ��pʱstr��һ��������
	//��ôp�ڻ�÷��䵽�ĵ�ַ֮������GetMemory�Ľ������ᱻ���գ���ô�Ͳ������ڴ�й¶
	p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	//GetMemory(str);֮��str���ػ���NULL����ôstrcpy��ʱ��ᵼ�½����ô���
	GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
}
//�޸İ汾1
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

//�޸İ汾2
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