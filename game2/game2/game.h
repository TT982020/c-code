#ifndef __GAME_H__
#define __GAME_H__

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10


void InitBoard(char board[ROWS][COLS], int row, int col, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
#endif // !__GAME_H__

