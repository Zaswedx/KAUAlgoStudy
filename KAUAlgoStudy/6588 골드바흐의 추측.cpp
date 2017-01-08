#include <stdio.h>

int arr[1000000] = { 0, };
int main() {
	int n;

	for (int i = 2; i <= 1000000; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= 1000; i++) {
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= 1000000; j += i) {
			arr[j] = 0;
		}
	}

	while (1) {
		bool flag = false;

		scanf("%d", &n);

		if (n == 0) break;

		for (int i = 3; i * 2 <= n; i += 2) {
			if (arr[i] != 0 && arr[n-i] != 0) {
				flag = true;
				printf("%d = %d + %d\n", n, i, n-i);
				break;
			}
		}
		if (!flag)
			printf("Goldbach's conjecture is wrong.\n");
	}

	return 0;
}