#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void left_rotate_1(char* left, char* right) {
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_rotate(char arr[], int k) {

	int len = strlen(arr);

	for (int i = 0; i < k; i++)
	{
		char tmp = arr[0];
		for (int j = 0; j < len-1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}
//左旋字符串
void test4() {
	char arr[] = "abcdef";
	int k = 0;
	int len = strlen(arr);
	scanf("%d", &k);
	//left_rotate(arr, k);
	left_rotate_1(arr, arr + k - 1);
	left_rotate_1(arr + k, arr + len - 1);
	left_rotate_1(arr, arr + len - 1);
	printf("%s\n", arr);
}
//BC37
void test3() {
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf("%d %d", a + b, c);
}
//BC60
void test2() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++) {
			printf("  ");
		}
		for ( int j = 0; j<i+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
int test1() {
	int num = 0;
	scanf("%d", &num);
	int ret = 0;
	int k = 1;
	while (num)
	{
		int r = num % 10;
		if (r % 2 == 0)
		{
			ret += 0 * k;
		}
		else
		{
			ret += 1 * k;
		}
		k *= 10;
		num /= 10;
	}
	return ret;
}
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
struct Point
{
	int x;
	int y;
};
struct Point find_num(int arr[3][3], int r, int c, int k) {
	int x = 0, y = c - 1;
	struct Point p = { -1,-1 };
	while (x <= r - 1 && y >= 0)
	{
		if (arr[x][y] > k) {
			y--;
		}
		else if (arr[x][y] < k) {
			x++;
		}
		else
		{
			p.x = x;
			p.y = y;
			return p;
		}
	}
	return p;
}

int find_num_1(int arr[3][3], int *px, int * py, int k) {
	int x = 0, y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k) {
			y--;
		}
		else if (arr[x][y] < k) {
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	*px = -1;
	*py = -1;
	return 0;
}

//判断一个串是否是另一个串旋转得到
int is_left_move(char arr1[], char arr2[]) {
	int len = strlen(arr1);
	for (int i = 0; i < len; i++)
	{
		char tmp = arr1[0];
		for (int j = 0; j < len - 1; j++) {
			arr1[j] = arr1[j + 1];
		}
		arr1[len - 1] = tmp;
		if (strcmp(arr1, arr2) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int is_left_move_1(char arr1[], char arr2[]) {
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1!=len2)
	{
		return 0;
	}
	strncat(arr1, arr1, len1);
	char* p = strstr(arr1, arr2);
	if (p==NULL)
	{
		return 0;
	}
	else {
		return 1;
	}
}
//判断有序序列
void is_sorted(int arr[], int len) {
	int flag1 = 0, flag2 = 0;
	for (int i = 0; i < len-1; i++)
	{
		if (arr[i] <= arr[i + 1])
		{
			flag1 = 1;
		}
		if (arr[i] > arr[i + 1])
		{
			flag2 = 1;
		}
	}
	if (flag1+flag2==1)
	{
		printf("sorted");
	}
	else
	{
		printf("unsorted");
	}
}

int main() {
	//int ret = test1();
	//printf("%d\n", ret);
	//test2();
	//test3();
	//test4();
	//
	// 
	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int k = 0;
	//int x = 3, y = 3;
	//scanf("%d", &k);
	////struct Point p = find_num(arr, 3, 3, k);
	////printf("%d %d\n", p.x, p.y);
	//find_num_1(arr, &x, &y, k);
	//printf("%d %d\n", x, y);

	char arr1[20] = "abcdef";
	char arr2[] = "efabcd";
	int ret = is_left_move_1(arr1, arr2);
	printf("%d\n", ret);
}