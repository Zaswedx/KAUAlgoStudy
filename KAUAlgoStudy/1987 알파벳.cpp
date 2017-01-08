#include <stdio.h>

int R, C;
char arr[21][21];
int chk[37] = { 0, };
int dir[4][2] = { { -1 ,0},{1,0},{0,-1},{0,1} };
int max = 0;

void re(int x, int y, int cnt) {
	chk[arr[x][y] - 'A']++;

	for (int i = 0; i < 4; i++) {
		int tx = x + dir[i][0];
		int ty = y + dir[i][1];

		if (tx < 0 || ty < 0) continue;
		if (tx >= R || ty >= C) continue;
		if (chk[arr[tx][ty] - 'A'] > 0) continue;

		re(tx, ty, cnt+1);
	}

	if (max < cnt) max = cnt;

	chk[arr[x][y] - 'A']--;
}

int main() {
	scanf("%d%d", &R, &C);

	for (int i = 0; i < R; i++) {
		scanf("%s", arr[i]);
	}

	re(0, 0, 1);

	printf("%d\n", max);

	return 0;
}