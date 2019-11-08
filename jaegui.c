#include <stdio.h>
void Fac (int n) {
	int sum = 1;
	if (n > 1) {
		sum = sum * n;
	       return n * Fac(n-1);
	}
	else printf ("%d", &sum);
}

int main() {
	int n;
	scanf("%d", &n);
	Fac(n);
	return 0;
}
