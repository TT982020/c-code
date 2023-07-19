#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
//offsetof宏实现
#define OFFSETOF(type,m_name)  (size_t)&(((struct S*)0)->m_name)
typedef struct S
{
	char c1;
	int i;
	char c2;
} S;

//字符串转整数函数，需要考虑一些特殊情况
//1.字符串前面有空白字符
//2.字符串中间出现非数字字符
//3.所代表的数字超过了整型的范围
//4.前面有+-号
//4.空指针返回什么？
//5.空字符串返回什么？
enum Status {
	VALID,
	INVALID
}sta = INVALID;
int my_atoi(char* str) {
	assert(str);
	int flag = 1;
	
	if (*str=='\0')
	{
		sta = INVALID;
		return 0;
	}
	else
	{
		while (isspace(*str))
		{
			str++;
		}
		if (*str=='-')
		{
			flag = -1;
			str++;
		}
		else if (*str == '+') {
			flag = 1;
			str++;
		}
		long long ret = 0;
		while (*str)
		{
			if (isdigit(*str)) {
				ret = 10 * ret + flag * (*str - '0');
				if (ret > INT_MAX || ret < INT_MIN)
				{
					return 0;
				}
				str++;
			}
			else
			{
				return (int)ret;
			}
			
		}
		if (*str=='\0')
		{
			sta = VALID;
		}
		
		return (int)ret;
	}
	
}
int main() {
	/*printf("%d\n", offsetof(S, c1));
	printf("%d\n", offsetof(S, i));
	printf("%d\n", offsetof(S, c2));*/
	printf("%d\n", OFFSETOF(S, c1));
	printf("%d\n", OFFSETOF(S, i));
	printf("%d\n", OFFSETOF(S, c2));
	char arr[] = "-1234";
	//char arr[] = "   1234";
	//char arr[] = "   12ffsa34";
	//char arr[] = "   1234555555555555555555555555";
	int ret = my_atoi(arr);
	if (sta==INVALID)
	{
		printf("非法:%d", ret);
	}
	else {
		printf("合法:%d", ret);
	}
}



