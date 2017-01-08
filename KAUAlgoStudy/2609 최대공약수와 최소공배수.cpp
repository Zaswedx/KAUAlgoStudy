#include <stdio.h>

int gcd(int a, int b) {

	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a%b);
	}
}

int main() {
	int a, b, G;

	scanf("%d%d", &a, &b);

	if (a < b) {
		int t = b;
		b = a;
		a = t;
	}

	G = gcd(a, b);

	printf("%d\n%d\n", G, a*b/G);

	return 0;
}