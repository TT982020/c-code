#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu() {
	printf("***************************\n");
	printf("****  1.play   0.exit  ****\n");
	printf("***************************\n");
}

void game() {
	char board[ROW][COL] = { 0 };
	char ret = 0;
	initBoard(board, ROW, COL);
	displayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("���Ӯ\n");
	}
	else if (ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��");
	}
}

void test() {
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	do
	{
		printf("��ѡ��:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("������\n");
			game();
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}