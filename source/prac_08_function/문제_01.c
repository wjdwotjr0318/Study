#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int add(int x, int y);

int main() {
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		sum = add(sum,i);
	}
	printf("%d", sum);
}

int add(int x, int y) {
	return x + y;
}