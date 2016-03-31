#include "libft.h"

void	show_binary_value(unsigned long a)
{
	unsigned int i;
	unsigned int size; 
	unsigned int mask;
	
	i = 0;
	size = sizeof(a) * 8;
	mask = 1 << (size - 1);
	while (i < size)
	{
		if (i % 8 == 0 && i != 0)
			ft_putstr("\n    ");
		ft_putnbr(!!(a & mask));
		mask = mask >> 1;
		i++;
	}
	ft_putendl("\n");
}

