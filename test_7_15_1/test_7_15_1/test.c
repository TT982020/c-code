#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
enum Day
{
	Mon=1,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};
union un
{
	int a;
	char c;
};
int check_sys() {
	/*int a = 1;
	return *((char*)&a);*/
	union
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}
union un1
{
	char arr[5]; //1
	int i; //4
};
union un2
{
	short c[7];
	int i;
};
int main() {
	/*enum Day d = Sat;
	printf("%d\n", Mon);
	printf("%d\n", Tues);
	printf("%d\n", Wed);
	printf("%d\n", Thur);
	printf("%d\n", Fri);
	printf("%d\n", Sat);
	printf("%d\n", Sun);*/
	union un u;
	u.a = 0x00000001;
	printf("%d\n", u.c);
	u.c = 0x00;
	printf("%d\n", u.a);

	//�ж�ϵͳ�Ǵ�˻���С�˴洢
	int a = 0x00000001;
	//С�� 01 00 00 00
	//��� 00 00 00 01
	int ret = check_sys();
	if (ret==1)
	{
		printf("С��\n");
	}
	else {
		printf("���\n");
	}

	//���ڶ���
	printf("%d\n", sizeof(union un1));
	printf("%d\n", sizeof(union un2));

}