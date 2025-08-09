#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_row1(int x);
void print_row2(int x);

int main() {
	int n;
	scanf("%d", &n);
	print_row1(n);
	for (int i = 0; i < n - 2; i++) {
		print_row2(n);
	}
	print_row1(n);
}

void print_row1(int x) {
	for (int i = 0; i < x; i++) {
		printf("%d", x);
	}
	printf("\n");
}
void print_row2(int x) {
	printf("%d", x);
	for (int i = 0; i < x-2; i++) {
		printf(" ");
	}
	printf("%d", x);
	printf("\n");
}