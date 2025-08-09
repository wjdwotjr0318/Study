#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int func1(int x);

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", func1(n));
	return 0;
}

int func1(int x) {
	int ans = 2 * x * x - 5 * x + 1;
	return ans;
}