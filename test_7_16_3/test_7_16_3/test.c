#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <errno.h>
//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//д�ļ�
//int main() {
//	FILE* pf = fopen("test.txt", "w");
//	if (pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	for (int i = 'a'; i <= 'z'; i++) {
//		fputc(i, pf);
//	}
//
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//���ļ�
//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf==NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//д�ļ�
//int main() {
//	FILE* pf = fopen("test.txt", "w");
//	if (pf==NULL)
//	{
//		return 1;
//	}
//
//	fputs("hello,bit~\n", pf);
//	fputs("hello,bit~", pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//���ļ�
//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	char arr[20] = { 0 };
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct S
{
	char name[20];
	int age;
	float score;
};
//дһ���ṹ�嵽�ļ���
//int main() {
//	struct S s = { "zhangsan", 25, 90.8 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf==NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��һ���ļ��ж�һ���ṹ��
//int main() {
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fscanf(pf, "%s %d %f", s.name, &s.age, &s.score);
//	printf("%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//������д
//int main() {
//	struct S s[2] = { {"zhangsan", 20, 45.9}, {"qqzhangsan", 20, 45.9} };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fwrite(&s, sizeof(s), 2, pf);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�����ƶ�
//int main() {
//	struct S s[2] = {0};
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fread(&s, sizeof(struct S), 2, pf);
//	for (int i = 0; i < 2; i++) {
//		printf("%s %d %f\n", s[i].name, s[i].age, s[i].score);
//	}
//	
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//sprintf: ��һ���ṹ����������һ���ַ���
//sscanf: ��һ���ַ������뵽һ���ṹ����
int main() {
	struct S s = { "lisi",20,98 };
	struct S tmp = { 0 };
	char buf[100] = { 0 };
	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
	printf("%s\n", buf);

	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
}