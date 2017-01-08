#include <stdio.h>

int main() {
	int M, N;
	int arr[101] = { 0, };
	int min = -1, sum = 0;

	scanf("%d%d", &M, &N);

	for (int i = 1; i <= 100; i++) {
		arr[i] = i * i;
	}

	for (int i = 0; i <= 100; i++) {
		if (arr[i] < M) continue;
		if (arr[i] > N) break;
		if (min == -1) min = arr[i];
		sum += arr[i];
	}

	if (min>0) printf("%d\n%d\n", sum, min);
	else printf("-1\n");

	return 0;
}