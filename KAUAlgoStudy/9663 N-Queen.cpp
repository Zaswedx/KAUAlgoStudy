#include <stdio.h>
#include <stdlib.h>

int N;
int count = 0;
int arr[16];

void nqueen(int x) {
	if (x == N) {
		count++;
		return;
	}

	for (int i = 0; i < N; i++) {
		bool chk = true;
		arr[x] = i;
		
		for (int j = 0; j < x; j++) {
			if (arr[j] == arr[x] || x - j == abs(arr[x] - arr[j])) {
				chk = false;
				break;
			}
		}
		if (chk) nqueen(x + 1);
	}
}

int main() {
	scanf("%d", &N);

	nqueen(0);
	printf("%d\n", count);

	return 0;
}