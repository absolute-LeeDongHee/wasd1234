#include <stdio.h>
#include <math.h> // fabs(float)

double my_sqrt(double number){
	double sqrt = number / 2;
	int count = 0;
	while(1) {
		sqrt = (sqrt + number/sqrt) / 2;
		printf("count : %d\t current sqrt : %lf\n", count, sqrt);
		if(fabs(number - sqrt*sqrt) < 0.0001) break;
	}
	return sqrt;
}

int main()
{
	double x;
	printf("Insert non-negative number x : ");
	scanf("%lf", &x);
	double result = my_sqrt(x);
	printf("\nsqrt(x) = %10lf, sqrt(x)^2 = %.30e\n",
		result, result*result);
	return 0;
}
