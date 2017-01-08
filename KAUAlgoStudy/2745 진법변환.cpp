#include <stdio.h>
#include <string.h>

int main() {
	int B;
	char N[10000];
	int asciitable[100] = { 0, };

	scanf("%s", N);
	scanf("%d", &B);

	for (int i = 0; i < 10; i++) {
		asciitable['0' + i] = i;
	}

	for (int i = 0; i <= ('Z' - 'A'); i++) {
		asciitable['A' + i] = i + 10;
	}

	int len = strlen(N), sum = 0;

	for (int i = len - 1, temp = 1; i >= 0; i--, temp*=B) {
		sum += temp * asciitable[N[i]];
	}

	printf("%d\n", sum);

	return 0;
}