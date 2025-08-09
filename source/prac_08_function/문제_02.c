#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int n);

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int ans = sum(b) - sum(a-1);
	printf("%d", ans);
	return 0;
}

int sum(int n) {
	return n * (n + 1) / 2;
}