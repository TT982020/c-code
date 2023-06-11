#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int row, int col, char set) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	for (int i = 0; i <= col ; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row ; i++)
	{

		printf("%d ", i);
		for (int j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void SetMine(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	int x = 0, y = 0;
	while (count)
	{
		x = rand() % row + 1;//1-9
		y = rand() % col + 1;//1-9
		if (board[x][y]=='0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y){
	int count = 0;
	for (int i = x-1; i <= x+1 ; i++)
	{
		for (int j = y - 1; j <= y + 1; j++) {
			count += mine[i][j] - '0';
		}
	}
	return count;
}

void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("开始扫雷\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else {
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else {
			printf("请输入正确的坐标位置\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功!\n");
		DisplayBoard(mine, row, col);
	}
}