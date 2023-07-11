#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <assert.h>
void* my_memcpy(void* dest, const void* src, size_t num) {
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

void* my_memmove(void* dest, const void* src, size_t num) {
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		// 从前 -> 后进行拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else {
		// 从后 -> 前进行拷贝
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}

	}
	return ret;
}

void test1() {
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 28);
	//my_memcpy(arr1 + 2, arr1, 20);
	//memcpy(arr2, arr1, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr2[i]);
	}
}

//memcpy负责拷贝两块独立空间中的数据
//重叠内存的拷贝，memmove
void test2() {
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };

	memmove(arr1 + 2, arr1, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr1[i]);
	}

}

void test3() {
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };

	//my_memmove(arr1 + 2, arr1, 20);
	my_memmove(arr1, arr1 + 2, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
}

void test4() {
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,3,2 };
	int ret = memcmp(arr1, arr2, 12);
	printf("%d", ret);
}

void test5() {
	//char arr1[] = "hello,bit";
	//memset(arr1, 'x', 5);
	//memset(arr1+6, 'x', 3);
	//printf("%s\n", arr1);
	int arr[10] = { 0 };
	//memset是按字节来进行操作的，他会把每个字节都改成01
	memset(arr, 1, 40);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main() {
	//test3();
	//test4();
	test5();
	return 0;
}