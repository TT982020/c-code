#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src) {
	char* ret = dest;
	assert(dest && src);
	while (*dest!='\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
char* my_strcpy(char* dest, const char* src) {
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int my_strcmp(const char* str1, const char* str2){
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1=='\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
//int main() {
//	char arr1[] = "zhangsan";
//	char arr2[20] = "zhangsan";
//
//	//my_strcpy(arr2, arr1);
//	//my_strcat(arr2, " world");
//	
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//}

//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//}

//int main() {
//	char arr1[20] = "hello\0xxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main() {
//	char arr1[20] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2, 4);
//	if (ret==0)
//	{
//		printf("==\n");
//	}
//	else if (ret < 0) {
//		printf("<\n");
//	}
//	else {
//		printf(">\n");
//	}
//}

char* my_strstr(char* str1, const char* str2) {
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1!='\0' && *s2!='\0' && * s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)p;
		}
		p++;
	}
	return NULL;
}


//int main() {
//	char email[] = "abcdef";
//	char substr[] = "def";
//	char* p = my_strstr(email, substr);
//	if (p == NULL)
//	{
//		printf("未找到子串\n");
//	}
//	else {
//		printf("%s\n", p);
//	}
//}

//strtok 字符串分割
//int main() {
//	const char* sep = "@.";
//	char arr[30] = "lixiaotong.li@icbc.com.cn";
//	char tmp[30] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, sep); ret != NULL; ret = strtok(NULL, sep)) {
//		printf("%s\n", ret);
//	}
//	/*ret = strtok(arr, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);*/
//}
#include <errno.h>

//int main() {
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));*/
//	
//	FILE* fp = fopen("test.txt", "r");
//	if (fp == NULL)
//	{
//		//errno - c语言设置的全局错误码存放的地方
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	return 0;
//}

#include <ctype.h>
int main() {
	int ret = isspace(' ');
	ret = isspace('w');
	ret = isdigit('0');
	ret = islower('z');
	ret = isalpha('A');
	ret = isalnum('9');
	printf("%d\n", ret);
	printf("%c\n", tolower('W'));
	printf("%c\n", toupper('z'));
}