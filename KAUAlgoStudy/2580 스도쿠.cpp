#include <stdio.h>
int arr[10][10] = { 0, };
int chk[10][10] = { 0, };
int mask[10] = {0,1,2,4,8,16,32,64,128,256 };
int count = 0;

void sudoku(int x, int y) {
	for (int i = 0; i < 9; i++) {
		if (i != x && chk[x][y] & mask[arr[i][y]]) {
			chk[x][y] &= ~mask[arr[i][y]];
		}

		if (i != y && chk[x][y] & mask[arr[x][i]]) {
			chk[x][y] &= ~mask[arr[x][i]];
		}
	}

	int n, m;

	for (n = 3; x >= n; n += 3);
	for (m = 3; y >= m; m += 3);

	for (int i = n-3; i < n; i++) {
		for (int j = m-3; j < m; j++) {
			if (i == x && j == y) continue;
			if (chk[x][y] & mask[arr[i][j]]) {
				chk[x][y] &= ~mask[arr[i][j]];
			}
		}
	}

	for (int i = 1; i < 10; i++) {
		if (mask[i] == chk[x][y]) {
			arr[x][y] = i;
			chk[x][y] = 0;
			count--;
		}
	}
}

int main() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 0) {
				chk[i][j] = 511;
				count++;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i][j] == 0) {
				sudoku(i, j);
			}
		}
	}

	while (count > 0) {

	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}