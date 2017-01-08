#include <stdio.h>
int main() {
	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int j;
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		for (; j < N; j++) {
			printf("  ");
		}
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = N - 2; i >= 0; i--) {
		int j;
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		for (; j < N; j++) {
			printf("  ");
		}
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}