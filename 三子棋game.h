#pragma once
#define ROW 3
#define COL 3
#include <iostream>
#include <stdlib.h>
#include <time.h>
//函数声明
void initboard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void player(char board[ROW][COL],int row,int col);
void com(char board[ROW][COL], int row, int col);
char win(char board[ROW][COL], int row, int col);//四种状态，玩家，电脑，平局，继续
int full(char board[ROW][COL], int row, int col);