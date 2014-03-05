#include <math.h>

int num_digits(long n);
int nth_digit(int n, long num);
int kth_cube_digit(int k);


int num_digits(long n) {
/*
	int digits = 0;

	for (digits = 0; n != 0; n /= 10)
		++digits;
	return digits;
*/
	return floor(log10(n)) + 1;
}

// 1st digit from the left is #1
int nth_digit(int n, long num) {
	int digits = num_digits(num);
	int digits_backwards = digits - n;

	num /= pow(10, digits_backwards);
	return num % 10;
}

int kth_cube_digit(int k) {
	int prev_digits = 0, cube_digits;
	int i;
	long cube; // cube of i
	
	for (i = 1; ; ++i) {
		cube = i*i*i;
		cube_digits = num_digits(cube);
		
		if (prev_digits + cube_digits >= k)
			return nth_digit(k - prev_digits, cube);
		
		prev_digits += cube_digits;
	}
}
