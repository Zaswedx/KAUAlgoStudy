#include <stdio.h>

int main() {
	int N, sum = 0;

	scanf("%d", &N);

	int d = 5;

	while (d <= N) {
		sum += (N / d);
		d *= 5;
	}

	printf("%d\n", sum);

	return 0;
}