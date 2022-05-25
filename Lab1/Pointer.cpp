#include "Pointer.h"

//1
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


//2
int* sum(int* a, int* b) {
	int* sum = new int;
	*sum = *a + *b;
	return sum;
}

//3
void inputArray(int*& a, int& n) {
	cout << "n: "; cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
}


//4
void printArray(int* a, int n) {
	for (int i{}; i < n; i++) {
		cout << a[i] << " ";
	}
}

//5
int* findMax(int* arr, int n) {
	int* max = new int;
	*max = arr[0];

	for (int i = 0; i < n; i++) {
		if (arr[i] >> *max) {
			*max = arr[i];
		}
	}

	return max;
}

//6
int* findLongestAscendingSubarray(int* a, int n, int& length) {
	int cur = 1, pos = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] <= a[i + 1]) {
			cur++;
		}
		else {
			if (length <= cur) {
				pos = i - cur + 1;
				length = cur;
			}
			cur = 1;
		}
	}
	int* resArr = new int[length];
	for (int i{}; i < length; i++) {
		resArr[i] = a[pos];
		pos++;
	}

	return resArr;
}

//8
int* concatenate2Arrays(int* a, int* b, int na, int nb, int& length) {
	length = na + nb;
	int* res = new int[length];
	int i{};
	for (i; i < na; i++) {
		res[i] = a[i];
	}
	for (i; i < length; i++) {
		res[i] = b[i - na];
	}
	return res;
}

//9
int* merge2Arrays(int* a, int* b, int na, int nb, int& nc) {
	nc = na + nb;
	int* res = new int[nc];
	int i{};
	for (i; i < na; i++) {
		res[i] = a[i];
	}
	for (i; i < nc; i++) {
		res[i] = b[i - na];
	}
	for (int i{}; i < nc - 1; i++) {
		for (int j = i; j < nc; j++) {
			if (res[i] > res[j]) {
				swap(res[i], res[j]);
			}
		}
	}
	return res;
}

//10
void generateMatrix1(int**& A, int& length, int& width) {
	cout << "Input length: "; cin >> length;
	cout << "Input width: "; cin >> width;
	A = new int* [width];
	for (int i{}; i < width; i++) {
		A[i] = new int[length];
	}

	for (int i{}; i < width; i++) {
		for (int j{}; j < length; j++) {
			A[i][j] = rand() % 100;
		}
	}

	for (int i{}; i < width; i++) {
		for (int j{}; j < length; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	return;
}

//11
int** generateMatrix2(int* a, int* b, int na, int nb) {
	int** A = new int* [na];
	for (int i{}; i < na; i++) {
		A[i] = new int[nb];
	}
	for (int i{}; i < na; i++) {
		for (int j{}; j < nb; j++) {
			A[i][j] = a[i] * b[j];
		}
	}

	return A;
}

//12
void swapRows(int** a, int length, int width) {
	if (a == NULL) {
		cout << "Your array are not initialized!!!";
		return;
	}
	
	int firstRow, secondRow;
	cout << "1st Row: "; cin >> firstRow;
	cout << "2nd Row: "; cin >> secondRow;

	swap(a[firstRow], a[secondRow]);

	for (int i{}; i < width; i++) {
		for (int j{}; j < length; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return;
}

void swapColumns(int** a, int length, int width) {
	if (a == NULL) {
		cout << "Your array are not initialized!!!";
		return;
	}

	int firstCol, secondCol;
	cout << "1st Col: "; cin >> firstCol;
	cout << "2nd Col: "; cin >> secondCol;

	swap(a[firstCol], a[secondCol]);

	for (int i{}; i < width; i++) {
		for (int j{}; j < length; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}	

	return;
}

//13
int** transposeMatrix(int** a, int length, int width) {
	int** res = new int * [length];
	int i, j;
	for (i = 0; i < length; i++) {
		res[i] = new int[width];
	}

	int newLength = width, newWidth = length;

	for (i = 0; i < newWidth; i++) {
		for (j = 0; j < newLength; j++) {
			res[i][j] = a[j][i];
		}
	}

	return res;
}

//14
int** concatenate2MatricesH(int** a, int** b, int length, int width) {
	int** res = new int* [width]; 
	for (int i{}; i < width; i++) {
		res[i] = new int[length * 2];
	}

	for (int i{}; i < width; i++) {
		for (int j{}; j < length * 2; j++) {
			if (j < length) {
				res[i][j] = a[i][j];
				continue;
			}
			res[i][j] = b[i][j - length];
		}
	}

	return res;
}

int** concatenate2MatricesV(int** a, int** b, int length, int width) {
	int** res = new int* [width * 2];
	for (int i{}; i < width * 2; i++) {
		res[i] = new int[length];
	}

	for (int i{}; i < width * 2; i++) {
		for (int j{}; j < length; j++) {
			if (i < width) {
				res[i][j] = a[i][j];
				continue;
			}
			res[i][j] = b[i - width][j];
		}
	}

	return res;
}


//15
bool multiple2Matrices(int** a, int** b, int lengtha, int widtha, int lengthb, int widthb) {
	if (lengtha == widthb || widtha == lengthb)
		return true;
	else
		return false;
}

//16
int** findSubmatrix(int** a, int length, int width, int& length_, int& width_) {
	cout << "Input sub length: "; cin >> length_;
	cout << "Input sub width: "; cin >> width_;
	if (length_ > length || width_ > width) {
		cout << "Invalid! Bugggggggg!!!";
		return NULL;
	}
	
	int xPos, yPos;
	int sum = 0, sumMax = 0;

	for (int i = 0; i < width - width_; i++) {
		for (int j = 0; j < length - length_; j++) {
			sum = 0;
			for (int iSub = i; iSub < i + length_; iSub++) {
				for (int jSub = j; jSub < j + width_; jSub++) {
					sum += a[iSub][jSub];
				}
			}
			if (sumMax <= sum) {
				xPos = i;
				yPos = j;
				sumMax = sum;
			}
		}
	}

	int** res = new int* [width_];
	for (int i = 0; i < width_; i++) {
		res[i] = new int[length_];
	}
	
	for (int i = 0, m = xPos; i < width_; i++, m++) {
		for (int j = 0, n = yPos; j < length_; j++, n++) {
			res[i][j] = a[m][n];
		}
	}

	return res;
}
