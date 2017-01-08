#include <stdio.h>

char arr[4000][8000] = { 0 };
int N;

void init() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N * 2 + 1; j++) {
			arr[i][j] = ' ';
		}
	}
}

void re(int a, int b, int size) {
	if (size == 3) {
		arr[a][b + 2] = '*';
		arr[a + 1][b + 1] = arr[a + 1][b + 3] = '*';
		arr[a + 2][b] = arr[a + 2][b + 1] = arr[a + 2][b + 2] = arr[a + 2][b + 3] = arr[a + 2][b + 4] = '*';
	}
	else {
		int tsize = size / 2;

		re(a, b + tsize,tsize);
		re(a + tsize, b, tsize);
		re(a + tsize, b + size, tsize);
	}
}

int main() {

	scanf("%d", &N);

	init();

	re(0, 0, N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2 * N - 1; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}