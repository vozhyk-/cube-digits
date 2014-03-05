#include <stdio.h>

#include "cube-digits.h"

extern int num_digits(long n);
extern int nth_digit(int n, long num);
extern int kth_cube_digit(int k);

short ask_read_int(char *question, int *result);

int main() {
	int k; //k-th digit

	while (!ask_read_int("k: ", &k) || k <= 0)
		printf("Value invalid. Try again. k must be >0.\n");

	printf("digit #%d = %d\n", k, kth_cube_digit(k));
	
	return 0;
}

short ask_read_int(char *question, int *result) {
	printf(question);
	int scanned = scanf("%d", result);
	return scanned >= 1
		&& scanned != EOF;
}
