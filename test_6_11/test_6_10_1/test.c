#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include<ctype.h>

//大小写字母转换
int main() {
	int ch = 0;
	while (scanf("%c\n", &ch) != EOF) {
		if (isupper(ch))
		{
			printf("%c\n", ch + 32);
		}
		else if (islower(ch)) {
			printf("%c\n", ch - 32);
		}
	}
}
//int main() {
//	int ch = 0;
//	while (scanf("%c\n", &ch) != EOF)
//	{
//		if (ch>='A' && ch<='Z')
//		{
//			ch += 32;
//		}
//		else if(ch >= 'a' && ch <= 'z')
//		{
//			ch -= 32;
//		}
//		printf("%c\n", ch);
//	}
//}
//判断是不是字母
//int main() {
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch)) {
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//		getchar();
//	}
//}
//判断元音还是辅音
//int main() {
//	int ch = 0;
//	char arr[] = "AaEeIiOoUu";
//	//在%c前面加上空格，可以消化掉前面所有的空白字符，然后读取一个字符
//	//while (scanf(" %c", &ch) != EOF);
//
//	while ((ch = getchar()) != EOF)
//	{
//		//判断是否是元音
//		int i = 0;
//		if (strchr(arr,ch))
//		{
//			printf("Vowel\n");
//		}
//		else {
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//}
//int main() {
//	int ch = 0;
//	char arr[] = "AaEeIiOoUu";
//	while ((ch = getchar()) != EOF)
//	{
//		//判断是否是元音
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch==arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i==10)
//		{
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//}
//最高分数
//int main() {
//	int a = 0, b = 0, c = 0;
//	int max = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		max = a > b ? a : b;
//		max = max > c ? max : c;
//	}
//	printf("%d\n", max);
//}
//你是天才吗?
//int main() {
//	int score = 0;
//	while (~scanf("%d",&score))
//	{
//		if (score >= 90 && score <= 100) {
//			printf("Perfect\n");
//		}
//	}
//}
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF)// while(~scanf("%d", &n))
//	{
//		if (n >= 140) printf("Genius\n");
//	}
//
//}
//竞选社长
//int main() {
//	int ch = 0;
//	int flag = 0;
//	while ((ch=getchar())!='0' && ch != EOF)
//	{
//		if (ch == 'A')  flag++;
//		if (ch == 'B') flag--;
//	}
//	if (flag>0)
//	{
//		printf("A\n");
//	}
//	else if (flag < 0) {
//		printf("B\n");
//	}
//	else {
//		printf("E\n");
//	}
//}
//int main() {
//	char buf[100] = { 0 };
//	
//	int i = 0;
//	int count_a = 0;
//	int count_b = 0;
//	gets(buf);
//	while (buf[i]!='0')
//	{
//		if (buf[i] == 'A') count_a++;
//		else if (buf[i] == 'B') count_b++;
//		i++;
//	}
//	if (count_a>count_b)
//	{
//		printf("A\n");
//	}
//	else if (count_a < count_b) {
//		printf("B\n");
//	}
//	else {
//		printf("E\n");
//	}
//}