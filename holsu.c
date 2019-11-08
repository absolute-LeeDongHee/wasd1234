#include <stdio.h>
int odd_sum(int onum)
{
	int result = 0;
	int i = 1;
	while (i <= onum) {
		if (i%2 == 1) {
			result += i;
		}
		i++;
	}
	return result;
}
int even_sum(int onum) {
	int result = 0;
	for (int i = 1 ; i <= onum ; i++) {
		if (i%2 == 0) {
			result += i;
		}
	}
	
	return result;
}

int main() {
	int onum;
	printf("홀수, 짝수 덧셈을 합니다. 1부터 어느 수 까지 할까요?\n");
	scanf("%d", &onum);
	printf("1부터 %d까지 홀수의 합 : %d\n", onum, odd_sum(onum));
	printf("1부터 %d까지 짝수의 합 : %d\n", onum, even_sum(onum));

	return 0;
}

