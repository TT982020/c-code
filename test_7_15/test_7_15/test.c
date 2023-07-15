#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include <stddef.h>
typedef struct Node {
	int data;
	struct Node* next;
}* linklist;

typedef struct Node* linklist;

struct s1
{
	char c1;
	int i;
	char c2;
};

struct s2
{
	char c1;
	char c2;
	int i;
};
//修改默认对齐数
#pragma pack(4)
struct S
{
	int i;
	double d;
};
#pragma pack()
struct A {
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
int main() {
	printf("%d\n", sizeof(struct S));
	printf("%d\n", sizeof(struct A));
	/*printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));

	printf("%d\n", offsetof(struct s1, c1));
	printf("%d\n", offsetof(struct s1, i));
	printf("%d\n", offsetof(struct s1, c2));

	printf("%d\n", offsetof(struct s2, c1));
	printf("%d\n", offsetof(struct s2, c2));
	printf("%d\n", offsetof(struct s2, i));*/



}