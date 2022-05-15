#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define easy_count 10
#define normal_count 20


#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <cstdlib>
using namespace std;
void initboard(char board[ROWS][COLS], int row, int cols,char sets);
void display(char board[ROWS][COLS], int row, int col);
void set(char board[ROWS][COLS],int row,int col);
void find(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);