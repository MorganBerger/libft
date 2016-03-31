#include "libft.h"

void ft_echo(t_type type, void *var)
{
	if (type == t_int)
		ft_putnbr(*((int*)var));
	else if (type == t_char)
		ft_putchar(*((char*)var));
	else if (type == t_string)
		ft_putstr((char*)var);
	else if (type == t_boolean)
		ft_putstr(((*((t_bool*)var)) == true ? "true" : "false" ));
	else if (type == t_binary)
		show_binary_value(*((int*)var));
}
