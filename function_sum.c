#include <stdio.h>
int func_sum(int a, int b)
{
       	return a + b;
}

int main() {
	int a, b,sum;
	printf("Input two integers : ");
	scanf("%d%d", &a, &b);

	sum = func_sum(a, b);
	if (sum < 0) {
		printf("a + b : %d, 0보다 작습니다.\n", sum);
	}
	else if (sum == 0) {
		printf("a +b : %d, 0입니다.\n", sum);
	}
	else {
		printf("a + b : %d, 0보다 큽니다.\n", sum);
	}
	return 0;
}
