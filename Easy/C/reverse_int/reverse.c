// Given a signed 32-bit integer x, return x with its digits reversed. 
// If reversing x causes the value to go outside the signed 32-bit 
// integer range [-231, 231 - 1], then return 0.



#include <stdio.h>
#include <limits.h>

int reverse_int(int x)
{
	int result = 0;
	int val = x;

	while (val != 0)
	{
		int pop = val % 10;
		val /= 10;

		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && pop > 7))
			return 0;
		if (result < INT_MIN / 10 || (result == INT_MIN / 10 && pop < -8))
			return 0;

		result = result * 10 + pop;
	}

	return result;
}

int main() {
	int start = 12345;
	int end = reverse_int(start);

	printf("Start Value: %d\n", start);
	printf("End Value: %d\n", end);
}