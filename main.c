#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int a = 0;
	printf("%d",ft_printf("%p %%", &a));
	// ft_printf("%s\n", "Hello World");
	// printf("%d",printf("%p %%",&a));
}