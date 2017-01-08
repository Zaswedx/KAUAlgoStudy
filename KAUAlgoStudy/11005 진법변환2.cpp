#include <stdio.h>
#include <string.h>

int main() {
	int N, B;
	char tout[10000] = { 0 }, out[10000] = { 0, };
	int idx = 0;
	char table[36] = { '0','1','2','3','4','5','6','7','8','9' };

	scanf("%d%d", &N, &B);

	for (int i = 10; i < 36; i++) {
		table[i] = 'A' + (i - 10);
	}

	while (N > 0) {
		int m = N%B;

		tout[idx++] = table[m];

		N /= B;
	}

	int len = strlen(tout);
	for (int i = 0; i < len; i++) {
		out[len - 1 - i] = tout[i];
	}

	printf("%s\n", out);

	return 0;
}