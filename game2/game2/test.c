#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu() {
	printf("*******************************\n");
	printf("****  1. play     0. exit  ****\n");
	printf("*******************************\n");
}
void game() {
	printf("ɨ����Ϸ��ʼ\n");
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//����
	FineMine(mine, show, ROW, COL);
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}
int main() {
	test();
}