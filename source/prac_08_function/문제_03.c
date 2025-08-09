#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	int n, ans = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		ans += sum(i);
	}
	printf("%d", ans);
}

int sum(n) {
	return n * (n + 1) / 2;
}