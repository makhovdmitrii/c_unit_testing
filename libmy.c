#include <stdio.h>
#include <stdlib.h>

#define ASSERT(condition, message) \
if (!(condition)) \
{ \
	printf("ASSERTION FAILURE: %s\n", message); \
	exit(1); \
}

int reverse_decimal_digits(int x)
{
	// let's start from checking preconditions:
	ASSERT(x >= 0 , "value should not be negative!");
	//ASSERT(x < MAX_INT , "value should be lesser than a half of MAX_INT!");
	
	// Function body
	int result;
	result = x; // FIXME: need to really implement function
	
	//let's check postconditions:
	ASSERT(result >= 0, "result should not be negative!");
	return result; // FIXME: need to really implement function
}
