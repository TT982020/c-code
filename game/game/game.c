#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void initBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0;  j < COL;  j++)
		{
			printf(" %c ", board[i][j]);
			if (j<COL-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i<ROW-1)
		{
			for (int j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col) {
	printf("玩家走:>\n");
	while (1)
	{
		int x = 0, y = 0;
		printf("请输入移动的坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= ROW) {
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("该位置已存放元素\n");
			}
		}
		else
		{
			printf("请输入正确的坐标\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col) {
	printf("电脑走\n");
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (board[x][y]==' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}

	}
	return 1;
}
/*
*  玩家赢    '*'
*  电脑赢    '#'
*  平局      'Q'
*  游戏继续  'C'
*/
char IsWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	for ( i = 0; i < ROW; i++)
	{
		if (board[i][0]==board[i][1] && board[i][1]== board[i][2] && board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	for ( i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	if (board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (IsFull(board,row, col))
	{
		return 'Q';
	}
	return 'C';
}