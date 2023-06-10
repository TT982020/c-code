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
		//玩家下棋
		PlayerMove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret!='C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		displayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("玩家赢\n");
	}
	else if (ret=='#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局");
	}
}

void test() {
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	do
	{
		printf("请选择:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("三子棋\n");
			game();
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}