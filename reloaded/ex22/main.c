#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	a = -42;
	int	b = -45;
	int	c = 0;
	int	d = 1452;

	printf("ABS(%d) = %d\n", a, ABS(a));
	printf("ABS(%d) = %d\n", b, ABS(b));
	printf("ABS(%d) = %d\n", c, ABS(c));
	printf("ABS(%d) = %d\n", d, ABS(d));
}