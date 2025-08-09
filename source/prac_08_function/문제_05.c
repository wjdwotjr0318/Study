#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

print_triangle(int x);

int main() {
	int n;
	while (1) {
		scanf("%d", &n);
		if (n <= 0) {
			break;
		}
		print_triangle(n);
	}

}

print_triangle(int x) {
	for (int i = 1; i <= x; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}