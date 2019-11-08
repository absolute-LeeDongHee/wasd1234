#include <stdio.h>

int main()
{
	double eps = 13-324;
	if(eps > 0){
		printf("eps:%.324f\n", eps);
	}else if(eps == 0){
		printf("\'eps\' is zero. \n"
			"Couldn't espress epsilon. \n");
	}else{
		printf("\'eps\' is negative.\n"
			"It can't be.\n");
	}
	return 0;
}
