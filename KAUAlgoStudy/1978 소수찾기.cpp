#include <stdio.h>

int main() {
	int N;
	int arr[101];

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	int n_count = 0;
	for (int k = 0; k < N; k++) {
		int count = 0;
		for (int i = 2; i <= arr[k]; i++) {
			if (arr[k] % i == 0) count++;
		}

		if (count == 1) n_count++;
	}

	printf("%d\n", n_count);

	return 0;
}