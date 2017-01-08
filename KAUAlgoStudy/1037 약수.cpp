#include <stdio.h>
#include <algorithm>

int compare(const void *first, const void *second) {
	if (*(int *)first > *(int *)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main() {
	int N;
	int arr[51];

	scanf("%d", &N);

	for (int k = 0; k < N; k++) {
		scanf("%d", &arr[k]);
	}

	qsort(arr, N, sizeof(int), compare);

	printf("%d\n", arr[0] * arr[N - 1]);

	return 0;
}