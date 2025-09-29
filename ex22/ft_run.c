#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"
int	main(int argc, char* argv[])
{
	int	x;

	x = atoi(argv[1]);
	if (argc == 2)
	{
		printf("el absoluto de %d es %d\n", atoi(argv[1]), ABS(atoi(argv[1])));
		return (0);
	}
}

