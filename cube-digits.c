#include <stdio.h>

#include "cube-digits.h"

extern int num_digits(long n);
extern int nth_digit(int n, long num);
extern int kth_cube_digit(int k);

int main() {
	int k; //k-th digit

	printf("k: ");
	scanf("%d", &k);

	printf("digit #%d = %d\n", k, kth_cube_digit(k));
	
	return 0;
}
