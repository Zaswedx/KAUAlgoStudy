#include <stdio.h>
#include <algorithm>

int compare(const void *a, const void *b) {
	if (*(int *)a > *(int *)b)
		return 1;
	else if (*(int *)a < *(int *)b)
		return -1;
	else
		return 0;
}

int main() {
	int N;
	int P[1001];
	int tot = 0, sum = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &P[i]);
	}

	qsort(P, N, sizeof(int), compare);

	for (int i = 0; i < N; i++) {
		sum += P[i];
		tot += sum;
	}

	printf("%d\n", tot);

	return 0;
}