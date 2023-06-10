#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//ц╟ещеепР
void bubble_sort(int arr[], int n) {
	for (int i = 1; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < n - i; j++) {
			if (arr[j]>arr[j+1])
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag)
		{
			break;
		}
	}
}
int main() {
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
}

//int main() {
//	char arr[] = "abcd";
//	char arr1[] = { 'a','b','c','d' };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr1));
//}