#include "Recusion.h"

//1
int sum(int n) {
	if (n == 0) {
		return 0;
	}
	return sum(n - 1) + n;
}

//2
int fact(int n) {
	if (n == 0) {
		return 1;
	}
	return fact(n - 1) * n;
}

//3
int powX(int x, int n) {
	if (n == 0) {
		return 1;
	}

	return powX(x, n - 1) * x;
}

//4
int count(int n) {
	if (n == 0) {
		return 0;
	}
	return count(n-1) + 1;
}

//5
int everyEven(int n) {
	if (n == 0)
		return 0;
	if (n % 2 == 0) {
		return everyEven(n / 10) + 1;
	}
	return everyEven(n / 10);
}

//6
int countCommonDivisor(int a, int b, int n) {//n=1
	if (n == a || n == b) {
		if (a % n == 0 && b % n == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}
	if (a % n == 0 && b % n == 0) {
		return countCommonDivisor(a, b, n+1) + 1;
	}
	return countCommonDivisor(a, b, n+1);
}

//7
int gcd(int a, int b) {
	if (a < b) {
		swap(a, b);
	}
	if (a % b == 0) {
		return b;
	}
	return gcd(a % b, b);
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

//8
int reverse(int n,int tmp) {
	if (n == 0) {
		return tmp;
	}	
	tmp *= 10;
	tmp += n % 10;

	return reverse(n / 10,tmp);
}

//9
int fib(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}