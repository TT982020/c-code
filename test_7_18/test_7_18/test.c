#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "test.h"
#include <stddef.h>
#define M 100
#undef M
#define SQUARE(X) ((X)*(X))
#define PRINT(N) printf("the value of "#N" is %d.\n",N)
#define CAT(CLASS,NUM) CLASS##NUM
#define MALLOC(num,type) (type*)malloc((num)*sizeof(type))
void test1() {
	int r = 5;
	printf("%d\n", SQUARE(5+1));
}

void test2() {
	//printf("hello ""world.");
	int a = 10, b = 20;
	PRINT(a);
	PRINT(b);
}

void test3() {
	int class09 = 100;
	printf("%d\n", CAT(class, 09));
	int sum5 = 0;
	for (int i = 0; i < 10; i++)
	{
		CAT(sum, 5) += i;
	}
	printf("%d\n", sum5);
}
void test4() {
	int* p = MALLOC(10, int);
	printf("%p", p);
	
}
struct MyStruct
{
	int a;
	int b;
};
int main() {
	//test1();
	//test2();
	//test3();
	test4();
	//printf("%d",offsetof(struct MyStruct, b));
}