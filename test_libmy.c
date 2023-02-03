#include <stdio.h>
#include "libmy.h"

int main()
{
	int errors_counter = 0;
	int test_value;
	int test_answer;
	int function_answer;
	
	test_value = 123;
	test_answer = 321;
	function_answer = reverse_decimal_digits(test_value);
	errors_counter += (function_answer != test_answer);
	
	test_value = 0;
	test_answer = 0;
	function_answer = reverse_decimal_digits(test_value);
	errors_counter += (function_answer != test_answer);
	
	test_value = 10000;
	test_answer = 1;
	function_answer = reverse_decimal_digits(test_value);
	errors_counter += (function_answer != test_answer);
	
	if (errors_counter)
	{
		printf("TEST FAIL.\n");
	}
	else
	{
		printf("TEST OK.\n");
	}
	return 0;
}
