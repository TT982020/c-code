#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//char* GetMemory(void)
//{
//	//����ջ�ռ��ַ������
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

//����free str�� �ᵼ���ڴ�й©
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

//����Ұָ������⣬ע����free֮�󣬼ǵð�str��ΪNULL
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