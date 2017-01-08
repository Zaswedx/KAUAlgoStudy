#include <stdio.h>
#include <algorithm>

int compare(const void *first, const void *second) {
	if (*(char *)first > *(char *)second)
		return 1;
	else if (*(char*)first < *(char*)second)
		return -1;
	else
		return 0;
}


int L, C;
char arr[20] = { 0, }, str[20] = { 0 };
char s_mo[] = { 'a','e','i','o','u' };

void re(int x, int cnt, int mo) {
	str[cnt - 1] = arr[x];
	str[cnt] = '\0';

	for (int i = 0; i < 5; i++) {
		if (arr[x] == s_mo[i]) {
			mo++; break;
		}
	}

	if (cnt == L) {
		if (mo>=1 && (L-mo) >= 2)
			printf("%s\n", str);
	}
	else {
		for (int i = x + 1; i < C; i++) {
			re(i, cnt + 1,mo);
		}
	}
}

int main() {
	scanf("%d%d\n", &L, &C);

	for (int i = 0; i < C; i++) {
		scanf("%c ", &arr[i]);
	}

	qsort(arr, C, sizeof(char), compare);

	for (int i = 0; i <= C - L; i++) {
		re(i, 1, 0);
	}

	return 0;
}