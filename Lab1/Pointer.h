#pragma once
#include <iostream>

using namespace std;

//1
void swap(int* a, int* b);

//2
int* sum(int* a, int* b);

//3
void inputArray(int*& a, int& n);

//4
void printArray(int* a, int n);

//5
int* findMax(int* arr, int n);

//6
int* findLongestAscendingSubarray(int* a, int n, int& length);

//8
int* concatenate2Arrays(int* a, int* b, int na, int nb, int& length);

//9
int* merge2Arrays(int* a, int* b, int na, int nb, int& nc);

//10
void generateMatrix1(int**& A, int& length, int& width);

//11
int** generateMatrix2(int* a, int* b, int na, int nb);

//12
void swapRows(int** a, int length, int width);

void swapColumns(int** a, int length, int width);

//13
int** transposeMatrix(int** a, int length, int width);

//14
int** concatenate2MatricesH(int** a, int** b, int length, int width);

int** concatenate2MatricesV(int** a, int** b, int length, int width);

//15
bool multiple2Matrices(int** a, int** b, int lengtha, int widtha, int lengthb, int widthb);

//16
int** findSubmatrix(int** a, int length, int width, int& length_, int& width_);