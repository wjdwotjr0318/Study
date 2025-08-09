#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int max1=-9999999, max2=-9999999;

void update_max(int x);

int main() {
	int n;
	while (1) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		update_max(n);
	}
	printf("%d %d\n", max1, max2);

	return 0;
}


void update_max(int x) {
	if (x > max1) {
		max2 = max1;
		max1 = x;
	}
	else if (x > max2 && x <= max1) {
		max2 = x;
	}
}