#include <stdio.h>
#include <math.h>

#include "cube-digits.h"

extern int num_digits(long n);
extern int nth_digit(int n, long num);
extern int kth_cube_digit(int k);

void test_num_digits(long n, int needed);
void test_nth_digit(int n, long num, int needed);

int main() {
	printf("num_digits:\n");
	test_num_digits(0, 0);
	test_num_digits(1, 1);
	test_num_digits(10, 2);
	test_num_digits(1048576, 7);

	printf("nth_digit:\n");
	test_nth_digit(0, 1, 0);
	test_nth_digit(1, 10, 1);
	test_nth_digit(2, 123, 2);
	test_nth_digit(5, 1048576, 5);
	
	printf("cube digits:\n  ");
	for (int i = 1; i <= 12; ++i)
		printf("%d", kth_cube_digit(i));
	printf("\n");
	
	return 0;
}

void test_num_digits(long n, int needed) {
	int digits = num_digits(n);
	
	printf("  num_digits(%8ld) = %2d | %d\n", n, digits, digits == needed);
}

void test_nth_digit(int n, long num, int needed) {
	int digit = nth_digit(n, num);

	printf("  nth_digit(%2d, %8ld) = %d | %d\n", n, num, digit, digit == needed);
}
