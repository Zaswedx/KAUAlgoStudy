#include <stdio.h>
int arr[21];
int N, S;
int count;

void re(int x,int sum) {
	sum += arr[x];

	if (sum == S) {
		count++;
	}

	for (int i = x + 1; i < N; i++) {
		re(i, sum);
	}
}

int main() {

	scanf("%d%d", &N, &S);

	for (int k = 0; k < N; k++) {
		scanf("%d", &arr[k]);
	}

	for (int i = 0; i < N; i++) {
		re(i, 0);
	}

	printf("%d\n", count);

	return 0;
}