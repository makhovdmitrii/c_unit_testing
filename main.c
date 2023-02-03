#include <stdio.h>
#include "libmy.h"

int main()
{
	int x;
	
	scanf("%d", &x);
	while (x != 0 )
	{
		x = reverse_decimal_digits(x);
		printf("reversed number: %d\n", x);
		scanf("%d", &x);
	}
	
	return 0;
}