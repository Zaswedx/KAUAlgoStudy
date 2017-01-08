#include <stdio.h>

char arr[7000][7000] = { 0 };
int N;

void init() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			arr[i][j] = ' ';
		}
	}
}

void re(int a, int b,int size) {
	if (size == 1) arr[a][b] = '*';
	else {
		int tsize = size / 3;

		for (int i = a; i < a + size; i += tsize) {
			for (int j = b; j < b + size; j += tsize) {
				if (i == a + tsize && j == b + tsize) continue;
				re(i, j, tsize);
			}
		}
	}
}

int main() {

	scanf("%d", &N);

	init();

	re(0, 0, N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}